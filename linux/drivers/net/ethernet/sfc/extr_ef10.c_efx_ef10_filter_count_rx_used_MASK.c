
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct efx_nic {int filter_sem; struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_table {int lock; TYPE_1__* entry; } ;
typedef scalar_t__ s32 ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
struct TYPE_4__ {int priority; } ;
struct TYPE_3__ {scalar_t__ spec; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct efx_ef10_filter_table*,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct efx_nic *VAR_1,
      enum efx_filter_priority VAR_2)
{
 struct efx_ef10_filter_table *VAR_3;
 unsigned int VAR_4;
 s32 VAR_5 = 0;

 FUNC_0(&VAR_1->filter_sem);
 VAR_3 = VAR_1->filter_state;
 FUNC_0(&VAR_3->lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->entry[VAR_4].spec &&
      FUNC_1(VAR_3, VAR_4)->priority ==
      VAR_2)
   ++VAR_5;
 }
 FUNC_2(&VAR_3->lock);
 FUNC_2(&VAR_1->filter_sem);
 return VAR_5;
}
