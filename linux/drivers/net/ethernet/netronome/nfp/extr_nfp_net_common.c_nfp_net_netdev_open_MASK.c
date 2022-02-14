
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_rx_rings; int num_stack_tx_rings; } ;
struct nfp_net {TYPE_1__ dp; } ;
struct net_device {int dummy; } ;


 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct nfp_net*) ;
 int FUNC_4 (struct nfp_net*) ;
 int FUNC_5 (struct nfp_net*) ;
 int FUNC_6 (struct nfp_net*) ;
 int FUNC_7 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0)
{
 struct nfp_net *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;






 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1->dp.num_stack_tx_rings);
 if (VAR_2)
  goto err_free_all;

 VAR_2 = FUNC_1(VAR_0, VAR_1->dp.num_rx_rings);
 if (VAR_2)
  goto err_free_all;
 VAR_2 = FUNC_7(VAR_0, 1);
 if (VAR_2)
  goto err_free_all;

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto err_port_disable;







 FUNC_5(VAR_1);

 return 0;

err_port_disable:
 FUNC_7(VAR_0, 0);
err_free_all:
 FUNC_3(VAR_1);
 return VAR_2;
}
