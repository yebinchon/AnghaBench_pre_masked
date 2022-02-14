
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_9__ {int oq_ci_offset; } ;
struct TYPE_10__ {TYPE_4__ create_operational_oq; } ;
struct pqi_general_admin_response {TYPE_5__ data; } ;
struct TYPE_7__ {int int_msg_num; int queue_protocol; int element_length; int num_elements; int pi_addr; int element_array_addr; int queue_id; } ;
struct TYPE_8__ {TYPE_2__ create_operational_oq; } ;
struct TYPE_6__ {int iu_length; int iu_type; } ;
struct pqi_general_admin_request {TYPE_3__ data; int function_code; TYPE_1__ header; } ;
struct pqi_event_queue {int oq_id; int int_msg_num; scalar_t__ oq_ci; scalar_t__ oq_pi_bus_addr; scalar_t__ oq_element_array_bus_addr; } ;
struct pqi_ctrl_info {scalar_t__ iomem_base; struct pqi_event_queue event_queue; } ;
typedef int request ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct pqi_general_admin_request*,int ,int) ;
 int FUNC_2 (struct pqi_ctrl_info*,struct pqi_general_admin_request*,struct pqi_general_admin_response*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct pqi_ctrl_info *VAR_7)
{
 int VAR_8;
 struct pqi_event_queue *VAR_9;
 struct pqi_general_admin_request VAR_10;
 struct pqi_general_admin_response VAR_11;

 VAR_9 = &VAR_7->event_queue;





 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.header.iu_type = VAR_6;
 FUNC_3(VAR_3,
  &VAR_10.header.iu_length);
 VAR_10.function_code = VAR_2;
 FUNC_3(VAR_9->oq_id,
  &VAR_10.data.create_operational_oq.queue_id);
 FUNC_4((u64)VAR_9->oq_element_array_bus_addr,
  &VAR_10.data.create_operational_oq.element_array_addr);
 FUNC_4((u64)VAR_9->oq_pi_bus_addr,
  &VAR_10.data.create_operational_oq.pi_addr);
 FUNC_3(VAR_4,
  &VAR_10.data.create_operational_oq.num_elements);
 FUNC_3(VAR_1 / 16,
  &VAR_10.data.create_operational_oq.element_length);
 VAR_10.data.create_operational_oq.queue_protocol = VAR_5;
 FUNC_3(VAR_9->int_msg_num,
  &VAR_10.data.create_operational_oq.int_msg_num);

 VAR_8 = FUNC_2(VAR_7, &VAR_10,
  &VAR_11);
 if (VAR_8)
  return VAR_8;

 VAR_9->oq_ci = VAR_7->iomem_base +
  VAR_0 +
  FUNC_0(
   &VAR_11.data.create_operational_oq.oq_ci_offset);

 return 0;
}
