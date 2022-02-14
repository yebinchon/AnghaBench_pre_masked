
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int ndev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct ql3_adapter*,int) ;
 scalar_t__ FUNC_3 (struct ql3_adapter*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ql3_adapter *VAR_0, int VAR_1)
{
 if (FUNC_2(VAR_0, VAR_1) || FUNC_3(VAR_0)) {
  FUNC_1(VAR_0->ndev,
      "Driver up/down cycle failed, closing device\n");
  FUNC_4();
  FUNC_0(VAR_0->ndev);
  FUNC_5();
  return -1;
 }
 return 0;
}
