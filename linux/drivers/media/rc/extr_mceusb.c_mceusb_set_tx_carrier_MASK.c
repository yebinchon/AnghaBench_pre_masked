
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct mceusb_dev* priv; } ;
struct mceusb_dev {int carrier; int dev; } ;
typedef int cmdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mceusb_dev*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_5, u32 VAR_6)
{
 struct mceusb_dev *VAR_7 = VAR_5->priv;
 int VAR_8 = 10000000;
 int VAR_9 = 0, VAR_10 = 0;
 unsigned char VAR_11[4] = { VAR_1,
        VAR_2, 0x00, 0x00 };


 if (VAR_7->carrier != VAR_6) {

  if (VAR_6 == 0) {
   VAR_7->carrier = VAR_6;
   VAR_11[2] = VAR_3;
   VAR_11[3] = VAR_4;
   FUNC_0(VAR_7->dev, "disabling carrier modulation");
   FUNC_1(VAR_7, VAR_11, sizeof(VAR_11));
   return 0;
  }

  for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
   VAR_10 = (VAR_8 >> (2 * VAR_9)) / VAR_6;
   if (VAR_10 <= 0xff) {
    VAR_7->carrier = VAR_6;
    VAR_11[2] = VAR_9;
    VAR_11[3] = VAR_10;
    FUNC_0(VAR_7->dev, "requesting %u HZ carrier",
        VAR_6);


    FUNC_1(VAR_7, VAR_11, sizeof(VAR_11));
    return 0;
   }
  }

  return -VAR_0;

 }

 return 0;
}
