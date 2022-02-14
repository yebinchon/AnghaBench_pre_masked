
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {scalar_t__ max_iq_element_length; scalar_t__ max_oq_element_length; scalar_t__ max_inbound_iu_length_per_firmware; TYPE_1__* pci_dev; scalar_t__ outbound_spanning_supported; int inbound_spanning_supported; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(struct pqi_ctrl_info *VAR_3)
{
 if (VAR_3->max_iq_element_length <
  VAR_1) {
  FUNC_0(&VAR_3->pci_dev->dev,
   "max. inbound queue element length of %d is less than the required length of %d\n",
   VAR_3->max_iq_element_length,
   VAR_1);
  return -VAR_0;
 }

 if (VAR_3->max_oq_element_length <
  VAR_2) {
  FUNC_0(&VAR_3->pci_dev->dev,
   "max. outbound queue element length of %d is less than the required length of %d\n",
   VAR_3->max_oq_element_length,
   VAR_2);
  return -VAR_0;
 }

 if (VAR_3->max_inbound_iu_length_per_firmware <
  VAR_1) {
  FUNC_0(&VAR_3->pci_dev->dev,
   "max. inbound IU length of %u is less than the min. required length of %d\n",
   VAR_3->max_inbound_iu_length_per_firmware,
   VAR_1);
  return -VAR_0;
 }

 if (!VAR_3->inbound_spanning_supported) {
  FUNC_0(&VAR_3->pci_dev->dev,
   "the controller does not support inbound spanning\n");
  return -VAR_0;
 }

 if (VAR_3->outbound_spanning_supported) {
  FUNC_0(&VAR_3->pci_dev->dev,
   "the controller supports outbound spanning but this driver does not\n");
  return -VAR_0;
 }

 return 0;
}
