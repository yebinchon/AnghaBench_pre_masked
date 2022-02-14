
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_descriptor_cport {scalar_t__ protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_lights {struct gb_connection* connection; int lights_lock; } ;
struct gb_connection {int dummy; } ;
struct gb_bundle {int num_cports; struct greybus_descriptor_cport* cport_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 struct gb_connection* FUNC_2 (struct gb_bundle*,int ,int ) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_connection*) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*,struct gb_lights*) ;
 int FUNC_8 (struct gb_lights*) ;
 int FUNC_9 (struct gb_lights*) ;
 int FUNC_10 (struct gb_lights*) ;
 int VAR_4 ;
 int FUNC_11 (struct gb_bundle*) ;
 int FUNC_12 (struct gb_bundle*,struct gb_lights*) ;
 struct gb_lights* FUNC_13 (int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct gb_bundle *VAR_5,
      const struct greybus_bundle_id *VAR_6)
{
 struct greybus_descriptor_cport *VAR_7;
 struct gb_connection *VAR_8;
 struct gb_lights *VAR_9;
 int VAR_10;

 if (VAR_5->num_cports != 1)
  return -VAR_0;

 VAR_7 = &VAR_5->cport_desc[0];
 if (VAR_7->protocol_id != VAR_3)
  return -VAR_0;

 VAR_9 = FUNC_13(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_15(&VAR_9->lights_lock);

 VAR_8 = FUNC_2(VAR_5, FUNC_14(VAR_7->id),
       VAR_4);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_9->connection = VAR_8;
 FUNC_7(VAR_8, VAR_9);

 FUNC_12(VAR_5, VAR_9);


 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10)
  goto error_connection_destroy;





 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10 < 0)
  goto error_connection_disable;


 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  goto error_connection_disable;


 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10 < 0)
  goto error_connection_disable;

 FUNC_11(VAR_5);

 return 0;

error_connection_disable:
 FUNC_4(VAR_8);
error_connection_destroy:
 FUNC_3(VAR_8);
out:
 FUNC_10(VAR_9);
 return VAR_10;
}
