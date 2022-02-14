
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct fc_seq {int dummy; } ;
struct TYPE_2__ {int port_name; int port_id; } ;
struct fc_rport_priv {int kref; int rp_mutex; int disc_id; TYPE_1__ ids; struct fc_lport* local_port; } ;
struct fc_ns_gid_pn {int fn_wwpn; } ;
struct fc_disc {int disc_mutex; int disc_id; } ;
struct fc_lport {struct fc_disc disc; } ;
struct fc_frame_header {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {int ct_cmd; int ct_explan; int ct_reason; } ;


 int FUNC_0 (struct fc_disc*,char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_disc*) ;
 struct fc_ct_hdr* FUNC_4 (struct fc_frame*,int) ;
 struct fc_rport_priv* FUNC_5 (struct fc_lport*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct fc_rport_priv*) ;
 int FUNC_7 (struct fc_rport_priv*) ;
 int FUNC_8 (struct fc_frame*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct fc_seq *VAR_4, struct fc_frame *VAR_5,
    void *VAR_6)
{
 struct fc_rport_priv *VAR_7 = VAR_6;
 struct fc_rport_priv *VAR_8;
 struct fc_lport *VAR_9;
 struct fc_disc *VAR_10;
 struct fc_ct_hdr *VAR_11;
 struct fc_ns_gid_pn *VAR_12;
 u64 VAR_13;

 VAR_9 = VAR_7->local_port;
 VAR_10 = &VAR_9->disc;

 if (FUNC_2(VAR_5) == -VAR_0)
  goto out;
 if (FUNC_1(VAR_5))
  goto redisc;

 VAR_11 = FUNC_4(VAR_5, sizeof(*VAR_11));
 if (!VAR_11)
  goto redisc;
 if (FUNC_13(VAR_11->ct_cmd) == VAR_1) {
  if (FUNC_8(VAR_5) < sizeof(struct fc_frame_header) +
      sizeof(*VAR_11) + sizeof(*VAR_12))
   goto redisc;
  VAR_12 = (struct fc_ns_gid_pn *)(VAR_11 + 1);
  VAR_13 = FUNC_9(&VAR_12->fn_wwpn);
  FUNC_11(&VAR_7->rp_mutex);
  if (VAR_7->ids.port_name == -1)
   VAR_7->ids.port_name = VAR_13;
  else if (VAR_7->ids.port_name != VAR_13) {
   FUNC_0(VAR_10, "GPN_ID accepted.  WWPN changed. "
        "Port-id %6.6x wwpn %16.16llx\n",
        VAR_7->ids.port_id, VAR_13);
   FUNC_12(&VAR_7->rp_mutex);
   FUNC_7(VAR_7);
   FUNC_11(&VAR_9->disc.disc_mutex);
   VAR_8 = FUNC_5(VAR_9, VAR_7->ids.port_id);
   FUNC_12(&VAR_9->disc.disc_mutex);
   if (VAR_8) {
    VAR_8->disc_id = VAR_10->disc_id;
    FUNC_6(VAR_8);
   }
   goto out;
  }
  VAR_7->disc_id = VAR_10->disc_id;
  FUNC_12(&VAR_7->rp_mutex);
  FUNC_6(VAR_7);
 } else if (FUNC_13(VAR_11->ct_cmd) == VAR_2) {
  FUNC_0(VAR_10, "GPN_ID rejected reason %x exp %x\n",
       VAR_11->ct_reason, VAR_11->ct_explan);
  FUNC_7(VAR_7);
 } else {
  FUNC_0(VAR_10, "GPN_ID unexpected response code %x\n",
       FUNC_13(VAR_11->ct_cmd));
redisc:
  FUNC_11(&VAR_10->disc_mutex);
  FUNC_3(VAR_10);
  FUNC_12(&VAR_10->disc_mutex);
 }
out:
 FUNC_10(&VAR_7->kref, VAR_3);
}
