
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pe_data {TYPE_3__* mm; } ;
struct TYPE_5__ {int fault_work; struct pe_data pe_data; scalar_t__ dsisr; scalar_t__ dar; scalar_t__ pe; } ;
struct spa {TYPE_2__ xsl_fault; int pe_tree; struct ocxl_process_element* spa_mem; } ;
struct ocxl_process_element {int pid; } ;
struct ocxl_link {struct spa* spa; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_6__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct spa*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 struct pe_data* FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct spa*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ocxl_process_element*,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_4, void *VAR_5)
{
 struct ocxl_link *VAR_6 = (struct ocxl_link *) VAR_5;
 struct spa *VAR_7 = VAR_6->spa;
 u64 VAR_8, VAR_9, VAR_10;
 struct pe_data *VAR_11;
 struct ocxl_process_element *VAR_12;
 int VAR_13;
 bool VAR_14 = 0;

 FUNC_10(VAR_7, &VAR_8, &VAR_9, &VAR_10);
 FUNC_12(VAR_7->spa_mem, VAR_10, VAR_8, VAR_9, -1);

 FUNC_1(VAR_10 > VAR_2);
 VAR_12 = VAR_7->spa_mem + VAR_10;
 VAR_13 = FUNC_3(VAR_12->pid);







 if (!(VAR_8 & VAR_3)) {
  FUNC_0(1, "Invalid xsl interrupt fault register %#llx\n", VAR_8);
  FUNC_2(VAR_7, VAR_0);
  return VAR_1;
 }

 FUNC_8();
 VAR_11 = FUNC_7(&VAR_7->pe_tree, VAR_10);
 if (!VAR_11) {
  FUNC_9();
  FUNC_5("Unknown mm context for xsl interrupt\n");
  FUNC_2(VAR_7, VAR_0);
  return VAR_1;
 }

 if (!VAR_11->mm) {




  FUNC_9();
  FUNC_6("Unresolved OpenCAPI xsl fault in kernel context\n");
  FUNC_2(VAR_7, VAR_0);
  return VAR_1;
 }
 FUNC_1(VAR_11->mm->context.id != VAR_13);

 if (FUNC_4(VAR_11->mm)) {
   VAR_7->xsl_fault.pe = VAR_10;
   VAR_7->xsl_fault.dar = VAR_9;
   VAR_7->xsl_fault.dsisr = VAR_8;
   VAR_7->xsl_fault.pe_data = *VAR_11;
   VAR_14 = 1;

 }
 FUNC_9();
 if (VAR_14)
  FUNC_11(&VAR_7->xsl_fault.fault_work);
 else
  FUNC_2(VAR_7, VAR_0);
 return VAR_1;
}
