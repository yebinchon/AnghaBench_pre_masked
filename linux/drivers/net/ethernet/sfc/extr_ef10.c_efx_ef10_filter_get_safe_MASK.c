
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int filter_sem; struct efx_ef10_filter_table* filter_state; } ;
struct efx_filter_spec {int priority; } ;
struct efx_ef10_filter_table {int lock; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct efx_filter_spec* FUNC_1 (struct efx_ef10_filter_table*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct efx_ef10_filter_table*,struct efx_filter_spec const*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct efx_nic *VAR_1,
        enum efx_filter_priority VAR_2,
        u32 VAR_3, struct efx_filter_spec *VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_3);
 const struct efx_filter_spec *VAR_6;
 struct efx_ef10_filter_table *VAR_7;
 int VAR_8;

 FUNC_0(&VAR_1->filter_sem);
 VAR_7 = VAR_1->filter_state;
 FUNC_0(&VAR_7->lock);
 VAR_6 = FUNC_1(VAR_7, VAR_5);
 if (VAR_6 && VAR_6->priority == VAR_2 &&
     FUNC_4(VAR_7, VAR_6) ==
     FUNC_3(VAR_3)) {
  *VAR_4 = *VAR_6;
  VAR_8 = 0;
 } else {
  VAR_8 = -VAR_0;
 }
 FUNC_5(&VAR_7->lock);
 FUNC_5(&VAR_1->filter_sem);
 return VAR_8;
}
