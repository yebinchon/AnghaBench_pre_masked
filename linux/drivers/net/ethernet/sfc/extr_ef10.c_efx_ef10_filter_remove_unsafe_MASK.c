
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct efx_nic {struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_table {int lock; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*,unsigned int,scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_1,
       enum efx_filter_priority VAR_2,
       u32 VAR_3)
{
 struct efx_ef10_filter_table *VAR_4 = VAR_1->filter_state;

 if (VAR_3 == VAR_0)
  return;

 FUNC_0(&VAR_4->lock);
 FUNC_1(VAR_1, 1U << VAR_2, VAR_3,
     1);
 FUNC_2(&VAR_4->lock);
}
