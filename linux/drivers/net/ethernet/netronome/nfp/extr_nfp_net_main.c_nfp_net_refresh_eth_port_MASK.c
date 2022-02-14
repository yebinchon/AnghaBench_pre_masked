
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_port {int flags; TYPE_1__* app; } ;
struct nfp_eth_table {int dummy; } ;
struct nfp_cpp {int dummy; } ;
struct TYPE_2__ {struct nfp_cpp* cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nfp_eth_table*) ;
 int FUNC_2 (struct nfp_cpp*,char*) ;
 struct nfp_eth_table* FUNC_3 (struct nfp_cpp*) ;
 int FUNC_4 (struct nfp_cpp*,struct nfp_port*,struct nfp_eth_table*) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct nfp_port *VAR_2)
{
 struct nfp_cpp *VAR_3 = VAR_2->app->cpp;
 struct nfp_eth_table *VAR_4;
 int VAR_5;

 FUNC_0(VAR_1, &VAR_2->flags);

 VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4) {
  FUNC_5(VAR_1, &VAR_2->flags);
  FUNC_2(VAR_3, "Error refreshing port state table!\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_3, VAR_2, VAR_4);

 FUNC_1(VAR_4);

 return VAR_5;
}
