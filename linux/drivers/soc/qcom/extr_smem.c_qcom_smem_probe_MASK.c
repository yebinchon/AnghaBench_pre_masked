
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct smem_region {int dummy; } ;
struct smem_header {int reserved; int initialized; } ;
struct qcom_smem {int num_regions; int socinfo; int hwlock; int item_count; TYPE_1__* regions; TYPE_2__* dev; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {struct smem_header* virt_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;


 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct qcom_smem* VAR_10 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct qcom_smem* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*,char*,int ,int *,int ) ;
 int FUNC_10 (struct qcom_smem*,scalar_t__) ;
 int FUNC_11 (struct qcom_smem*) ;
 int FUNC_12 (struct qcom_smem*) ;
 int FUNC_13 (struct qcom_smem*,TYPE_2__*,char*,int) ;
 int FUNC_14 (struct qcom_smem*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct smem_header *VAR_12;
 struct qcom_smem *VAR_13;
 size_t VAR_14;
 int VAR_15;
 int VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_15 = 1;
 if (FUNC_7(VAR_11->dev.of_node, "qcom,rpm-msg-ram", ((void*)0)))
  VAR_15++;

 VAR_14 = VAR_15 * sizeof(struct smem_region);
 VAR_13 = FUNC_4(&VAR_11->dev, sizeof(*VAR_13) + VAR_14, VAR_5);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->dev = &VAR_11->dev;
 VAR_13->num_regions = VAR_15;

 VAR_18 = FUNC_13(VAR_13, &VAR_11->dev, "memory-region", 0);
 if (VAR_18)
  return VAR_18;

 if (VAR_15 > 1 && (VAR_18 = FUNC_13(VAR_13, &VAR_11->dev,
     "qcom,rpm-msg-ram", 1)))
  return VAR_18;

 VAR_12 = VAR_13->regions[0].virt_base;
 if (FUNC_6(VAR_12->initialized) != 1 ||
     FUNC_6(VAR_12->reserved)) {
  FUNC_3(&VAR_11->dev, "SMEM is not initialized by SBL\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_12(VAR_13);
 switch (VAR_17 >> 16) {
 case 128:
  VAR_18 = FUNC_14(VAR_13);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_13->item_count = FUNC_11(VAR_13);
  break;
 case 129:
  VAR_13->item_count = VAR_9;
  break;
 default:
  FUNC_3(&VAR_11->dev, "Unsupported SMEM version 0x%x\n", VAR_17);
  return -VAR_0;
 }

 FUNC_0(VAR_7 >= VAR_8);
 VAR_18 = FUNC_10(VAR_13, VAR_7);
 if (VAR_18 < 0 && VAR_18 != -VAR_1)
  return VAR_18;

 VAR_16 = FUNC_8(VAR_11->dev.of_node, 0);
 if (VAR_16 < 0) {
  if (VAR_16 != -VAR_4)
   FUNC_3(&VAR_11->dev, "failed to retrieve hwlock\n");
  return VAR_16;
 }

 VAR_13->hwlock = FUNC_5(VAR_16);
 if (!VAR_13->hwlock)
  return -VAR_3;

 VAR_10 = VAR_13;

 VAR_13->socinfo = FUNC_9(&VAR_11->dev, "qcom-socinfo",
            VAR_6, ((void*)0),
            0);
 if (FUNC_1(VAR_13->socinfo))
  FUNC_2(&VAR_11->dev, "failed to register socinfo device\n");

 return 0;
}
