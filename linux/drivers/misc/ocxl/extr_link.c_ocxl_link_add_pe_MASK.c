
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct spa {int spa_lock; struct ocxl_process_element* spa_mem; int pe_tree; } ;
struct pe_data {void (* xsl_err_cb ) (void*,int ,int ) ;void* xsl_err_data; struct mm_struct* mm; } ;
struct ocxl_process_element {void* software_state; void* amr; void* tid; void* pid; void* lpid; void* config_state; } ;
struct ocxl_link {struct spa* spa; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 TYPE_1__* VAR_8 ;
 struct pe_data* FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ocxl_process_element*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,struct pe_data*) ;
 int FUNC_13 (int ,struct ocxl_process_element*,int,int ,int ) ;

int FUNC_14(void *VAR_9, int VAR_10, u32 VAR_11, u32 VAR_12,
  u64 VAR_13, struct mm_struct *VAR_14,
  void (*VAR_15)(void *VAR_16, u64 VAR_17, u64 VAR_18),
  void *VAR_19)
{
 struct ocxl_link *VAR_20 = (struct ocxl_link *) VAR_9;
 struct spa *VAR_21 = VAR_20->spa;
 struct ocxl_process_element *VAR_22;
 int VAR_23, VAR_24 = 0;
 struct pe_data *VAR_25;

 FUNC_0(sizeof(struct ocxl_process_element) != 128);
 if (VAR_10 > VAR_4)
  return -VAR_1;

 FUNC_10(&VAR_21->spa_lock);
 VAR_23 = VAR_10 & VAR_5;
 VAR_22 = VAR_21->spa_mem + VAR_23;

 if (VAR_22->software_state) {
  VAR_24 = -VAR_0;
  goto unlock;
 }

 VAR_25 = FUNC_4(sizeof(*VAR_25), VAR_3);
 if (!VAR_25) {
  VAR_24 = -VAR_2;
  goto unlock;
 }

 VAR_25->mm = VAR_14;
 VAR_25->xsl_err_cb = VAR_15;
 VAR_25->xsl_err_data = VAR_19;

 FUNC_6(VAR_22, 0, sizeof(struct ocxl_process_element));
 VAR_22->config_state = FUNC_3(FUNC_1(VAR_11 == 0));
 VAR_22->lpid = FUNC_2(FUNC_7(VAR_7));
 VAR_22->pid = FUNC_2(VAR_11);
 VAR_22->tid = FUNC_2(VAR_12);
 VAR_22->amr = FUNC_3(VAR_13);
 VAR_22->software_state = FUNC_2(VAR_6);






 if (VAR_14)
  FUNC_8(VAR_14);





 FUNC_5();
 FUNC_12(&VAR_21->pe_tree, VAR_23, VAR_25);
 if (VAR_14)
  FUNC_9(VAR_14);
 FUNC_13(VAR_8->pid, VAR_21->spa_mem, VAR_10, VAR_11, VAR_12);
unlock:
 FUNC_11(&VAR_21->spa_lock);
 return VAR_24;
}
