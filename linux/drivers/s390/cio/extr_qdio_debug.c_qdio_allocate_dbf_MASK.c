
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_irq {int debug_area; } ;
struct qdio_initialize {unsigned long q_format; unsigned long qib_param_field_format; TYPE_1__* cdev; int output_sbal_addr_array; int input_sbal_addr_array; int int_parm; int output_handler; int input_handler; int no_output_qs; int no_input_qs; int output_slib_elements; int input_slib_elements; int qib_param_field; int * adapter_name; } ;
struct qdio_dbf_entry {int dbf_list; int dbf_info; int dbf_name; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,struct qdio_irq*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long,...) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int,int,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int *) ;
 struct qdio_dbf_entry* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int FUNC_14 (int ,char*,int) ;

int FUNC_15(struct qdio_initialize *VAR_8,
         struct qdio_irq *VAR_9)
{
 char VAR_10[VAR_4];
 struct qdio_dbf_entry *VAR_11;

 FUNC_1("qfmt:%1d", VAR_8->q_format);
 FUNC_2(VAR_8->adapter_name, 8);
 FUNC_1("qpff%4x", VAR_8->qib_param_field_format);
 FUNC_2(&VAR_8->qib_param_field, sizeof(void *));
 FUNC_2(&VAR_8->input_slib_elements, sizeof(void *));
 FUNC_2(&VAR_8->output_slib_elements, sizeof(void *));
 FUNC_1("niq:%1d noq:%1d", VAR_8->no_input_qs,
    VAR_8->no_output_qs);
 FUNC_2(&VAR_8->input_handler, sizeof(void *));
 FUNC_2(&VAR_8->output_handler, sizeof(void *));
 FUNC_2(&VAR_8->int_parm, sizeof(long));
 FUNC_2(&VAR_8->input_sbal_addr_array, sizeof(void *));
 FUNC_2(&VAR_8->output_sbal_addr_array, sizeof(void *));
 FUNC_1("irq:%8lx", (unsigned long)VAR_9);


 FUNC_13(VAR_10, VAR_4, "qdio_%s",
     FUNC_7(&VAR_8->cdev->dev));
 VAR_9->debug_area = FUNC_12(VAR_10);
 if (VAR_9->debug_area)
  FUNC_0(VAR_0, VAR_9, "dbf reused");
 else {
  VAR_9->debug_area = FUNC_3(VAR_10, 2, 1, 16);
  if (!VAR_9->debug_area)
   return -VAR_2;
  if (FUNC_4(VAR_9->debug_area,
      &VAR_5)) {
   FUNC_6(VAR_9->debug_area);
   return -VAR_2;
  }
  FUNC_5(VAR_9->debug_area, VAR_1);
  FUNC_0(VAR_0, VAR_9, "dbf created");
  VAR_11 = FUNC_8(sizeof(struct qdio_dbf_entry), VAR_3);
  if (!VAR_11) {
   FUNC_6(VAR_9->debug_area);
   return -VAR_2;
  }
  FUNC_14(VAR_11->dbf_name, VAR_10, VAR_4);
  VAR_11->dbf_info = VAR_9->debug_area;
  FUNC_10(&VAR_7);
  FUNC_9(&VAR_11->dbf_list, &VAR_6);
  FUNC_11(&VAR_7);
 }
 return 0;
}
