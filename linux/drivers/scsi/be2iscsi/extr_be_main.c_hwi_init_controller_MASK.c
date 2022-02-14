
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {int dummy; } ;
struct beiscsi_hba {TYPE_2__* init_mem; struct hwi_controller* phwi_ctrlr; } ;
struct TYPE_4__ {int num_elements; TYPE_1__* mem_array; } ;
struct TYPE_3__ {scalar_t__ virtual_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct beiscsi_hba*) ;
 scalar_t__ FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (struct beiscsi_hba*) ;

__attribute__((used)) static int FUNC_5(struct beiscsi_hba *VAR_5)
{
 struct hwi_controller *VAR_6;

 VAR_6 = VAR_5->phwi_ctrlr;
 if (1 == VAR_5->init_mem[VAR_2].num_elements) {
  VAR_6->phwi_ctxt = (struct hwi_context_memory *)VAR_5->
      init_mem[VAR_2].mem_array[0].virtual_address;
  FUNC_1(VAR_5, VAR_4, VAR_0,
       "BM_%d :  phwi_ctrlr->phwi_ctxt=%p\n",
       VAR_6->phwi_ctxt);
 } else {
  FUNC_1(VAR_5, VAR_3, VAR_0,
       "BM_%d : HWI_MEM_ADDN_CONTEXT is more "
       "than one element.Failing to load\n");
  return -VAR_1;
 }

 FUNC_4(VAR_5);
 if (FUNC_0(VAR_5))
  return -VAR_1;

 if (FUNC_2(VAR_5)) {
  FUNC_1(VAR_5, VAR_3, VAR_0,
       "BM_%d : hwi_init_async_pdu_ctx failed\n");
  return -VAR_1;
 }

 if (FUNC_3(VAR_5) != 0) {
  FUNC_1(VAR_5, VAR_3, VAR_0,
       "BM_%d : hwi_init_controller failed\n");

  return -VAR_1;
 }
 return 0;
}
