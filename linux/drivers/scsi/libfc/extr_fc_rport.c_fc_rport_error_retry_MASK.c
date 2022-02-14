
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_priv {scalar_t__ retries; int kref; int retry_work; TYPE_1__* local_port; int rp_mutex; int e_d_tov; } ;
struct TYPE_2__ {scalar_t__ max_rport_retry_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct fc_rport_priv*,int) ;
 int FUNC_2 (struct fc_rport_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct fc_rport_priv *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = FUNC_6(VAR_3->e_d_tov);

 FUNC_5(&VAR_3->rp_mutex);


 if (VAR_4 == -VAR_0)
  goto out;

 if (VAR_3->retries < VAR_3->local_port->max_rport_retry_count) {
  FUNC_0(VAR_3, "Error %d in state %s, retrying\n",
        VAR_4, FUNC_2(VAR_3));
  VAR_3->retries++;

  if (VAR_4 == -VAR_1)
   VAR_5 = 0;
  FUNC_3(&VAR_3->kref);
  if (!FUNC_7(&VAR_3->retry_work, VAR_5))
   FUNC_4(&VAR_3->kref, VAR_2);
  return;
 }

out:
 FUNC_1(VAR_3, VAR_4);
}
