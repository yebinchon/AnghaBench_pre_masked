
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct adv_dvc_var {TYPE_1__* carr_freelist; } ;
struct TYPE_4__ {int next_vpa; } ;
typedef TYPE_1__ ADV_CARR_T ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_1__* FUNC_1 (struct adv_dvc_var*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ADV_CARR_T *FUNC_4(struct adv_dvc_var *VAR_1)
{
 ADV_CARR_T *VAR_2 = VAR_1->carr_freelist;
 u32 VAR_3 = FUNC_3(VAR_2->next_vpa);

 if (VAR_3 == 0 || VAR_3 == ~0) {
  FUNC_0(1, "invalid vpa offset 0x%x\n", VAR_3);
  return ((void*)0);
 }

 VAR_1->carr_freelist = FUNC_1(VAR_1, VAR_3);



 VAR_2->next_vpa = FUNC_2(VAR_0);

 return VAR_2;
}
