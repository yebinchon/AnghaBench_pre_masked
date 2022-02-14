
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nfp_port {int eth_id; int dl_port; TYPE_1__* app; } ;
struct nfp_eth_table_port {int label_subport; int is_split; int label_port; } ;
struct nfp_app {int pf; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int cpp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int const*,int) ;
 int FUNC_1 (struct devlink*,int *,int ) ;
 int FUNC_2 (int ,int const**) ;
 int FUNC_3 (struct nfp_port*,struct nfp_eth_table_port*) ;
 struct devlink* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct nfp_app *VAR_1, struct nfp_port *VAR_2)
{
 struct nfp_eth_table_port VAR_3;
 struct devlink *VAR_4;
 const u8 *VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_5();
 VAR_7 = FUNC_3(VAR_2, &VAR_3);
 FUNC_6();
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_2(VAR_2->app->cpp, &VAR_5);
 FUNC_0(&VAR_2->dl_port, VAR_0,
          VAR_3.label_port, VAR_3.is_split,
          VAR_3.label_subport, VAR_5, VAR_6);

 VAR_4 = FUNC_4(VAR_1->pf);

 return FUNC_1(VAR_4, &VAR_2->dl_port, VAR_2->eth_id);
}
