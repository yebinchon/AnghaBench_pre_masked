
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct typec_altmode {int dummy; } ;
struct tcpm_port {int lock; int vdm_state_machine; int wq; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tcpm_port*,int ,int const*,int) ;
 struct tcpm_port* FUNC_4 (struct typec_altmode*) ;

__attribute__((used)) static int FUNC_5(struct typec_altmode *VAR_0,
       u32 VAR_1, const u32 *VAR_2, int VAR_3)
{
 struct tcpm_port *VAR_4 = FUNC_4(VAR_0);

 FUNC_1(&VAR_4->lock);
 FUNC_3(VAR_4, VAR_1, VAR_2, VAR_3 - 1);
 FUNC_0(VAR_4->wq, &VAR_4->vdm_state_machine, 0);
 FUNC_2(&VAR_4->lock);

 return 0;
}
