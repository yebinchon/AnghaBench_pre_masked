
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rc_dev {int input_dev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int ,unsigned char,int) ;
 unsigned char* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct rc_dev *VAR_2, u32 VAR_3)
{
 u8 VAR_4 = (VAR_3 >> 8) & 0xff;
 u8 VAR_5 = (VAR_3 >> 16) & 0xff;
 u8 VAR_6 = VAR_3 & 0xff;
 unsigned char VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(&VAR_2->dev, "keyboard: keydata2 = 0x%02x, keydata1 = 0x%02x, shiftmask = 0x%02x\n",
  VAR_5, VAR_4, VAR_6);

 for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
  VAR_7 = VAR_1[VAR_0 + VAR_8];
  if (VAR_6 & (1 << VAR_8))
   VAR_9 = 1;
  else
   VAR_9 = 0;
  FUNC_1(VAR_2->input_dev, VAR_7, VAR_9);
 }

 if (VAR_4)
  FUNC_1(VAR_2->input_dev, VAR_1[VAR_4], 1);
 if (VAR_5)
  FUNC_1(VAR_2->input_dev, VAR_1[VAR_5], 1);

 if (!VAR_4 && !VAR_5) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   FUNC_1(VAR_2->input_dev, VAR_1[VAR_8], 0);
 }
}
