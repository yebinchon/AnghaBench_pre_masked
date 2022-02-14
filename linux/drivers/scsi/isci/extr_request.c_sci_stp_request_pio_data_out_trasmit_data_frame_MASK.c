
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int fis_type; } ;
struct TYPE_7__ {TYPE_2__ stp; } ;
struct scu_task_context {TYPE_3__ type; int transfer_length_bytes; int command_iu_lower; int command_iu_upper; } ;
struct scu_sgl_element {int address_lower; int address_upper; } ;
struct scu_sgl_element_pair {struct scu_sgl_element B; struct scu_sgl_element A; } ;
struct TYPE_5__ {scalar_t__ set; int index; } ;
struct isci_stp_request {TYPE_1__ sgl; } ;
struct TYPE_8__ {struct isci_stp_request req; } ;
struct isci_request {struct scu_task_context* tc; TYPE_4__ stp; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isci_request*) ;
 struct scu_sgl_element_pair* FUNC_1 (struct isci_request*,int ) ;

__attribute__((used)) static enum sci_status FUNC_2(
 struct isci_request *VAR_2,
 u32 VAR_3)
{
 struct isci_stp_request *VAR_4 = &VAR_2->stp.req;
 struct scu_task_context *VAR_5 = VAR_2->tc;
 struct scu_sgl_element_pair *VAR_6;
 struct scu_sgl_element *VAR_7;




 VAR_6 = FUNC_1(VAR_2, VAR_4->sgl.index);
 if (VAR_4->sgl.set == VAR_1)
  VAR_7 = &VAR_6->A;
 else
  VAR_7 = &VAR_6->B;


 VAR_5->command_iu_upper = VAR_7->address_upper;
 VAR_5->command_iu_lower = VAR_7->address_lower;
 VAR_5->transfer_length_bytes = VAR_3;
 VAR_5->type.stp.fis_type = VAR_0;


 return FUNC_0(VAR_2);
}
