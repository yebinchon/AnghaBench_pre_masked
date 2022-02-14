
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gb_raw_send_request {int data; int len; } ;
struct gb_raw {int dummy; } ;
struct gb_operation {TYPE_1__* request; int type; struct gb_connection* connection; } ;
struct gb_connection {TYPE_2__* bundle; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int payload_size; struct gb_raw_send_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct gb_raw* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gb_raw*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct gb_operation *VAR_2)
{
 struct gb_connection *VAR_3 = VAR_2->connection;
 struct device *VAR_4 = &VAR_3->bundle->dev;
 struct gb_raw *VAR_5 = FUNC_1(VAR_3->bundle);
 struct gb_raw_send_request *VAR_6;
 u32 VAR_7;

 if (VAR_2->type != VAR_1) {
  FUNC_0(VAR_4, "unknown request type 0x%02x\n", VAR_2->type);
  return -VAR_0;
 }


 if (VAR_2->request->payload_size < sizeof(*VAR_6)) {
  FUNC_0(VAR_4, "raw receive request too small (%zu < %zu)\n",
   VAR_2->request->payload_size, sizeof(*VAR_6));
  return -VAR_0;
 }
 VAR_6 = VAR_2->request->payload;
 VAR_7 = FUNC_2(VAR_6->len);
 if (VAR_7 != (int)(VAR_2->request->payload_size - sizeof(__le32))) {
  FUNC_0(VAR_4, "raw receive request wrong size %d vs %d\n", VAR_7,
   (int)(VAR_2->request->payload_size - sizeof(__le32)));
  return -VAR_0;
 }
 if (VAR_7 == 0) {
  FUNC_0(VAR_4, "raw receive request of 0 bytes?\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_5, VAR_7, VAR_6->data);
}
