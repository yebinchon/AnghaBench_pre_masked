
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_port_info {int port_id; int port_role; int port_name; int node_name; } ;
struct nvme_fc_local_port {struct fcloop_lport_priv* private; } ;
struct fcloop_lport_priv {struct fcloop_lport* lport; } ;
struct fcloop_lport {int mask; int lport_list; struct nvme_fc_local_port* localport; int fcaddr; int roles; int wwpn; int wwnn; } ;
struct fcloop_ctrl_options {int mask; int lport_list; struct nvme_fc_local_port* localport; int fcaddr; int roles; int wwpn; int wwnn; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int pinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fcloop_lport*,char const*) ;
 int VAR_6 ;
 int FUNC_2 (struct fcloop_lport*) ;
 struct fcloop_lport* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct nvme_fc_port_info*,int ,int) ;
 int FUNC_6 (struct nvme_fc_port_info*,int *,int *,struct nvme_fc_local_port**) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_7, struct device_attribute *VAR_8,
  const char *VAR_9, size_t VAR_10)
{
 struct nvme_fc_port_info VAR_11;
 struct fcloop_ctrl_options *VAR_12;
 struct nvme_fc_local_port *VAR_13;
 struct fcloop_lport *VAR_14;
 struct fcloop_lport_priv *VAR_15;
 unsigned long VAR_16;
 int VAR_17 = -VAR_1;

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  goto out_free_lport;

 VAR_17 = FUNC_1(VAR_12, VAR_9);
 if (VAR_17)
  goto out_free_opts;


 if ((VAR_12->mask & VAR_3) != VAR_3) {
  VAR_17 = -VAR_0;
  goto out_free_opts;
 }

 FUNC_5(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.node_name = VAR_12->wwnn;
 VAR_11.port_name = VAR_12->wwpn;
 VAR_11.port_role = VAR_12->roles;
 VAR_11.port_id = VAR_12->fcaddr;

 VAR_17 = FUNC_6(&VAR_11, &VAR_6, ((void*)0), &VAR_13);
 if (!VAR_17) {

  VAR_15 = VAR_13->private;
  VAR_15->lport = VAR_14;

  VAR_14->localport = VAR_13;
  FUNC_0(&VAR_14->lport_list);

  FUNC_7(&VAR_4, VAR_16);
  FUNC_4(&VAR_14->lport_list, &VAR_5);
  FUNC_8(&VAR_4, VAR_16);
 }

out_free_opts:
 FUNC_2(VAR_12);
out_free_lport:

 if (VAR_17)
  FUNC_2(VAR_14);

 return VAR_17 ? VAR_17 : VAR_10;
}
