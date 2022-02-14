
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct greybus_descriptor_cport {scalar_t__ protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_loopback_transfer_request {int dummy; } ;
struct gb_loopback {int id; int file; int kfifo_lat; struct gb_connection* task; int mutex; struct gb_connection* dev; void* timeout_max; void* timeout_min; int outstanding_operations; int wq_completion; int wq; struct gb_connection* connection; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct gb_bundle {int num_cports; struct greybus_descriptor_cport* cport_desc; } ;
struct device {TYPE_1__* bundle; } ;
typedef int name ;
struct TYPE_4__ {int size_max; int lock; int count; int root; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct gb_connection*) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int,int ,struct gb_loopback*,int *) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int *) ;
 struct gb_connection* FUNC_7 (int *,int *,int ,struct gb_loopback*,int ,char*,int) ;
 int FUNC_8 (struct gb_connection*) ;
 struct gb_connection* FUNC_9 (struct gb_bundle*,int ,int ) ;
 int FUNC_10 (struct gb_connection*) ;
 int FUNC_11 (struct gb_connection*) ;
 int FUNC_12 (struct gb_connection*) ;
 int FUNC_13 (struct gb_connection*) ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (struct gb_loopback*) ;
 int FUNC_15 (struct gb_connection*) ;
 int FUNC_16 (struct gb_bundle*) ;
 int FUNC_17 (struct gb_bundle*,struct gb_loopback*) ;
 int FUNC_18 (int *,int ,int ,int ) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;
 void* FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int *,int,int ) ;
 int VAR_13 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct gb_loopback*) ;
 struct gb_connection* FUNC_25 (int ,struct gb_loopback*,char*) ;
 struct gb_loopback* FUNC_26 (int,int ) ;
 int FUNC_27 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_28 (int *) ;
 int FUNC_29 (char*,int,char*,char*) ;
 int FUNC_30 (int *,unsigned long) ;
 int FUNC_31 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_32(struct gb_bundle *VAR_17,
        const struct greybus_bundle_id *VAR_18)
{
 struct greybus_descriptor_cport *VAR_19;
 struct gb_connection *VAR_20;
 struct gb_loopback *VAR_21;
 struct device *VAR_22;
 int VAR_23;
 char VAR_24[VAR_0];
 unsigned long VAR_25;

 if (VAR_17->num_cports != 1)
  return -VAR_2;

 VAR_19 = &VAR_17->cport_desc[0];
 if (VAR_19->protocol_id != VAR_7)
  return -VAR_2;

 VAR_21 = FUNC_26(sizeof(*VAR_21), VAR_6);
 if (!VAR_21)
  return -VAR_3;

 VAR_20 = FUNC_9(VAR_17, FUNC_27(VAR_19->id),
       VAR_12);
 if (FUNC_0(VAR_20)) {
  VAR_23 = FUNC_2(VAR_20);
  goto out_kzalloc;
 }

 VAR_21->connection = VAR_20;
 FUNC_17(VAR_17, VAR_21);

 FUNC_20(&VAR_21->wq);
 FUNC_20(&VAR_21->wq_completion);
 FUNC_3(&VAR_21->outstanding_operations, 0);
 FUNC_14(VAR_21);


 VAR_21->timeout_min = FUNC_21(VAR_5);
 VAR_21->timeout_max = FUNC_21(VAR_4);

 if (!VAR_9.count) {

  VAR_9.size_max = FUNC_15(VAR_20);
  if (VAR_9.size_max <=
   sizeof(struct gb_loopback_transfer_request)) {
   VAR_23 = -VAR_1;
   goto out_connection_destroy;
  }
  VAR_9.size_max -= sizeof(struct gb_loopback_transfer_request);
 }


 FUNC_29(VAR_24, sizeof(VAR_24), "raw_latency_%s",
   FUNC_6(&VAR_20->bundle->dev));
 VAR_21->file = FUNC_4(VAR_24, VAR_8 | 0444, VAR_9.root, VAR_21,
           &VAR_10);

 VAR_21->id = FUNC_18(&VAR_16, 0, 0, VAR_6);
 if (VAR_21->id < 0) {
  VAR_23 = VAR_21->id;
  goto out_debugfs_remove;
 }

 VAR_23 = FUNC_12(VAR_20);
 if (VAR_23)
  goto out_ida_remove;

 VAR_22 = FUNC_7(&VAR_14,
     &VAR_20->bundle->dev,
     FUNC_1(0, 0), VAR_21, VAR_15,
     "gb_loopback%d", VAR_21->id);
 if (FUNC_0(VAR_22)) {
  VAR_23 = FUNC_2(VAR_22);
  goto out_connection_disable;
 }
 VAR_21->dev = VAR_22;


 if (FUNC_22(&VAR_21->kfifo_lat, VAR_13 * sizeof(u32),
   VAR_6)) {
  VAR_23 = -VAR_3;
  goto out_conn;
 }

 FUNC_28(&VAR_21->mutex);
 VAR_21->task = FUNC_25(VAR_11, VAR_21, "gb_loopback");
 if (FUNC_0(VAR_21->task)) {
  VAR_23 = FUNC_2(VAR_21->task);
  goto out_kfifo;
 }

 FUNC_30(&VAR_9.lock, VAR_25);
 VAR_9.count++;
 FUNC_31(&VAR_9.lock, VAR_25);

 FUNC_13(VAR_20);

 FUNC_16(VAR_17);

 return 0;

out_kfifo:
 FUNC_23(&VAR_21->kfifo_lat);
out_conn:
 FUNC_8(VAR_22);
out_connection_disable:
 FUNC_11(VAR_20);
out_ida_remove:
 FUNC_19(&VAR_16, VAR_21->id);
out_debugfs_remove:
 FUNC_5(VAR_21->file);
out_connection_destroy:
 FUNC_10(VAR_20);
out_kzalloc:
 FUNC_24(VAR_21);

 return VAR_23;
}
