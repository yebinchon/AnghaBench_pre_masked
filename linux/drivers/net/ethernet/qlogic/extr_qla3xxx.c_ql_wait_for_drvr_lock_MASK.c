
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int mac_index; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct ql3_adapter*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ql3_adapter *VAR_3)
{
 int VAR_4 = 0;

 do {
  if (FUNC_2(VAR_3,
    VAR_1,
    (VAR_2 | (VAR_3->mac_index)
     * 2) << 1)) {
   FUNC_1(VAR_0, VAR_3->ndev,
          "driver lock acquired\n");
   return 1;
  }
  FUNC_3(1);
 } while (++VAR_4 < 10);

 FUNC_0(VAR_3->ndev, "Timed out waiting for driver lock...\n");
 return 0;
}
