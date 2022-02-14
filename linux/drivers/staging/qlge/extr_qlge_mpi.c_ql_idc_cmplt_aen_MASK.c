
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_params {int out_count; } ;
struct ql_adapter {int ide_completion; int ndev; struct mbox_params idc_mbc; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,struct mbox_params*) ;
 int FUNC_3 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_1)
{
 int VAR_2;
 struct mbox_params *VAR_3 = &VAR_1->idc_mbc;
 VAR_3->out_count = 4;
 VAR_2 = FUNC_2(VAR_1, VAR_3);
 if (VAR_2) {
  FUNC_1(VAR_1, VAR_0, VAR_1->ndev,
     "Could not read MPI, resetting RISC!\n");
  FUNC_3(VAR_1);
 } else



  FUNC_0(&VAR_1->ide_completion);

 return VAR_2;
}
