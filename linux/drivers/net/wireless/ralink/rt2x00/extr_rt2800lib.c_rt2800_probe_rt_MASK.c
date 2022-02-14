
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,char*,int,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int) ;

__attribute__((used)) static int FUNC_6(struct rt2x00_dev *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 if (FUNC_4(VAR_6, 137))
  VAR_7 = FUNC_0(VAR_6, VAR_2);
 else
  VAR_7 = FUNC_0(VAR_6, VAR_1);

 VAR_8 = FUNC_2(VAR_7, VAR_3);
 VAR_9 = FUNC_2(VAR_7, VAR_4);

 switch (VAR_8) {
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_1(VAR_6, "Invalid RT chipset 0x%04x, rev %04x detected\n",
      VAR_8, VAR_9);
  return -VAR_0;
 }

 if (VAR_8 == 130 && FUNC_3(VAR_6))
  VAR_8 = VAR_5;

 FUNC_5(VAR_6, VAR_8, VAR_9);

 return 0;
}
