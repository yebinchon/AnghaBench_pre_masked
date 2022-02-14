
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {int rp_state; scalar_t__ retries; int rp_mutex; } ;
typedef enum fc_rport_state { ____Placeholder_fc_rport_state } fc_rport_state ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fc_rport_priv *VAR_0,
     enum fc_rport_state VAR_1)
{
 FUNC_0(&VAR_0->rp_mutex);

 if (VAR_0->rp_state != VAR_1)
  VAR_0->retries = 0;
 VAR_0->rp_state = VAR_1;
}
