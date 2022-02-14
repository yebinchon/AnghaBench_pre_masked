
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int uc_macs; int* pmac_id; int if_handle; } ;


 int FUNC_0 (struct be_adapter*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_0, int VAR_1)
{
 int VAR_2;




 for (VAR_2 = 0; VAR_2 < VAR_0->uc_macs; VAR_2++) {
  if (VAR_0->pmac_id[VAR_2 + 1] == VAR_1)
   return;
 }
 FUNC_0(VAR_0, VAR_0->if_handle, VAR_1, 0);
}
