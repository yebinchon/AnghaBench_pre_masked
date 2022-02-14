
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int mpi_port_cfg_work; int workqueue; } ;


 int FUNC_0 (struct ql_adapter*) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_0)
{
 int VAR_1;




 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto exit;
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto exit;

 FUNC_2(VAR_0->workqueue, &VAR_0->mpi_port_cfg_work, 0);
exit:
 return VAR_1;
}
