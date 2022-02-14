
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int filter_sem; struct efx_ef10_filter_table* filter_state; } ;
struct efx_ef10_filter_table {int lock; } ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,unsigned int,unsigned int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_3,
        enum efx_filter_priority VAR_4)
{
 struct efx_ef10_filter_table *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = (((1U << (VAR_4 + 1)) - 1) &
    ~(1U << VAR_0));

 FUNC_0(&VAR_3->filter_sem);
 VAR_5 = VAR_3->filter_state;
 FUNC_1(&VAR_5->lock);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = FUNC_2(VAR_3, VAR_6,
           VAR_7, 1);
  if (VAR_8 && VAR_8 != -VAR_1)
   break;
  VAR_8 = 0;
 }

 FUNC_4(&VAR_5->lock);
 FUNC_3(&VAR_3->filter_sem);
 return VAR_8;
}
