
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_port {TYPE_1__* app; scalar_t__ eth_forced; } ;
struct nfp_eth_table_port {int index; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int cpp; } ;


 int VAR_0 ;
 struct nfp_eth_table_port* FUNC_0 (struct nfp_port*) ;
 int FUNC_1 (int ,int ,int) ;
 struct nfp_port* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1, bool VAR_2)
{
 struct nfp_eth_table_port *VAR_3;
 struct nfp_port *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_4);
 if (!VAR_3)
  return 0;
 if (VAR_4->eth_forced)
  return 0;

 VAR_5 = FUNC_1(VAR_4->app->cpp, VAR_3->index, VAR_2);
 return VAR_5 < 0 && VAR_5 != -VAR_0 ? VAR_5 : 0;
}
