
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int node_name; int port_name; int roles; scalar_t__ port_id; } ;
struct fc_rport_priv {int peers; int lld_event_callback; int event_work; int retry_work; int maxframe_size; int r_a_tov; int e_d_tov; int flags; int event; int rp_state; struct fc_lport* local_port; int rp_mutex; int kref; TYPE_1__ ids; } ;
struct TYPE_6__ {int rports; int disc_mutex; } ;
struct TYPE_5__ {int rport_event_callback; } ;
struct fc_lport {size_t rport_priv_size; TYPE_3__ disc; TYPE_2__ tt; int r_a_tov; int e_d_tov; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct fc_rport_priv* FUNC_2 (struct fc_lport*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 struct fc_rport_priv* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct fc_rport_priv *FUNC_8(struct fc_lport *VAR_9, u32 VAR_10)
{
 struct fc_rport_priv *VAR_11;
 size_t VAR_12 = sizeof(*VAR_11);

 FUNC_6(&VAR_9->disc.disc_mutex);

 VAR_11 = FUNC_2(VAR_9, VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->rport_priv_size > 0)
  VAR_12 = VAR_9->rport_priv_size;
 VAR_11 = FUNC_4(VAR_12, VAR_4);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->ids.node_name = -1;
 VAR_11->ids.port_name = -1;
 VAR_11->ids.port_id = VAR_10;
 VAR_11->ids.roles = VAR_2;

 FUNC_3(&VAR_11->kref);
 FUNC_7(&VAR_11->rp_mutex);
 VAR_11->local_port = VAR_9;
 VAR_11->rp_state = VAR_6;
 VAR_11->event = VAR_5;
 VAR_11->flags = VAR_3;
 VAR_11->e_d_tov = VAR_9->e_d_tov;
 VAR_11->r_a_tov = VAR_9->r_a_tov;
 VAR_11->maxframe_size = VAR_1;
 FUNC_0(&VAR_11->retry_work, VAR_7);
 FUNC_1(&VAR_11->event_work, VAR_8);
 if (VAR_10 != VAR_0) {
  VAR_11->lld_event_callback = VAR_9->tt.rport_event_callback;
  FUNC_5(&VAR_11->peers, &VAR_9->disc.rports);
 }
 return VAR_11;
}
