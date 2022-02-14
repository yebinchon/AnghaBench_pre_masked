
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {int itr_clk_rate; } ;


 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_0(VAR_0);

 return VAR_1 * (VAR_2->itr_clk_rate / 64000) / 1000;
}
