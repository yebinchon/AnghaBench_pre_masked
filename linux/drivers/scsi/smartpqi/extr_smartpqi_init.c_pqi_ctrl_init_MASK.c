
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {scalar_t__ max_outstanding_requests; int pqi_mode_enabled; scalar_t__ num_msix_vectors_enabled; scalar_t__ num_queue_groups; scalar_t__ max_msix_vectors; int controller_online; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;
 int FUNC_6 (struct pqi_ctrl_info*) ;
 int FUNC_7 (struct pqi_ctrl_info*,int ) ;
 int FUNC_8 (struct pqi_ctrl_info*) ;
 int FUNC_9 (struct pqi_ctrl_info*) ;
 int FUNC_10 (struct pqi_ctrl_info*) ;
 int FUNC_11 (struct pqi_ctrl_info*) ;
 int FUNC_12 (struct pqi_ctrl_info*) ;
 int FUNC_13 (struct pqi_ctrl_info*) ;
 int FUNC_14 (struct pqi_ctrl_info*) ;
 int FUNC_15 (struct pqi_ctrl_info*) ;
 int FUNC_16 (struct pqi_ctrl_info*) ;
 int FUNC_17 (struct pqi_ctrl_info*) ;
 int FUNC_18 (struct pqi_ctrl_info*) ;
 int FUNC_19 (struct pqi_ctrl_info*) ;
 int FUNC_20 (struct pqi_ctrl_info*,int ) ;
 int FUNC_21 (struct pqi_ctrl_info*) ;
 int FUNC_22 (struct pqi_ctrl_info*) ;
 int FUNC_23 (struct pqi_ctrl_info*) ;
 int FUNC_24 (struct pqi_ctrl_info*) ;
 int FUNC_25 (struct pqi_ctrl_info*) ;
 int FUNC_26 (struct pqi_ctrl_info*) ;
 int FUNC_27 (struct pqi_ctrl_info*) ;
 scalar_t__ VAR_4 ;
 int FUNC_28 (struct pqi_ctrl_info*) ;
 int FUNC_29 (struct pqi_ctrl_info*) ;
 int FUNC_30 (struct pqi_ctrl_info*) ;
 int FUNC_31 (struct pqi_ctrl_info*) ;

__attribute__((used)) static int FUNC_32(struct pqi_ctrl_info *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_12(VAR_5);
 if (VAR_6)
  return VAR_6;





 VAR_6 = FUNC_31(VAR_5);
 if (VAR_6)
  return VAR_6;





 VAR_6 = FUNC_28(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error obtaining controller properties\n");
  return VAR_6;
 }

 VAR_6 = FUNC_29(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error obtaining controller capabilities\n");
  return VAR_6;
 }

 if (VAR_4) {
  if (VAR_5->max_outstanding_requests >
   VAR_2)
   VAR_5->max_outstanding_requests =
     VAR_2;
 } else {
  if (VAR_5->max_outstanding_requests >
   VAR_1)
   VAR_5->max_outstanding_requests =
     VAR_1;
 }

 FUNC_5(VAR_5);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "failed to allocate PQI error buffer\n");
  return VAR_6;
 }






 VAR_6 = FUNC_30(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error initializing PQI mode\n");
  return VAR_6;
 }


 VAR_6 = FUNC_26(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "transition to PQI mode failed\n");
  return VAR_6;
 }


 VAR_5->pqi_mode_enabled = 1;
 FUNC_20(VAR_5, VAR_3);

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "failed to allocate admin queues\n");
  return VAR_6;
 }

 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error creating admin queues\n");
  return VAR_6;
 }

 VAR_6 = FUNC_18(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "obtaining device capability failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_25(VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_6(VAR_5);

 VAR_6 = FUNC_11(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->num_msix_vectors_enabled < VAR_5->num_queue_groups) {
  VAR_5->max_msix_vectors =
   VAR_5->num_msix_vectors_enabled;
  FUNC_6(VAR_5);
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "failed to allocate operational queues\n");
  return VAR_6;
 }

 FUNC_15(VAR_5);

 VAR_6 = FUNC_19(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_7(VAR_5, VAR_0);

 VAR_5->controller_online = 1;

 VAR_6 = FUNC_16(VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_24(VAR_5);

 VAR_6 = FUNC_10(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error enabling events\n");
  return VAR_6;
 }


 VAR_6 = FUNC_17(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_13(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error obtaining product details\n");
  return VAR_6;
 }

 VAR_6 = FUNC_14(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error obtaining ctrl serial number\n");
  return VAR_6;
 }

 VAR_6 = FUNC_23(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error enabling multi-lun rescan\n");
  return VAR_6;
 }

 VAR_6 = FUNC_27(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->pci_dev->dev,
   "error updating host wellness\n");
  return VAR_6;
 }

 FUNC_22(VAR_5);

 FUNC_21(VAR_5);

 return 0;
}
