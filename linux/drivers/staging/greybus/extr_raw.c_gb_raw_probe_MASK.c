
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct greybus_descriptor_cport {scalar_t__ protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_raw {int cdev; struct gb_connection* device; int dev; struct gb_connection* connection; int list_lock; int list; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct gb_bundle {int num_cports; struct greybus_descriptor_cport* cport_desc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 struct gb_connection* FUNC_7 (int ,int *,int ,struct gb_raw*,char*,int) ;
 struct gb_connection* FUNC_8 (struct gb_bundle*,int ,int ) ;
 int FUNC_9 (struct gb_connection*) ;
 int FUNC_10 (struct gb_connection*) ;
 int FUNC_11 (struct gb_connection*) ;
 int VAR_4 ;
 int FUNC_12 (struct gb_bundle*,struct gb_raw*) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct gb_raw*) ;
 struct gb_raw* FUNC_16 (int,int ) ;
 int FUNC_17 (int ) ;
 int VAR_5 ;
 int FUNC_18 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_19(struct gb_bundle *VAR_9,
   const struct greybus_bundle_id *VAR_10)
{
 struct greybus_descriptor_cport *VAR_11;
 struct gb_connection *VAR_12;
 struct gb_raw *VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_9->num_cports != 1)
  return -VAR_0;

 VAR_11 = &VAR_9->cport_desc[0];
 if (VAR_11->protocol_id != VAR_3)
  return -VAR_0;

 VAR_13 = FUNC_16(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_8(VAR_9, FUNC_17(VAR_11->id),
       VAR_4);
 if (FUNC_1(VAR_12)) {
  VAR_14 = FUNC_3(VAR_12);
  goto error_free;
 }

 FUNC_0(&VAR_13->list);
 FUNC_18(&VAR_13->list_lock);

 VAR_13->connection = VAR_12;
 FUNC_12(VAR_9, VAR_13);

 VAR_15 = FUNC_13(&VAR_5, 0, 0, VAR_2);
 if (VAR_15 < 0) {
  VAR_14 = VAR_15;
  goto error_connection_destroy;
 }

 VAR_13->dev = FUNC_2(VAR_8, VAR_15);
 FUNC_6(&VAR_13->cdev, &VAR_7);

 VAR_14 = FUNC_11(VAR_12);
 if (VAR_14)
  goto error_remove_ida;

 VAR_14 = FUNC_4(&VAR_13->cdev, VAR_13->dev, 1);
 if (VAR_14)
  goto error_connection_disable;

 VAR_13->device = FUNC_7(VAR_6, &VAR_12->bundle->dev,
        VAR_13->dev, VAR_13, "gb!raw%d", VAR_15);
 if (FUNC_1(VAR_13->device)) {
  VAR_14 = FUNC_3(VAR_13->device);
  goto error_del_cdev;
 }

 return 0;

error_del_cdev:
 FUNC_5(&VAR_13->cdev);

error_connection_disable:
 FUNC_10(VAR_12);

error_remove_ida:
 FUNC_14(&VAR_5, VAR_15);

error_connection_destroy:
 FUNC_9(VAR_12);

error_free:
 FUNC_15(VAR_13);
 return VAR_14;
}
