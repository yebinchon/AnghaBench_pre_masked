
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {int state; int local; int remote; } ;
typedef enum fm10k_mbx_state { ____Placeholder_fm10k_mbx_state } fm10k_mbx_state ;





 int FUNC_0 (struct fm10k_mbx_info*) ;
 int FUNC_1 (struct fm10k_mbx_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct fm10k_mbx_info *VAR_0)
{
 const enum fm10k_mbx_state VAR_1 = VAR_0->state;

 switch (VAR_1) {
 case 129:

  VAR_0->remote = 0;
  break;
 case 128:

  FUNC_0(VAR_0);
  break;
 case 130:

  if (VAR_0->remote) {
   while (VAR_0->local > 1)
    VAR_0->local--;
   VAR_0->remote = 0;
  }
  break;
 default:
  break;
 }

 FUNC_1(VAR_0, 0);
}
