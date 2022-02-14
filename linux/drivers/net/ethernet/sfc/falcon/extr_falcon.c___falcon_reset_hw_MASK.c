
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int pci_dev2; } ;
struct ef4_nic {int pci_dev; int net_dev; struct falcon_nic_data* nic_data; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
typedef int ef4_oword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,int,int ,int,int ,int,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*,int *,int ) ;
 int FUNC_6 (struct ef4_nic*,int *,int ) ;
 int VAR_14 ;
 int FUNC_7 (struct ef4_nic*,int ,int ,char*,...) ;
 int FUNC_8 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ef4_nic *VAR_15, enum reset_type VAR_16)
{
 struct falcon_nic_data *VAR_17 = VAR_15->nic_data;
 ef4_oword_t VAR_18;
 int VAR_19;

 FUNC_7(VAR_15, VAR_14, VAR_15->net_dev, "performing %s hardware reset\n",
    FUNC_3(VAR_16));


 if (VAR_16 == VAR_12) {
  VAR_19 = FUNC_10(VAR_15->pci_dev);
  if (VAR_19) {
   FUNC_8(VAR_15, VAR_13, VAR_15->net_dev,
      "failed to backup PCI state of primary "
      "function prior to hardware reset\n");
   goto fail1;
  }
  if (FUNC_4(VAR_15)) {
   VAR_19 = FUNC_10(VAR_17->pci_dev2);
   if (VAR_19) {
    FUNC_8(VAR_15, VAR_13, VAR_15->net_dev,
       "failed to backup PCI state of "
       "secondary function prior to "
       "hardware reset\n");
    goto fail2;
   }
  }

  FUNC_1(VAR_18,
         VAR_4,
         VAR_1,
         VAR_8, 1);
 } else {
  FUNC_2(VAR_18,

         VAR_3,
         VAR_16 == VAR_11,

         VAR_5, 1,
         VAR_6, 1,
         VAR_7, 1,
         VAR_2, 1,
         VAR_4,
         VAR_1,
         VAR_8, 1);
 }
 FUNC_6(VAR_15, &VAR_18, VAR_9);

 FUNC_7(VAR_15, VAR_14, VAR_15->net_dev, "waiting for hardware reset\n");
 FUNC_11(VAR_10 / 20);


 if (VAR_16 == VAR_12) {
  if (FUNC_4(VAR_15))
   FUNC_9(VAR_17->pci_dev2);
  FUNC_9(VAR_15->pci_dev);
  FUNC_7(VAR_15, VAR_13, VAR_15->net_dev,
     "successfully restored PCI config\n");
 }


 FUNC_5(VAR_15, &VAR_18, VAR_9);
 if (FUNC_0(VAR_18, VAR_8) != 0) {
  VAR_19 = -VAR_0;
  FUNC_8(VAR_15, VAR_14, VAR_15->net_dev,
     "timed out waiting for hardware reset\n");
  goto fail3;
 }
 FUNC_7(VAR_15, VAR_14, VAR_15->net_dev, "hardware reset complete\n");

 return 0;


fail2:
 FUNC_9(VAR_15->pci_dev);
fail1:
fail3:
 return VAR_19;
}
