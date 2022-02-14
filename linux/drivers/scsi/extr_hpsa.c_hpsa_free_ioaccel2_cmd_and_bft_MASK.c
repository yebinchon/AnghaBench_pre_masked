
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int nr_cmds; int * ioaccel2_blockFetchTable; scalar_t__ ioaccel2_cmd_pool_dhandle; int * ioaccel2_cmd_pool; int pdev; } ;


 int FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->ioaccel2_cmd_pool) {
  FUNC_2(VAR_0->pdev,
   VAR_0->nr_cmds * sizeof(*VAR_0->ioaccel2_cmd_pool),
   VAR_0->ioaccel2_cmd_pool,
   VAR_0->ioaccel2_cmd_pool_dhandle);
  VAR_0->ioaccel2_cmd_pool = ((void*)0);
  VAR_0->ioaccel2_cmd_pool_dhandle = 0;
 }
 FUNC_1(VAR_0->ioaccel2_blockFetchTable);
 VAR_0->ioaccel2_blockFetchTable = ((void*)0);
}
