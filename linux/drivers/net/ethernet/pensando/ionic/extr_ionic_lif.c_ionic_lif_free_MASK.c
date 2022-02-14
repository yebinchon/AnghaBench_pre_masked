
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_lif {int netdev; int list; int * dbid_inuse; int * kern_dbpage; TYPE_1__* ionic; scalar_t__ info_pa; int * info; int info_sz; scalar_t__ rss_ind_tbl_pa; int * rss_ind_tbl; int rss_ind_tbl_sz; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (struct device*,int ,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct ionic_lif*) ;
 int FUNC_4 (struct ionic_lif*) ;
 int FUNC_5 (struct ionic_lif*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ionic_lif *VAR_0)
{
 struct device *VAR_1 = VAR_0->ionic->dev;


 FUNC_0(VAR_1, VAR_0->rss_ind_tbl_sz, VAR_0->rss_ind_tbl,
     VAR_0->rss_ind_tbl_pa);
 VAR_0->rss_ind_tbl = ((void*)0);
 VAR_0->rss_ind_tbl_pa = 0;


 FUNC_5(VAR_0);
 FUNC_4(VAR_0);


 FUNC_0(VAR_1, VAR_0->info_sz, VAR_0->info, VAR_0->info_pa);
 VAR_0->info = ((void*)0);
 VAR_0->info_pa = 0;


 FUNC_2(VAR_0->ionic, VAR_0->kern_dbpage);
 VAR_0->kern_dbpage = ((void*)0);
 FUNC_6(VAR_0->dbid_inuse);
 VAR_0->dbid_inuse = ((void*)0);


 FUNC_3(VAR_0);
 FUNC_7(&VAR_0->list);
 FUNC_1(VAR_0->netdev);
}
