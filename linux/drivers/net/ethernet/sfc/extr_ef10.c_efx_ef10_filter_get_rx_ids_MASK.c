
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int filter_sem; struct efx_ef10_filter_table* filter_state; } ;
struct efx_filter_spec {int priority; } ;
struct efx_ef10_filter_table {int lock; } ;
typedef int s32 ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 struct efx_filter_spec* FUNC_1 (struct efx_ef10_filter_table*,unsigned int) ;
 int FUNC_2 (struct efx_ef10_filter_table*,struct efx_filter_spec*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static s32 FUNC_5(struct efx_nic *VAR_2,
          enum efx_filter_priority VAR_3,
          u32 *VAR_4, u32 VAR_5)
{
 struct efx_ef10_filter_table *VAR_6;
 struct efx_filter_spec *VAR_7;
 unsigned int VAR_8;
 s32 VAR_9 = 0;

 FUNC_0(&VAR_2->filter_sem);
 VAR_6 = VAR_2->filter_state;
 FUNC_0(&VAR_6->lock);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = FUNC_1(VAR_6, VAR_8);
  if (VAR_7 && VAR_7->priority == VAR_3) {
   if (VAR_9 == VAR_5) {
    VAR_9 = -VAR_0;
    break;
   }
   VAR_4[VAR_9++] =
    FUNC_3(
     FUNC_2(VAR_6, VAR_7),
     VAR_8);
  }
 }
 FUNC_4(&VAR_6->lock);
 FUNC_4(&VAR_2->filter_sem);
 return VAR_9;
}
