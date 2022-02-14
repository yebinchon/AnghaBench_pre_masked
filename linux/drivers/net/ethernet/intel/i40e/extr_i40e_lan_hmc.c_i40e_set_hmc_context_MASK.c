
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_context_ele {scalar_t__ width; int size_of; } ;
typedef int i40e_status ;


 int FUNC_0 (int *,struct i40e_context_ele*,int *) ;
 int FUNC_1 (int *,struct i40e_context_ele*,int *) ;
 int FUNC_2 (int *,struct i40e_context_ele*,int *) ;
 int FUNC_3 (int *,struct i40e_context_ele*,int *) ;

__attribute__((used)) static i40e_status FUNC_4(u8 *VAR_0,
     struct i40e_context_ele *VAR_1,
     u8 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].width != 0; VAR_3++) {





  switch (VAR_1[VAR_3].size_of) {
  case 1:
   FUNC_0(VAR_0, &VAR_1[VAR_3], VAR_2);
   break;
  case 2:
   FUNC_3(VAR_0, &VAR_1[VAR_3], VAR_2);
   break;
  case 4:
   FUNC_1(VAR_0, &VAR_1[VAR_3], VAR_2);
   break;
  case 8:
   FUNC_2(VAR_0, &VAR_1[VAR_3], VAR_2);
   break;
  }
 }

 return 0;
}
