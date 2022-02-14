
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_target {int action; int add_rport; } ;
typedef enum ibmvfc_target_action { ____Placeholder_ibmvfc_target_action } ibmvfc_target_action ;





__attribute__((used)) static void FUNC_0(struct ibmvfc_target *VAR_0,
      enum ibmvfc_target_action VAR_1)
{
 switch (VAR_0->action) {
 case 128:
  if (VAR_1 == 129)
   VAR_0->action = VAR_1;
 case 129:
  break;
 default:
  if (VAR_1 == 128)
   VAR_0->add_rport = 0;
  VAR_0->action = VAR_1;
  break;
 }
}
