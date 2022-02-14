
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_3__ {scalar_t__ intr_mode; } ;
struct __vxge_hw_device {int vpaths_deployed; int* tim_int_mask0; size_t* tim_int_mask1; TYPE_2__* common_reg; TYPE_1__ config; int * virtual_paths; } ;
struct TYPE_4__ {int titan_general_int_status; int tim_int_mask1; int tim_int_status1; int tim_int_mask0; int tim_int_status0; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct __vxge_hw_device*) ;
 int FUNC_4 (struct __vxge_hw_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int,int *) ;

void FUNC_8(struct __vxge_hw_device *VAR_4)
{
 u32 VAR_5;
 u64 VAR_6;
 u32 VAR_7;

 FUNC_3(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

  if (!(VAR_4->vpaths_deployed & FUNC_6(VAR_5)))
   continue;

  FUNC_5(
   FUNC_0(&VAR_4->virtual_paths[VAR_5]));
 }

 if (VAR_4->config.intr_mode == VAR_0) {
  VAR_6 = VAR_4->tim_int_mask0[VAR_3] |
   VAR_4->tim_int_mask0[VAR_2];

  if (VAR_6 != 0) {
   FUNC_7(VAR_6, &VAR_4->common_reg->tim_int_status0);

   FUNC_7(~VAR_6, &VAR_4->common_reg->tim_int_mask0);
  }

  VAR_7 = VAR_4->tim_int_mask1[VAR_3] |
   VAR_4->tim_int_mask1[VAR_2];

  if (VAR_7 != 0) {
   FUNC_1(VAR_7,
     &VAR_4->common_reg->tim_int_status1);

   FUNC_1(~VAR_7,
     &VAR_4->common_reg->tim_int_mask1);
  }
 }

 VAR_6 = FUNC_2(&VAR_4->common_reg->titan_general_int_status);

 FUNC_4(VAR_4);
}
