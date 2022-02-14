
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2, VAR_1, VAR_2->ndev, "Unable to  allocate memory.\n");
  return -VAR_0;
 }
 VAR_3 = FUNC_2(VAR_2);
 return VAR_3;
}
