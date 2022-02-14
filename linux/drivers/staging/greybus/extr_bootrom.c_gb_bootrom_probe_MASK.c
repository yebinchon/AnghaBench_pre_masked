
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct greybus_descriptor_cport {scalar_t__ protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct gb_bundle {int num_cports; int dev; struct greybus_descriptor_cport* cport_desc; } ;
struct gb_bootrom {int dwork; int mutex; struct gb_connection* connection; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_bootrom*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (struct gb_bootrom*) ;
 int FUNC_7 (struct gb_bootrom*) ;
 int VAR_7 ;
 int FUNC_8 (struct gb_bootrom*,int ,int ) ;
 int VAR_8 ;
 struct gb_connection* FUNC_9 (struct gb_bundle*,int ,int ) ;
 int FUNC_10 (struct gb_connection*) ;
 int FUNC_11 (struct gb_connection*) ;
 int FUNC_12 (struct gb_connection*) ;
 int FUNC_13 (struct gb_connection*) ;
 int FUNC_14 (struct gb_connection*,struct gb_bootrom*) ;
 int FUNC_15 (struct gb_connection*,int ,int *,int ,int *,int ) ;
 int FUNC_16 (struct gb_bundle*,struct gb_bootrom*) ;
 int FUNC_17 (struct gb_bootrom*) ;
 struct gb_bootrom* FUNC_18 (int,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct gb_bundle *VAR_9,
       const struct greybus_bundle_id *VAR_10)
{
 struct greybus_descriptor_cport *VAR_11;
 struct gb_connection *VAR_12;
 struct gb_bootrom *VAR_13;
 int VAR_14;

 if (VAR_9->num_cports != 1)
  return -VAR_0;

 VAR_11 = &VAR_9->cport_desc[0];
 if (VAR_11->protocol_id != VAR_4)
  return -VAR_0;

 VAR_13 = FUNC_18(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_9(VAR_9,
       FUNC_19(VAR_11->id),
       VAR_7);
 if (FUNC_1(VAR_12)) {
  VAR_14 = FUNC_2(VAR_12);
  goto err_free_bootrom;
 }

 FUNC_14(VAR_12, VAR_13);

 VAR_13->connection = VAR_12;

 FUNC_20(&VAR_13->mutex);
 FUNC_0(&VAR_13->dwork, VAR_8);
 FUNC_16(VAR_9, VAR_13);

 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14)
  goto err_connection_destroy;

 VAR_14 = FUNC_7(VAR_13);
 if (VAR_14)
  goto err_connection_disable;

 FUNC_3(VAR_13);

 VAR_14 = FUNC_12(VAR_12);
 if (VAR_14)
  goto err_connection_disable;


 FUNC_8(VAR_13, VAR_5,
          VAR_6);


 VAR_14 = FUNC_15(VAR_12, VAR_2, ((void*)0), 0,
    ((void*)0), 0);
 if (VAR_14) {
  FUNC_5(&VAR_12->bundle->dev,
   "failed to send AP READY: %d\n", VAR_14);
  goto err_cancel_timeout;
 }

 FUNC_4(&VAR_9->dev, "AP_READY sent\n");

 return 0;

err_cancel_timeout:
 FUNC_6(VAR_13);
err_connection_disable:
 FUNC_11(VAR_12);
err_connection_destroy:
 FUNC_10(VAR_12);
err_free_bootrom:
 FUNC_17(VAR_13);

 return VAR_14;
}
