
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audit_field {int type; int val; int op; } ;
struct TYPE_2__ {int listnr; } ;
struct audit_entry {TYPE_1__ rule; } ;


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

__attribute__((used)) static int FUNC_0(struct audit_entry *VAR_10, struct audit_field *VAR_11)
{
 switch (VAR_11->type) {
 case 151:
  if (VAR_10->rule.listnr != VAR_1 &&
      VAR_10->rule.listnr != VAR_2)
   return -VAR_8;
  break;
 case 157:
  if (VAR_10->rule.listnr != 159)
   return -VAR_8;
  break;
 }

 switch (VAR_10->rule.listnr) {
 case 159:
  switch(VAR_11->type) {
  case 157:
  case 160:
   break;
  default:
   return -VAR_8;
  }
 }


 switch (VAR_11->type) {
 case 173:
 case 172:
 case 171:
 case 170:
 case 142:
 case 168:

  break;
 case 129:
 case 165:
 case 130:
 case 156:
 case 153:
 case 145:
 case 155:
 case 166:
 case 137:
 case 158:
 case 150:
 case 141:
 case 151:
 case 140:
 case 169:
 case 163:
 case 131:
 case 154:
 case 138:
 case 134:
 case 136:
 case 148:
 case 149:
 case 139:

  if (VAR_11->op == VAR_4 || VAR_11->op == VAR_5)
   return -VAR_8;
  break;
 case 132:
 case 135:
 case 133:
 case 144:
 case 147:
 case 146:
 case 128:
 case 167:
 case 160:
 case 152:
 case 174:
 case 157:
 case 143:
 case 161:
 case 162:
 case 164:

  if (VAR_11->op != VAR_7 && VAR_11->op != VAR_6)
   return -VAR_8;
  break;
 default:

  return -VAR_8;
 }


 switch (VAR_11->type) {
 case 152:
  if ((VAR_11->val != 0) && (VAR_11->val != 1))
   return -VAR_8;
  break;
 case 143:
  if (VAR_11->val & ~15)
   return -VAR_8;
  break;
 case 161:
  if (VAR_11->val & ~VAR_9)
   return -VAR_8;
  break;
 case 162:
  if (VAR_11->val > VAR_3)
   return -VAR_8;
  break;
 case 139:
  if (VAR_11->val >= VAR_0)
   return -VAR_8;
  break;
 default:
  break;
 }

 return 0;
}
