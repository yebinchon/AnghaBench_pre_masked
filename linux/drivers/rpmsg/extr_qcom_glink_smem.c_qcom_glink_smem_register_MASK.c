
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
typedef scalar_t__ qcom_glink ;
struct TYPE_3__ {size_t length; int write; int avail; int advance; int peak; } ;
struct glink_smem_pipe {TYPE_1__ native; scalar_t__* head; scalar_t__* tail; void* remote_pid; scalar_t__* fifo; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; struct device* parent; int release; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*,int ,struct device_node*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 struct glink_smem_pipe* FUNC_8 (struct device*,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct device* FUNC_9 (int,int ) ;
 int FUNC_10 (struct device_node*,char*,void**) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct device*) ;
 scalar_t__* FUNC_13 (struct device*,int ,TYPE_1__*,TYPE_1__*,int) ;
 int VAR_13 ;
 int FUNC_14 (void*,int ,int) ;
 void* FUNC_15 (void*,int ,size_t*) ;

struct qcom_glink *FUNC_16(struct device *VAR_14,
         struct device_node *VAR_15)
{
 struct glink_smem_pipe *VAR_16;
 struct glink_smem_pipe *VAR_17;
 struct qcom_glink *VAR_18;
 struct device *VAR_19;
 u32 VAR_20;
 __le32 *VAR_21;
 size_t VAR_22;
 int VAR_23;

 VAR_19 = FUNC_9(sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return FUNC_0(-VAR_2);

 VAR_19->parent = VAR_14;
 VAR_19->of_node = VAR_15;
 VAR_19->release = VAR_13;
 FUNC_5(VAR_19, "%s:%pOFn", FUNC_4(VAR_14->parent), VAR_15);
 VAR_23 = FUNC_6(VAR_19);
 if (VAR_23) {
  FUNC_11("failed to register glink edge\n");
  FUNC_12(VAR_19);
  return FUNC_0(VAR_23);
 }

 VAR_23 = FUNC_10(VAR_19->of_node, "qcom,remote-pid",
       &VAR_20);
 if (VAR_23) {
  FUNC_3(VAR_19, "failed to parse qcom,remote-pid\n");
  goto err_put_dev;
 }

 VAR_16 = FUNC_8(VAR_19, sizeof(*VAR_16), VAR_3);
 VAR_17 = FUNC_8(VAR_19, sizeof(*VAR_17), VAR_3);
 if (!VAR_16 || !VAR_17) {
  VAR_23 = -VAR_2;
  goto err_put_dev;
 }

 VAR_23 = FUNC_14(VAR_20,
         VAR_5, 32);
 if (VAR_23 && VAR_23 != -VAR_0) {
  FUNC_3(VAR_19, "failed to allocate glink descriptors\n");
  goto err_put_dev;
 }

 VAR_21 = FUNC_15(VAR_20,
         VAR_5, &VAR_22);
 if (FUNC_1(VAR_21)) {
  FUNC_3(VAR_19, "failed to acquire xprt descriptor\n");
  VAR_23 = FUNC_2(VAR_21);
  goto err_put_dev;
 }

 if (VAR_22 != 32) {
  FUNC_3(VAR_19, "glink descriptor of invalid size\n");
  VAR_23 = -VAR_1;
  goto err_put_dev;
 }

 VAR_17->tail = &VAR_21[0];
 VAR_17->head = &VAR_21[1];
 VAR_16->tail = &VAR_21[2];
 VAR_16->head = &VAR_21[3];

 VAR_23 = FUNC_14(VAR_20, VAR_6,
         VAR_7);
 if (VAR_23 && VAR_23 != -VAR_0) {
  FUNC_3(VAR_19, "failed to allocate TX fifo\n");
  goto err_put_dev;
 }

 VAR_17->fifo = FUNC_15(VAR_20, VAR_6,
          &VAR_17->native.length);
 if (FUNC_1(VAR_17->fifo)) {
  FUNC_3(VAR_19, "failed to acquire TX fifo\n");
  VAR_23 = FUNC_2(VAR_17->fifo);
  goto err_put_dev;
 }

 VAR_16->native.avail = VAR_9;
 VAR_16->native.peak = VAR_10;
 VAR_16->native.advance = VAR_8;
 VAR_16->remote_pid = VAR_20;

 VAR_17->native.avail = VAR_11;
 VAR_17->native.write = VAR_12;
 VAR_17->remote_pid = VAR_20;

 *VAR_16->tail = 0;
 *VAR_17->head = 0;

 VAR_18 = FUNC_13(VAR_19,
     VAR_4,
     &VAR_16->native, &VAR_17->native,
     0);
 if (FUNC_1(VAR_18)) {
  VAR_23 = FUNC_2(VAR_18);
  goto err_put_dev;
 }

 return VAR_18;

err_put_dev:
 FUNC_7(VAR_19);

 return FUNC_0(VAR_23);
}
