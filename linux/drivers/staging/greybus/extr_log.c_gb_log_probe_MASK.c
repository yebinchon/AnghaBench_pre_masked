
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_descriptor_cport {scalar_t__ protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_log {struct gb_connection* connection; } ;
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
 int VAR_4 ;
 int FUNC_5 (struct gb_bundle*,struct gb_log*) ;
 int FUNC_6 (struct gb_log*) ;
 struct gb_log* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct gb_bundle *VAR_5,
   const struct greybus_bundle_id *VAR_6)
{
 struct greybus_descriptor_cport *VAR_7;
 struct gb_connection *VAR_8;
 struct gb_log *VAR_9;
 int VAR_10;

 if (VAR_5->num_cports != 1)
  return -VAR_0;

 VAR_7 = &VAR_5->cport_desc[0];
 if (VAR_7->protocol_id != VAR_3)
  return -VAR_0;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_5, FUNC_8(VAR_7->id),
       VAR_4);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto error_free;
 }

 VAR_9->connection = VAR_8;
 FUNC_5(VAR_5, VAR_9);

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10)
  goto error_connection_destroy;

 return 0;

error_connection_destroy:
 FUNC_3(VAR_8);
error_free:
 FUNC_6(VAR_9);
 return VAR_10;
}
