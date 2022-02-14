
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_sevsegdev {int shadow_power; int textlength; unsigned char* text; int textmode; int* decimals; TYPE_1__* udev; } ;
typedef int gfp_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,int,int,unsigned char*,int,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(struct usb_sevsegdev *VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 int VAR_4;
 unsigned char *VAR_5;
 u8 VAR_6 = 0;

 if(VAR_1->shadow_power != 1)
  return;

 VAR_5 = FUNC_2(VAR_0, VAR_2);
 if (!VAR_5)
  return;


 for (VAR_4 = 0; VAR_4 < VAR_1->textlength; VAR_4++)
  VAR_5[VAR_4] = VAR_1->text[VAR_1->textlength-1-VAR_4];

 VAR_3 = FUNC_3(VAR_1->udev,
   FUNC_4(VAR_1->udev, 0),
   0x12,
   0x48,
   (85 * 0x100) + 10,
   (0 * 0x100) + VAR_1->textmode,
   VAR_5,
   VAR_1->textlength,
   2000);

 if (VAR_3 < 0)
  FUNC_0(&VAR_1->udev->dev, "write retval = %d\n", VAR_3);

 FUNC_1(VAR_5);


 for (VAR_4 = 0; VAR_4 < sizeof(VAR_1->decimals); VAR_4++)
  VAR_6 |= VAR_1->decimals[VAR_4] << VAR_4;

 VAR_3 = FUNC_3(VAR_1->udev,
   FUNC_4(VAR_1->udev, 0),
   0x12,
   0x48,
   (86 * 0x100) + 10,
   (0 * 0x100) + VAR_6,
   ((void*)0),
   0,
   2000);

 if (VAR_3 < 0)
  FUNC_0(&VAR_1->udev->dev, "decimal retval = %d\n", VAR_3);
}
