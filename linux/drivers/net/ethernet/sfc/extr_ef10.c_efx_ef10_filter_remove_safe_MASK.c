
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int filter_sem; struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_table {int lock; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,unsigned int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_0,
           enum efx_filter_priority VAR_1,
           u32 VAR_2)
{
 struct efx_ef10_filter_table *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_0->filter_sem);
 VAR_3 = VAR_0->filter_state;
 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_2(VAR_0, 1U << VAR_1, VAR_2,
          0);
 FUNC_4(&VAR_3->lock);
 FUNC_3(&VAR_0->filter_sem);
 return VAR_4;
}
