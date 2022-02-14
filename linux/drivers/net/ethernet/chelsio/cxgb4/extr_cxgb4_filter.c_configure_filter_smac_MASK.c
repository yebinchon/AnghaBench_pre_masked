
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filter_entry {int tid; TYPE_1__* smt; } ;
struct adapter {int pdev_dev; } ;
struct TYPE_2__ {int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct adapter*,struct filter_entry*,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct adapter*,struct filter_entry*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_3, struct filter_entry *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_4->tid, VAR_2, 1, 1);
 if (VAR_5)
  goto smac_err;

 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_4->tid, VAR_1,
       FUNC_0(VAR_0),
       FUNC_0(VAR_4->smt->idx), 1);
 if (!VAR_5)
  return 0;

smac_err:
 FUNC_1(VAR_3->pdev_dev, "filter %u smac config failed with error %u\n",
  VAR_4->tid, VAR_5);
 return VAR_5;
}
