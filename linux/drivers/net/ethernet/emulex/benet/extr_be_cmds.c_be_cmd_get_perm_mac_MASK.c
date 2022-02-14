
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct be_adapter {int if_handle; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int *,int*,int *,int ,int ) ;
 int FUNC_2 (struct be_adapter*,int *,int,int ,int ) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct be_adapter *VAR_0, u8 *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;

 FUNC_4(VAR_1);

 if (FUNC_0(VAR_0)) {
  if (FUNC_3(VAR_0))
   VAR_2 = FUNC_2(VAR_0, VAR_1, 1, 0,
             0);
  else
   VAR_2 = FUNC_2(VAR_0, VAR_1, 0,
             VAR_0->if_handle, 0);
 } else {
  VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3,
        ((void*)0), VAR_0->if_handle, 0);
 }

 return VAR_2;
}
