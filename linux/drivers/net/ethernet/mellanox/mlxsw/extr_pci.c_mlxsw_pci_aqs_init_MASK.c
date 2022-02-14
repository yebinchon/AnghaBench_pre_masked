
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int nopoll; } ;
struct mlxsw_pci {scalar_t__ max_cqe_ver; TYPE_1__ cmd; scalar_t__ num_sdq_cqs; int core; struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct mlxsw_pci*,int *) ;
 int FUNC_13 (struct mlxsw_pci*,char*,int *,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_14(struct mlxsw_pci *VAR_12, char *VAR_13)
{
 struct pci_dev *VAR_14 = VAR_12->pdev;
 u8 VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 int VAR_24;

 FUNC_10(VAR_13);
 VAR_24 = FUNC_11(VAR_12->core, VAR_13);
 if (VAR_24)
  return VAR_24;

 VAR_15 = FUNC_9(VAR_13);
 VAR_16 = FUNC_5(VAR_13);
 VAR_17 = FUNC_8(VAR_13);
 VAR_18 = FUNC_4(VAR_13);
 VAR_19 = FUNC_6(VAR_13);
 VAR_20 = FUNC_1(VAR_13);
 VAR_21 = FUNC_2(VAR_13);
 VAR_22 = FUNC_7(VAR_13);
 VAR_23 = FUNC_3(VAR_13);

 if (VAR_15 + VAR_17 > VAR_19 ||
     VAR_19 > VAR_4 || VAR_22 != VAR_6) {
  FUNC_0(&VAR_14->dev, "Unsupported number of queues\n");
  return -VAR_0;
 }

 if ((1 << VAR_16 != VAR_7) ||
     (1 << VAR_18 != VAR_7) ||
     (1 << VAR_20 != VAR_1) ||
     (VAR_12->max_cqe_ver == VAR_3 &&
      (1 << VAR_21 != VAR_2)) ||
     (1 << VAR_23 != VAR_5)) {
  FUNC_0(&VAR_14->dev, "Unsupported number of async queue descriptors\n");
  return -VAR_0;
 }

 VAR_12->num_sdq_cqs = VAR_15;

 VAR_24 = FUNC_13(VAR_12, VAR_13, &VAR_9,
      VAR_22);
 if (VAR_24) {
  FUNC_0(&VAR_14->dev, "Failed to initialize event queues\n");
  return VAR_24;
 }

 VAR_24 = FUNC_13(VAR_12, VAR_13, &VAR_8,
      VAR_19);
 if (VAR_24) {
  FUNC_0(&VAR_14->dev, "Failed to initialize completion queues\n");
  goto err_cqs_init;
 }

 VAR_24 = FUNC_13(VAR_12, VAR_13, &VAR_11,
      VAR_15);
 if (VAR_24) {
  FUNC_0(&VAR_14->dev, "Failed to initialize send descriptor queues\n");
  goto err_sdqs_init;
 }

 VAR_24 = FUNC_13(VAR_12, VAR_13, &VAR_10,
      VAR_17);
 if (VAR_24) {
  FUNC_0(&VAR_14->dev, "Failed to initialize receive descriptor queues\n");
  goto err_rdqs_init;
 }


 VAR_12->cmd.nopoll = 1;
 return 0;

err_rdqs_init:
 FUNC_12(VAR_12, &VAR_11);
err_sdqs_init:
 FUNC_12(VAR_12, &VAR_8);
err_cqs_init:
 FUNC_12(VAR_12, &VAR_9);
 return VAR_24;
}
