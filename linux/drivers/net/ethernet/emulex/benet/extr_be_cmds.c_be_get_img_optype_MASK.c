
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct flash_section_entry {int optype; int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct flash_section_entry VAR_12)
{
 u32 VAR_13 = FUNC_1(VAR_12.type);
 u16 VAR_14 = FUNC_0(VAR_12.optype);

 if (VAR_14 != 0xFFFF)
  return VAR_14;

 switch (VAR_13) {
 case 137:
  VAR_14 = VAR_3;
  break;
 case 139:
  VAR_14 = VAR_7;
  break;
 case 132:
  VAR_14 = VAR_0;
  break;
 case 131:
  VAR_14 = VAR_6;
  break;
 case 133:
  VAR_14 = VAR_1;
  break;
 case 138:
  VAR_14 = VAR_4;
  break;
 case 134:
  VAR_14 = VAR_5;
  break;
 case 135:
  VAR_14 = VAR_2;
  break;
 case 136:
  VAR_14 = VAR_10;
  break;
 case 129:
  VAR_14 = VAR_9;
  break;
 case 130:
  VAR_14 = VAR_8;
  break;
 case 128:
  VAR_14 = VAR_11;
  break;
 default:
  break;
 }

 return VAR_14;
}
