
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gb_operation {int type; TYPE_3__* response; TYPE_2__* request; struct gb_connection* connection; } ;
struct gb_loopback_transfer_response {int data; int len; } ;
struct gb_loopback_transfer_request {int data; int len; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct device {int dummy; } ;
struct TYPE_8__ {size_t size_max; } ;
struct TYPE_7__ {struct gb_loopback_transfer_response* payload; } ;
struct TYPE_6__ {int payload_size; struct gb_loopback_transfer_request* payload; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct device*,char*,...) ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (struct gb_operation*,size_t,int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,size_t) ;

__attribute__((used)) static int FUNC_5(struct gb_operation *VAR_4)
{
 struct gb_connection *VAR_5 = VAR_4->connection;
 struct gb_loopback_transfer_request *VAR_6;
 struct gb_loopback_transfer_response *VAR_7;
 struct device *VAR_8 = &VAR_5->bundle->dev;
 size_t VAR_9;


 switch (VAR_4->type) {
 case 130:
 case 129:
  return 0;
 case 128:
  if (VAR_4->request->payload_size < sizeof(*VAR_6)) {
   FUNC_1(VAR_8, "transfer request too small (%zu < %zu)\n",
    VAR_4->request->payload_size,
    sizeof(*VAR_6));
   return -VAR_0;
  }
  VAR_6 = VAR_4->request->payload;
  VAR_9 = FUNC_3(VAR_6->len);
  if (VAR_9 > VAR_3.size_max) {
   FUNC_1(VAR_8, "transfer request too large (%zu > %zu)\n",
    VAR_9, VAR_3.size_max);
   return -VAR_0;
  }

  if (!FUNC_2(VAR_4,
    VAR_9 + sizeof(*VAR_7), VAR_2)) {
   FUNC_1(VAR_8, "error allocating response\n");
   return -VAR_1;
  }
  VAR_7 = VAR_4->response->payload;
  VAR_7->len = FUNC_0(VAR_9);
  if (VAR_9)
   FUNC_4(VAR_7->data, VAR_6->data, VAR_9);

  return 0;
 default:
  FUNC_1(VAR_8, "unsupported request: %u\n", VAR_4->type);
  return -VAR_0;
 }
}
