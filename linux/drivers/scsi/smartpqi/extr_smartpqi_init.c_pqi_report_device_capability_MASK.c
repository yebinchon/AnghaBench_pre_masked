
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pqi_iu_layer_descriptor {int outbound_spanning_supported; int inbound_spanning_supported; int max_inbound_iu_length; } ;
struct pqi_general_admin_response {scalar_t__ status; } ;
struct TYPE_5__ {int sg_descriptor; int buffer_length; } ;
struct TYPE_6__ {TYPE_2__ report_device_capability; } ;
struct TYPE_4__ {int iu_length; int iu_type; } ;
struct pqi_general_admin_request {TYPE_3__ data; int function_code; TYPE_1__ header; } ;
struct pqi_device_capability {struct pqi_iu_layer_descriptor* iu_layer_descriptors; int max_oq_element_length; int max_elements_per_oq; int max_outbound_queues; int max_iq_element_length; int max_elements_per_iq; int max_inbound_queues; } ;
struct pqi_ctrl_info {int max_inbound_queues; int max_elements_per_iq; int max_iq_element_length; int max_outbound_queues; int max_elements_per_oq; int max_oq_element_length; int max_inbound_iu_length_per_firmware; int outbound_spanning_supported; int inbound_spanning_supported; int pci_dev; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pqi_device_capability*) ;
 struct pqi_device_capability* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pqi_general_admin_request*,int ,int) ;
 int FUNC_4 (int ,int *,struct pqi_device_capability*,int,int ) ;
 int FUNC_5 (int ,int *,int,int ) ;
 int FUNC_6 (struct pqi_ctrl_info*,struct pqi_general_admin_request*,struct pqi_general_admin_response*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(struct pqi_ctrl_info *VAR_9)
{
 int VAR_10;
 struct pqi_general_admin_request VAR_11;
 struct pqi_general_admin_response VAR_12;
 struct pqi_device_capability *VAR_13;
 struct pqi_iu_layer_descriptor *VAR_14;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));

 VAR_11.header.iu_type = VAR_8;
 FUNC_7(VAR_5,
  &VAR_11.header.iu_length);
 VAR_11.function_code =
  VAR_4;
 FUNC_8(sizeof(*VAR_13),
  &VAR_11.data.report_device_capability.buffer_length);

 VAR_10 = FUNC_4(VAR_9->pci_dev,
  &VAR_11.data.report_device_capability.sg_descriptor,
  VAR_13, sizeof(*VAR_13),
  VAR_0);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_6(VAR_9, &VAR_11,
  &VAR_12);

 FUNC_5(VAR_9->pci_dev,
  &VAR_11.data.report_device_capability.sg_descriptor, 1,
  VAR_0);

 if (VAR_10)
  goto out;

 if (VAR_12.status != VAR_6) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_9->max_inbound_queues =
  FUNC_0(&VAR_13->max_inbound_queues);
 VAR_9->max_elements_per_iq =
  FUNC_0(&VAR_13->max_elements_per_iq);
 VAR_9->max_iq_element_length =
  FUNC_0(&VAR_13->max_iq_element_length)
  * 16;
 VAR_9->max_outbound_queues =
  FUNC_0(&VAR_13->max_outbound_queues);
 VAR_9->max_elements_per_oq =
  FUNC_0(&VAR_13->max_elements_per_oq);
 VAR_9->max_oq_element_length =
  FUNC_0(&VAR_13->max_oq_element_length)
  * 16;

 VAR_14 =
  &VAR_13->iu_layer_descriptors[VAR_7];

 VAR_9->max_inbound_iu_length_per_firmware =
  FUNC_0(
   &VAR_14->max_inbound_iu_length);
 VAR_9->inbound_spanning_supported =
  VAR_14->inbound_spanning_supported;
 VAR_9->outbound_spanning_supported =
  VAR_14->outbound_spanning_supported;

out:
 FUNC_1(VAR_13);

 return VAR_10;
}
