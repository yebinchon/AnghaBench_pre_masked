
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_field {int type; int lsm_rule; int lsm_str; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct audit_field *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
 case 131:
 case 129:
 case 130:
 case 132:
 case 133:
 case 135:
 case 134:
 case 136:
 case 137:
  FUNC_0(VAR_0->lsm_str);
  FUNC_1(VAR_0->lsm_rule);
 }
}
