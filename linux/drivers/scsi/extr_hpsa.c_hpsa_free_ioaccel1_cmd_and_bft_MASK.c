
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int nr_cmds; int * ioaccel1_blockFetchTable; scalar_t__ ioaccel_cmd_pool_dhandle; int * ioaccel_cmd_pool; int pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_0)
{
 if (VAR_0->ioaccel_cmd_pool) {
  FUNC_1(VAR_0->pdev,
   VAR_0->nr_cmds * sizeof(*VAR_0->ioaccel_cmd_pool),
   VAR_0->ioaccel_cmd_pool,
   VAR_0->ioaccel_cmd_pool_dhandle);
  VAR_0->ioaccel_cmd_pool = ((void*)0);
  VAR_0->ioaccel_cmd_pool_dhandle = 0;
 }
 FUNC_0(VAR_0->ioaccel1_blockFetchTable);
 VAR_0->ioaccel1_blockFetchTable = ((void*)0);
}
