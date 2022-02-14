
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa {int spa_lock; struct ocxl_process_element* spa_mem; } ;
struct ocxl_process_element {int tid; } ;
struct ocxl_link {int platform_data; struct spa* spa; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(void *VAR_3, int VAR_4, __u16 VAR_5)
{
 struct ocxl_link *VAR_6 = (struct ocxl_link *) VAR_3;
 struct spa *VAR_7 = VAR_6->spa;
 struct ocxl_process_element *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_4 > VAR_1)
  return -VAR_0;

 VAR_9 = VAR_4 & VAR_2;
 VAR_8 = VAR_7->spa_mem + VAR_9;

 FUNC_3(&VAR_7->spa_lock);

 VAR_8->tid = FUNC_1(VAR_5);






 FUNC_2();






 VAR_10 = FUNC_5(VAR_6->platform_data, VAR_9);
 FUNC_0(VAR_10);

 FUNC_4(&VAR_7->spa_lock);
 return VAR_10;
}
