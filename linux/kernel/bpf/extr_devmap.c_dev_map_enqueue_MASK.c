
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_frame {int dummy; } ;
struct xdp_buff {scalar_t__ data; scalar_t__ data_end; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct bpf_dtab_netdev {struct net_device* dev; } ;
struct TYPE_2__ {int ndo_xdp_xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_dtab_netdev*,struct xdp_frame*,struct net_device*) ;
 struct xdp_frame* FUNC_1 (struct xdp_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;

int FUNC_4(struct bpf_dtab_netdev *VAR_2, struct xdp_buff *VAR_3,
      struct net_device *VAR_4)
{
 struct net_device *VAR_5 = VAR_2->dev;
 struct xdp_frame *VAR_6;
 int VAR_7;

 if (!VAR_5->netdev_ops->ndo_xdp_xmit)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_5, VAR_3->data_end - VAR_3->data);
 if (FUNC_2(VAR_7))
  return VAR_7;

 VAR_6 = FUNC_1(VAR_3);
 if (FUNC_2(!VAR_6))
  return -VAR_1;

 return FUNC_0(VAR_2, VAR_6, VAR_4);
}
