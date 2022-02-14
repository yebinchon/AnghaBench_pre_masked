
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct usb_interface {int dev; int cur_altsetting; } ;
struct dlfb_data {int sku_pixel_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int ,char*,int ) ;
 scalar_t__ FUNC_7 (int ,int,char**) ;

__attribute__((used)) static int FUNC_8(struct dlfb_data *VAR_2,
     struct usb_interface *VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_1, VAR_0);
 if (!VAR_5)
  return 0;
 VAR_4 = VAR_5;

 VAR_7 = FUNC_6(FUNC_3(VAR_3),
     0x5f,
     0, VAR_4, VAR_1);


 if (VAR_7 < 0) {
  if (0 == FUNC_7(VAR_3->cur_altsetting,
   0x5f, &VAR_4))
   VAR_7 = (int) VAR_4[0];
 }

 if (VAR_7 > 5) {
  FUNC_1(&VAR_3->dev,
    "vendor descriptor length: %d data: %11ph\n",
    VAR_7, VAR_4);

  if ((VAR_4[0] != VAR_7) ||
      (VAR_4[1] != 0x5f) ||
      (VAR_4[2] != 0x01) ||
      (VAR_4[3] != 0x00) ||
      (VAR_4[4] != VAR_7 - 2))
   goto unrecognized;

  VAR_6 = VAR_4 + VAR_7;
  VAR_4 += 5;

  while (VAR_4 < VAR_6) {
   u8 VAR_8;
   u16 VAR_9;

   VAR_9 = *VAR_4++;
   VAR_9 |= (u16)*VAR_4++ << 8;
   VAR_8 = *VAR_4++;

   switch (VAR_9) {
   case 0x0200: {
    u32 VAR_10 = *VAR_4++;
    VAR_10 |= (u32)*VAR_4++ << 8;
    VAR_10 |= (u32)*VAR_4++ << 16;
    VAR_10 |= (u32)*VAR_4++ << 24;
    FUNC_2(&VAR_3->dev,
      "DL chip limited to %d pixel modes\n",
      VAR_10);
    VAR_2->sku_pixel_limit = VAR_10;
    break;
   }
   default:
    break;
   }
   VAR_4 += VAR_8;
  }
 } else {
  FUNC_1(&VAR_3->dev, "vendor descriptor not available (%d)\n",
    VAR_7);
 }

 goto success;

unrecognized:

 FUNC_0(&VAR_3->dev, "Unrecognized vendor firmware descriptor\n");

success:
 FUNC_4(VAR_5);
 return 1;
}
