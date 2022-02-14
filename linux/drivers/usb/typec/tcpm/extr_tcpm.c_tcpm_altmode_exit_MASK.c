
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct typec_altmode {int mode; int svid; } ;
struct tcpm_port {int lock; int vdm_state_machine; int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tcpm_port*,int ,int *,int ) ;
 struct tcpm_port* FUNC_6 (struct typec_altmode*) ;

__attribute__((used)) static int FUNC_7(struct typec_altmode *VAR_1)
{
 struct tcpm_port *VAR_2 = FUNC_6(VAR_1);
 u32 VAR_3;

 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_1->svid, 1, VAR_0);
 VAR_3 |= FUNC_1(VAR_1->mode);

 FUNC_5(VAR_2, VAR_3, ((void*)0), 0);
 FUNC_2(VAR_2->wq, &VAR_2->vdm_state_machine, 0);
 FUNC_4(&VAR_2->lock);

 return 0;
}
