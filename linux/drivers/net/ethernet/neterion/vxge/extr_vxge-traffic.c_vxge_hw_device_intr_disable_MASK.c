
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct __vxge_hw_device {int vpaths_deployed; int * virtual_paths; TYPE_1__* common_reg; } ;
struct TYPE_2__ {int tim_int_mask1; int tim_int_mask0; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct __vxge_hw_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct __vxge_hw_device *VAR_3)
{
 u32 VAR_4;

 FUNC_2(VAR_3);


 FUNC_5(VAR_1, &VAR_3->common_reg->tim_int_mask0);
 FUNC_1(VAR_0,
  &VAR_3->common_reg->tim_int_mask1);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {

  if (!(VAR_3->vpaths_deployed & FUNC_4(VAR_4)))
   continue;

  FUNC_3(
   FUNC_0(&VAR_3->virtual_paths[VAR_4]));
 }
}
