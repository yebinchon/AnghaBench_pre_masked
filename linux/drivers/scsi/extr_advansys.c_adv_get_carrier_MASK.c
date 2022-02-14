
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adv_dvc_var {int * carrier; } ;
typedef int ADV_CARR_T ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static ADV_CARR_T *FUNC_1(struct adv_dvc_var *VAR_1, u32 VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2 > VAR_0);

 VAR_3 = VAR_2 / sizeof(ADV_CARR_T);
 return &VAR_1->carrier[VAR_3];
}
