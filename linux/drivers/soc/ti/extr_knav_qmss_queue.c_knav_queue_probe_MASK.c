
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef void* u32 ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct knav_device {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_15__ {int * link_rams; struct device* dev; void* num_queues; void* base_id; int pdsps; int regions; int pools; int qmgrs; int queue_ranges; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int *,int *,int *) ;
 int FUNC_2 (struct device*,char*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 (struct device*,int,int ) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int *) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,struct device_node*) ;
 int FUNC_8 (TYPE_1__*,struct device_node*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,struct device_node*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,struct device_node*) ;
 struct device_node* FUNC_15 (struct device_node*,char*) ;
 struct of_device_id* FUNC_16 (int ,struct device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct device_node*) ;
 scalar_t__ FUNC_19 (struct device_node*,char*,void**,int) ;
 int FUNC_20 (struct platform_device*,TYPE_1__*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->dev.of_node;
 struct device_node *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 const struct of_device_id *VAR_16;
 struct device *VAR_17 = &VAR_10->dev;
 u32 VAR_18[2];
 int VAR_19;

 if (!VAR_11) {
  FUNC_2(VAR_17, "device tree info unavailable\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_17, sizeof(struct knav_device), VAR_2);
 if (!VAR_7) {
  FUNC_2(VAR_17, "memory allocation failed\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_16(FUNC_17(VAR_8), VAR_17);
 if (VAR_16 && VAR_16->data)
  VAR_7->version = VAR_3;

 FUNC_20(VAR_10, VAR_7);
 VAR_7->dev = VAR_17;
 FUNC_0(&VAR_7->queue_ranges);
 FUNC_0(&VAR_7->qmgrs);
 FUNC_0(&VAR_7->pools);
 FUNC_0(&VAR_7->regions);
 FUNC_0(&VAR_7->pdsps);

 FUNC_22(&VAR_10->dev);
 VAR_19 = FUNC_23(&VAR_10->dev);
 if (VAR_19 < 0) {
  FUNC_2(VAR_17, "Failed to enable QMSS\n");
  return VAR_19;
 }

 if (FUNC_19(VAR_11, "queue-range", VAR_18, 2)) {
  FUNC_2(VAR_17, "queue-range not specified\n");
  VAR_19 = -VAR_0;
  goto err;
 }
 VAR_7->base_id = VAR_18[0];
 VAR_7->num_queues = VAR_18[1];


 VAR_12 = FUNC_15(VAR_11, "qmgrs");
 if (!VAR_12) {
  FUNC_2(VAR_17, "queue manager info not specified\n");
  VAR_19 = -VAR_0;
  goto err;
 }
 VAR_19 = FUNC_8(VAR_7, VAR_12);
 FUNC_18(VAR_12);
 if (VAR_19)
  goto err;


 VAR_15 = FUNC_15(VAR_11, "pdsps");
 if (VAR_15) {
  VAR_19 = FUNC_7(VAR_7, VAR_15);
  if (VAR_19)
   goto err;

  VAR_19 = FUNC_12(VAR_7);
  if (VAR_19)
   goto err;
 }
 FUNC_18(VAR_15);


 VAR_13 = FUNC_15(VAR_11, "queue-pools");
 if (!VAR_13) {
  FUNC_2(VAR_17, "queue-pools not specified\n");
  VAR_19 = -VAR_0;
  goto err;
 }
 VAR_19 = FUNC_14(VAR_7, VAR_13);
 FUNC_18(VAR_13);
 if (VAR_19)
  goto err;

 VAR_19 = FUNC_5(VAR_7, "linkram0", &VAR_7->link_rams[0]);
 if (VAR_19) {
  FUNC_2(VAR_7->dev, "could not setup linking ram\n");
  goto err;
 }

 VAR_19 = FUNC_5(VAR_7, "linkram1", &VAR_7->link_rams[1]);
 if (VAR_19) {




 }

 VAR_19 = FUNC_10(VAR_7);
 if (VAR_19)
  goto err;

 VAR_14 = FUNC_15(VAR_11, "descriptor-regions");
 if (!VAR_14) {
  FUNC_2(VAR_17, "descriptor-regions not specified\n");
  goto err;
 }
 VAR_19 = FUNC_11(VAR_7, VAR_14);
 FUNC_18(VAR_14);
 if (VAR_19)
  goto err;

 VAR_19 = FUNC_9(VAR_7);
 if (VAR_19 < 0) {
  FUNC_2(VAR_17, "hwqueue initialization failed\n");
  goto err;
 }

 FUNC_1("qmss", VAR_4 | VAR_5, ((void*)0), ((void*)0),
       &VAR_9);
 VAR_6 = 1;
 return 0;

err:
 FUNC_13(VAR_7);
 FUNC_6(VAR_7);
 FUNC_4(VAR_7);
 FUNC_24(&VAR_10->dev);
 FUNC_21(&VAR_10->dev);
 return VAR_19;
}
