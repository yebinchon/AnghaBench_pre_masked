
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
struct greybus_descriptor_cport {scalar_t__ protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_hid {struct gb_bundle* bundle; struct hid_device* hid; struct hid_device* connection; } ;
typedef struct hid_device gb_connection ;
struct gb_bundle {int num_cports; struct greybus_descriptor_cport* cport_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 struct hid_device* FUNC_2 (struct gb_bundle*,int ,int ) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*) ;
 int FUNC_6 (struct hid_device*,struct gb_hid*) ;
 int FUNC_7 (struct gb_hid*) ;
 int VAR_4 ;
 int FUNC_8 (struct gb_bundle*) ;
 int FUNC_9 (struct gb_bundle*,struct gb_hid*) ;
 int FUNC_10 (struct hid_device*) ;
 struct hid_device* FUNC_11 () ;
 int FUNC_12 (struct hid_device*) ;
 int FUNC_13 (struct hid_device*,char*,int) ;
 int FUNC_14 (struct gb_hid*) ;
 struct gb_hid* FUNC_15 (int,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct gb_bundle *VAR_5,
   const struct greybus_bundle_id *VAR_6)
{
 struct greybus_descriptor_cport *VAR_7;
 struct gb_connection *VAR_8;
 struct hid_device *VAR_9;
 struct gb_hid *VAR_10;
 int VAR_11;

 if (VAR_5->num_cports != 1)
  return -VAR_0;

 VAR_7 = &VAR_5->cport_desc[0];
 if (VAR_7->protocol_id != VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_15(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_5, FUNC_16(VAR_7->id),
       VAR_4);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto err_free_ghid;
 }

 FUNC_6(VAR_8, VAR_10);
 VAR_10->connection = VAR_8;

 VAR_9 = FUNC_11();
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto err_connection_destroy;
 }

 VAR_10->hid = VAR_9;
 VAR_10->bundle = VAR_5;

 FUNC_9(VAR_5, VAR_10);

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11)
  goto err_destroy_hid;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11)
  goto err_connection_disable;

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11) {
  FUNC_13(VAR_9, "can't add hid device: %d\n", VAR_11);
  goto err_connection_disable;
 }

 FUNC_8(VAR_5);

 return 0;

err_connection_disable:
 FUNC_4(VAR_8);
err_destroy_hid:
 FUNC_12(VAR_9);
err_connection_destroy:
 FUNC_3(VAR_8);
err_free_ghid:
 FUNC_14(VAR_10);

 return VAR_11;
}
