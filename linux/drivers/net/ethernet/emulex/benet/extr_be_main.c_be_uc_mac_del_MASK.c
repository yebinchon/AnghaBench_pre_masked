
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int* pmac_id; int if_handle; } ;


 int FUNC_0 (struct be_adapter*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_0, int VAR_1)
{
 if (VAR_1 == VAR_0->pmac_id[0])
  return;

 FUNC_0(VAR_0, VAR_0->if_handle, VAR_1, 0);
}
