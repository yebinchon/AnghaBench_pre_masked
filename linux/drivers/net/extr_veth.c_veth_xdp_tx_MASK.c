
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;
struct xdp_buff {int dummy; } ;
struct veth_xdp_tx_bq {scalar_t__ count; struct xdp_frame** q; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct xdp_frame* FUNC_0 (struct xdp_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,struct veth_xdp_tx_bq*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct xdp_buff *VAR_3,
         struct veth_xdp_tx_bq *VAR_4)
{
 struct xdp_frame *VAR_5 = FUNC_0(VAR_3);

 if (FUNC_1(!VAR_5))
  return -VAR_0;

 if (FUNC_1(VAR_4->count == VAR_1))
  FUNC_2(VAR_2, VAR_4);

 VAR_4->q[VAR_4->count++] = VAR_5;

 return 0;
}
