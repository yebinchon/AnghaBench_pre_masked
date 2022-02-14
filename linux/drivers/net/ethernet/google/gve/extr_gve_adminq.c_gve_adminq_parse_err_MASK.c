
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_6, u32 VAR_7)
{
 if (VAR_7 != 129 &&
     VAR_7 != 128)
  FUNC_0(VAR_6, "AQ command failed with status %d\n", VAR_7);

 switch (VAR_7) {
 case 129:
  return 0;
 case 128:
  FUNC_0(VAR_6, "parse_aq_err: err and status both unset, this should not be possible.\n");
  return -VAR_2;
 case 145:
 case 143:
 case 142:
 case 140:
 case 132:
  return -VAR_1;
 case 144:
 case 139:
 case 138:
 case 137:
 case 136:
 case 130:
  return -VAR_2;
 case 141:
  return -VAR_5;
 case 135:
 case 133:
  return -VAR_0;
 case 134:
  return -VAR_3;
 case 131:
  return -VAR_4;
 default:
  FUNC_0(VAR_6, "parse_aq_err: unknown status code %d\n", VAR_7);
  return -VAR_2;
 }
}
