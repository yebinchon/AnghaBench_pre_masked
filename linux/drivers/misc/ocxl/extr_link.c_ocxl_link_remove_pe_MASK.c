
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spa {int spa_lock; int pe_tree; struct ocxl_process_element* spa_mem; } ;
struct pe_data {scalar_t__ mm; } ;
struct ocxl_process_element {int tid; int pid; int software_state; } ;
struct ocxl_link {int platform_data; struct spa* spa; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (struct pe_data*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ocxl_process_element*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;
 struct pe_data* FUNC_11 (int *,int) ;
 int VAR_5 ;
 int FUNC_12 (int ,struct ocxl_process_element*,int,int,int) ;

int FUNC_13(void *VAR_6, int VAR_7)
{
 struct ocxl_link *VAR_8 = (struct ocxl_link *) VAR_6;
 struct spa *VAR_9 = VAR_8->spa;
 struct ocxl_process_element *VAR_10;
 struct pe_data *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_7 > VAR_1)
  return -VAR_0;
 VAR_12 = VAR_7 & VAR_2;
 VAR_10 = VAR_9->spa_mem + VAR_12;

 FUNC_8(&VAR_9->spa_lock);

 if (!(FUNC_2(VAR_10->software_state) & VAR_3)) {
  VAR_13 = -VAR_0;
  goto unlock;
 }

 FUNC_12(VAR_4->pid, VAR_9->spa_mem, VAR_7,
    FUNC_2(VAR_10->pid), FUNC_2(VAR_10->tid));

 FUNC_5(VAR_10, 0, sizeof(struct ocxl_process_element));





 FUNC_4();






 VAR_13 = FUNC_10(VAR_8->platform_data, VAR_12);
 FUNC_1(VAR_13);

 VAR_11 = FUNC_11(&VAR_9->pe_tree, VAR_12);
 if (!VAR_11) {
  FUNC_0(1, "Couldn't find pe data when removing PE\n");
 } else {
  if (VAR_11->mm) {
   FUNC_6(VAR_11->mm);
   FUNC_7(VAR_11->mm);
  }
  FUNC_3(VAR_11, VAR_5);
 }
unlock:
 FUNC_9(&VAR_9->spa_lock);
 return VAR_13;
}
