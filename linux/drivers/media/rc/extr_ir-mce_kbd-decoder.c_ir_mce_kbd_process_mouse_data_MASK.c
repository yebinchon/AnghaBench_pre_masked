
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rc_dev {int input_dev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int,char*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rc_dev *VAR_4, u32 VAR_5)
{

 u8 VAR_6 = (VAR_5 >> 7) & 0x7f;
 u8 VAR_7 = (VAR_5 >> 14) & 0x7f;
 int VAR_8, VAR_9;

 bool VAR_10 = VAR_5 & 0x40;
 bool VAR_11 = VAR_5 & 0x20;

 if (VAR_6 & 0x40)
  VAR_8 = -((~VAR_6 & 0x7f) + 1);
 else
  VAR_8 = VAR_6;

 if (VAR_7 & 0x40)
  VAR_9 = -((~VAR_7 & 0x7f) + 1);
 else
  VAR_9 = VAR_7;

 FUNC_0(&VAR_4->dev, "mouse: x = %d, y = %d, btns = %s%s\n",
  VAR_8, VAR_9, VAR_11 ? "L" : "", VAR_10 ? "R" : "");

 FUNC_2(VAR_4->input_dev, VAR_2, VAR_8);
 FUNC_2(VAR_4->input_dev, VAR_3, VAR_9);

 FUNC_1(VAR_4->input_dev, VAR_0, VAR_11);
 FUNC_1(VAR_4->input_dev, VAR_1, VAR_10);
}
