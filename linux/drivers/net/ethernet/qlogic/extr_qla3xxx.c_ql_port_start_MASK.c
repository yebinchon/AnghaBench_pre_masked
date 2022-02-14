
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int mac_index; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ql3_adapter*) ;
 int FUNC_2 (struct ql3_adapter*) ;
 int FUNC_3 (struct ql3_adapter*) ;
 scalar_t__ FUNC_4 (struct ql3_adapter*,int ,int) ;
 int FUNC_5 (struct ql3_adapter*,int ) ;

__attribute__((used)) static int FUNC_6(struct ql3_adapter *VAR_2)
{
 if (FUNC_4(VAR_2, VAR_0,
  (VAR_1 | (VAR_2->mac_index) *
    2) << 7)) {
  FUNC_0(VAR_2->ndev, "Could not get hw lock for GIO\n");
  return -1;
 }

 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_2);
 } else {

  FUNC_3(VAR_2);
 }

 FUNC_5(VAR_2, VAR_0);
 return 0;
}
