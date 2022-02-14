
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* u32 ;
struct reserved_mem {int size; int base; } ;
struct qcom_scm_vmperm {void* perm; void* vmid; } ;
struct TYPE_12__ {int devt; int * class; void* id; int release; int groups; TYPE_5__* parent; } ;
struct TYPE_14__ {int owner; } ;
struct qcom_rmtfs_mem {TYPE_1__ dev; TYPE_7__ cdev; int perms; int size; int addr; int base; void* client_id; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_7__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_7__*,int *) ;
 int FUNC_8 (TYPE_5__*,char*,...) ;
 int FUNC_9 (TYPE_5__*,struct qcom_rmtfs_mem*) ;
 int FUNC_10 (TYPE_1__*,char*,void*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int ) ;
 struct qcom_rmtfs_mem* FUNC_13 (int,int ) ;
 int FUNC_14 (struct device_node*,char*,void**) ;
 struct reserved_mem* FUNC_15 (struct device_node*) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (int ,int ,int *,struct qcom_scm_vmperm*,int) ;
 int FUNC_18 () ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev.of_node;
 struct qcom_scm_vmperm VAR_15[2];
 struct reserved_mem *VAR_16;
 struct qcom_rmtfs_mem *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20;

 VAR_16 = FUNC_15(VAR_14);
 if (!VAR_16) {
  FUNC_8(&VAR_13->dev, "failed to acquire memory region\n");
  return -VAR_0;
 }

 VAR_20 = FUNC_14(VAR_14, "qcom,client-id", &VAR_18);
 if (VAR_20) {
  FUNC_8(&VAR_13->dev, "failed to parse \"qcom,client-id\"\n");
  return VAR_20;

 }

 VAR_17 = FUNC_13(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->addr = VAR_16->base;
 VAR_17->client_id = VAR_18;
 VAR_17->size = VAR_16->size;

 FUNC_11(&VAR_17->dev);
 VAR_17->dev.parent = &VAR_13->dev;
 VAR_17->dev.groups = VAR_9;
 VAR_17->dev.release = VAR_11;

 VAR_17->base = FUNC_12(&VAR_17->dev, VAR_17->addr,
     VAR_17->size, VAR_4);
 if (FUNC_1(VAR_17->base)) {
  FUNC_8(&VAR_13->dev, "failed to remap rmtfs_mem region\n");
  VAR_20 = FUNC_4(VAR_17->base);
  goto put_device;
 }

 FUNC_7(&VAR_17->cdev, &VAR_8);
 VAR_17->cdev.owner = VAR_7;

 FUNC_10(&VAR_17->dev, "qcom_rmtfs_mem%d", VAR_18);
 VAR_17->dev.id = VAR_18;
 VAR_17->dev.class = &VAR_12;
 VAR_17->dev.devt = FUNC_3(FUNC_2(VAR_10), VAR_18);

 VAR_20 = FUNC_5(&VAR_17->cdev, &VAR_17->dev);
 if (VAR_20) {
  FUNC_8(&VAR_13->dev, "failed to add cdev: %d\n", VAR_20);
  goto put_device;
 }

 VAR_20 = FUNC_14(VAR_14, "qcom,vmid", &VAR_19);
 if (VAR_20 < 0 && VAR_20 != -VAR_0) {
  FUNC_8(&VAR_13->dev, "failed to parse qcom,vmid\n");
  goto remove_cdev;
 } else if (!VAR_20) {
  if (!FUNC_18()) {
   VAR_20 = -VAR_2;
   goto remove_cdev;
  }

  VAR_15[0].vmid = VAR_6;
  VAR_15[0].perm = VAR_5;
  VAR_15[1].vmid = VAR_19;
  VAR_15[1].perm = VAR_5;

  VAR_17->perms = FUNC_0(VAR_6);
  VAR_20 = FUNC_17(VAR_17->addr, VAR_17->size,
       &VAR_17->perms, VAR_15, 2);
  if (VAR_20 < 0) {
   FUNC_8(&VAR_13->dev, "assign memory failed\n");
   goto remove_cdev;
  }
 }

 FUNC_9(&VAR_13->dev, VAR_17);

 return 0;

remove_cdev:
 FUNC_6(&VAR_17->cdev, &VAR_17->dev);
put_device:
 FUNC_16(&VAR_17->dev);

 return VAR_20;
}
