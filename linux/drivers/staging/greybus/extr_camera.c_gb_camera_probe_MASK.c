
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct greybus_descriptor_cport {int protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_connection {TYPE_1__* intf; } ;
struct TYPE_4__ {int release; int interface_id; int * ops; struct gb_camera* priv; } ;
struct gb_camera {struct gb_bundle* bundle; TYPE_2__ module; struct gb_connection* connection; scalar_t__ data_cport_id; int state; int mutex; } ;
struct gb_bundle {int num_cports; struct greybus_descriptor_cport* cport_desc; } ;
struct TYPE_3__ {int interface_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int VAR_4 ;
 int FUNC_2 (struct gb_camera*) ;
 int FUNC_3 (struct gb_camera*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct gb_connection* FUNC_5 (struct gb_bundle*,scalar_t__,int ) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*,struct gb_camera*) ;
 int FUNC_8 (struct gb_bundle*) ;
 int FUNC_9 (struct gb_bundle*,struct gb_camera*) ;
 int FUNC_10 (struct gb_camera*) ;
 struct gb_camera* FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct gb_bundle *VAR_7,
      const struct greybus_bundle_id *VAR_8)
{
 struct gb_connection *VAR_9;
 struct gb_camera *VAR_10;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 unsigned int VAR_13;
 int VAR_14;





 if (VAR_7->num_cports != 2)
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_7->num_cports; ++VAR_13) {
  struct greybus_descriptor_cport *VAR_15 = &VAR_7->cport_desc[VAR_13];

  switch (VAR_15->protocol_id) {
  case 128:
   VAR_11 = FUNC_12(VAR_15->id);
   break;
  case 129:
   VAR_12 = FUNC_12(VAR_15->id);
   break;
  default:
   return -VAR_0;
  }
 }

 if (!VAR_11 || !VAR_12)
  return -VAR_0;

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 FUNC_13(&VAR_10->mutex);

 VAR_10->bundle = VAR_7;
 VAR_10->state = VAR_2;
 VAR_10->data_cport_id = VAR_12;

 VAR_9 = FUNC_5(VAR_7, VAR_11,
        VAR_6);
 if (FUNC_0(VAR_9)) {
  VAR_14 = FUNC_1(VAR_9);
  goto error;
 }

 VAR_10->connection = VAR_9;
 FUNC_7(VAR_9, VAR_10);

 VAR_14 = FUNC_6(VAR_9);
 if (VAR_14)
  goto error;

 VAR_14 = FUNC_3(VAR_10);
 if (VAR_14 < 0)
  goto error;

 VAR_10->module.priv = VAR_10;
 VAR_10->module.ops = &VAR_4;
 VAR_10->module.interface_id = VAR_10->connection->intf->interface_id;
 VAR_10->module.release = VAR_5;
 VAR_14 = FUNC_4(&VAR_10->module);
 if (VAR_14 < 0)
  goto error;

 FUNC_9(VAR_7, VAR_10);

 FUNC_8(VAR_10->bundle);

 return 0;

error:
 FUNC_2(VAR_10);
 FUNC_10(VAR_10);
 return VAR_14;
}
