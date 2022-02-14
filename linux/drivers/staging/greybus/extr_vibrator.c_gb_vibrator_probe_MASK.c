
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_descriptor_cport {scalar_t__ protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_vibrator_device {int minor; int delayed_work; struct gb_connection* dev; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct gb_bundle {int num_cports; int dev; struct greybus_descriptor_cport* cport_desc; } ;
typedef struct gb_connection device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gb_connection*) ;
 struct gb_connection* FUNC_4 (int *,int *,int ,struct gb_vibrator_device*,char*,int) ;
 struct gb_connection* FUNC_5 (struct gb_bundle*,int ,int *) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_connection*) ;
 int FUNC_9 (struct gb_connection*,struct gb_vibrator_device*) ;
 int FUNC_10 (struct gb_bundle*) ;
 int VAR_5 ;
 int FUNC_11 (struct gb_bundle*,struct gb_vibrator_device*) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (struct gb_vibrator_device*) ;
 struct gb_vibrator_device* FUNC_15 (int,int ) ;
 int FUNC_16 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_17(struct gb_bundle *VAR_8,
        const struct greybus_bundle_id *VAR_9)
{
 struct greybus_descriptor_cport *VAR_10;
 struct gb_connection *VAR_11;
 struct gb_vibrator_device *VAR_12;
 struct device *VAR_13;
 int VAR_14;

 if (VAR_8->num_cports != 1)
  return -VAR_1;

 VAR_10 = &VAR_8->cport_desc[0];
 if (VAR_10->protocol_id != VAR_4)
  return -VAR_1;

 VAR_12 = FUNC_15(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_11 = FUNC_5(VAR_8, FUNC_16(VAR_10->id),
       ((void*)0));
 if (FUNC_1(VAR_11)) {
  VAR_14 = FUNC_3(VAR_11);
  goto err_free_vib;
 }
 FUNC_9(VAR_11, VAR_12);

 VAR_12->connection = VAR_11;

 FUNC_11(VAR_8, VAR_12);

 VAR_14 = FUNC_8(VAR_11);
 if (VAR_14)
  goto err_connection_destroy;






 VAR_12->minor = FUNC_12(&VAR_6, 0, 0, VAR_3);
 if (VAR_12->minor < 0) {
  VAR_14 = VAR_12->minor;
  goto err_connection_disable;
 }
 VAR_13 = FUNC_4(&VAR_7, &VAR_8->dev,
       FUNC_2(0, 0), VAR_12, "vibrator%d", VAR_12->minor);
 if (FUNC_1(VAR_13)) {
  VAR_14 = -VAR_0;
  goto err_ida_remove;
 }
 VAR_12->dev = VAR_13;

 FUNC_0(&VAR_12->delayed_work, VAR_5);

 FUNC_10(VAR_8);

 return 0;

err_ida_remove:
 FUNC_13(&VAR_6, VAR_12->minor);
err_connection_disable:
 FUNC_7(VAR_11);
err_connection_destroy:
 FUNC_6(VAR_11);
err_free_vib:
 FUNC_14(VAR_12);

 return VAR_14;
}
