
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {int pqi_mode_enabled; int controller_online; TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pqi_ctrl_info*,int ) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;
 int FUNC_6 (struct pqi_ctrl_info*) ;
 int FUNC_7 (struct pqi_ctrl_info*) ;
 int FUNC_8 (struct pqi_ctrl_info*) ;
 int FUNC_9 (struct pqi_ctrl_info*) ;
 int FUNC_10 (struct pqi_ctrl_info*,int ) ;
 int FUNC_11 (struct pqi_ctrl_info*) ;
 int FUNC_12 (struct pqi_ctrl_info*) ;
 int FUNC_13 (struct pqi_ctrl_info*) ;
 int FUNC_14 (struct pqi_ctrl_info*) ;
 int FUNC_15 (struct pqi_ctrl_info*) ;
 int FUNC_16 (struct pqi_ctrl_info*) ;
 int FUNC_17 (struct pqi_ctrl_info*) ;
 int FUNC_18 (struct pqi_ctrl_info*) ;
 int FUNC_19 (struct pqi_ctrl_info*) ;
 int FUNC_20 (struct pqi_ctrl_info*) ;

__attribute__((used)) static int FUNC_21(struct pqi_ctrl_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  return VAR_3;





 VAR_3 = FUNC_20(VAR_2);
 if (VAR_3)
  return VAR_3;





 VAR_3 = FUNC_17(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error obtaining controller properties\n");
  return VAR_3;
 }

 VAR_3 = FUNC_18(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error obtaining controller capabilities\n");
  return VAR_3;
 }






 VAR_3 = FUNC_19(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error initializing PQI mode\n");
  return VAR_3;
 }


 VAR_3 = FUNC_15(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "transition to PQI mode failed\n");
  return VAR_3;
 }


 VAR_2->pqi_mode_enabled = 1;
 FUNC_10(VAR_2, VAR_1);

 FUNC_9(VAR_2);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error creating admin queues\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_2, VAR_0);

 VAR_2->controller_online = 1;
 FUNC_4(VAR_2);

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_14(VAR_2);

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error enabling events\n");
  return VAR_3;
 }

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error obtaining product detail\n");
  return VAR_3;
 }

 VAR_3 = FUNC_13(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error enabling multi-lun rescan\n");
  return VAR_3;
 }

 VAR_3 = FUNC_16(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "error updating host wellness\n");
  return VAR_3;
 }

 FUNC_12(VAR_2);

 FUNC_11(VAR_2);

 return 0;
}
