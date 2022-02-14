
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdevsim {int bpf_tc_accept; int bpf_tc_non_bound_accept; int bpf_xdpdrv_accept; int bpf_xdpoffload_accept; int bpf_map_accept; int bpf_offloaded_id; int netdev; TYPE_2__* nsim_dev; TYPE_1__* nsim_dev_port; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int bpf_dev; } ;
struct TYPE_3__ {struct dentry* ddir; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,struct dentry*,int*) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;

int FUNC_3(struct netdevsim *VAR_0)
{
 struct dentry *VAR_1 = VAR_0->nsim_dev_port->ddir;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->nsim_dev->bpf_dev,
           VAR_0->netdev);
 if (VAR_2)
  return VAR_2;

 FUNC_2("bpf_offloaded_id", 0400, VAR_1,
      &VAR_0->bpf_offloaded_id);

 VAR_0->bpf_tc_accept = 1;
 FUNC_1("bpf_tc_accept", 0600, VAR_1,
       &VAR_0->bpf_tc_accept);
 FUNC_1("bpf_tc_non_bound_accept", 0600, VAR_1,
       &VAR_0->bpf_tc_non_bound_accept);
 VAR_0->bpf_xdpdrv_accept = 1;
 FUNC_1("bpf_xdpdrv_accept", 0600, VAR_1,
       &VAR_0->bpf_xdpdrv_accept);
 VAR_0->bpf_xdpoffload_accept = 1;
 FUNC_1("bpf_xdpoffload_accept", 0600, VAR_1,
       &VAR_0->bpf_xdpoffload_accept);

 VAR_0->bpf_map_accept = 1;
 FUNC_1("bpf_map_accept", 0600, VAR_1,
       &VAR_0->bpf_map_accept);

 return 0;
}
