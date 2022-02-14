
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct wrb_handle {int dummy; } ;
struct hwi_wrb_context {int dummy; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct TYPE_2__ {int wrbs_per_cxn; } ;
struct beiscsi_hba {TYPE_1__ params; struct hwi_controller* phwi_ctrlr; } ;


 size_t FUNC_0 (unsigned int) ;
 struct wrb_handle* FUNC_1 (struct hwi_wrb_context*,int ) ;

struct wrb_handle *FUNC_2(struct beiscsi_hba *VAR_0, unsigned int VAR_1,
        struct hwi_wrb_context **VAR_2)
{
 struct hwi_wrb_context *VAR_3;
 struct hwi_controller *VAR_4;
 uint16_t VAR_5 = FUNC_0(VAR_1);

 VAR_4 = VAR_0->phwi_ctrlr;
 VAR_3 = &VAR_4->wrb_context[VAR_5];

 *VAR_2 = VAR_3;
 return FUNC_1(VAR_3, VAR_0->params.wrbs_per_cxn);
}
