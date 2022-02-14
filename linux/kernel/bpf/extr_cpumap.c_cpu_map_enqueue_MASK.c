
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {struct net_device* dev_rx; } ;
struct xdp_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bpf_cpu_map_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_cpu_map_entry*,struct xdp_frame*) ;
 struct xdp_frame* FUNC_1 (struct xdp_buff*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct bpf_cpu_map_entry *VAR_1, struct xdp_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct xdp_frame *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (FUNC_2(!VAR_4))
  return -VAR_0;


 VAR_4->dev_rx = VAR_3;

 FUNC_0(VAR_1, VAR_4);
 return 0;
}
