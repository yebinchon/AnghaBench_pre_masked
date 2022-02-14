
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct gb_operation {int type; TYPE_2__* request; struct gb_connection* connection; } ;
struct gb_log_send_log_request {char* msg; int len; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int payload_size; struct gb_log_send_log_request* payload; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gb_operation *VAR_3)
{
 struct gb_connection *VAR_4 = VAR_3->connection;
 struct device *VAR_5 = &VAR_4->bundle->dev;
 struct gb_log_send_log_request *VAR_6;
 u16 VAR_7;

 if (VAR_3->type != VAR_2) {
  FUNC_1(VAR_5, "unknown request type 0x%02x\n", VAR_3->type);
  return -VAR_0;
 }


 if (VAR_3->request->payload_size < sizeof(*VAR_6)) {
  FUNC_1(VAR_5, "log request too small (%zu < %zu)\n",
   VAR_3->request->payload_size, sizeof(*VAR_6));
  return -VAR_0;
 }
 VAR_6 = VAR_3->request->payload;
 VAR_7 = FUNC_2(VAR_6->len);
 if (VAR_7 != (VAR_3->request->payload_size - sizeof(*VAR_6))) {
  FUNC_1(VAR_5, "log request wrong size %d vs %zu\n", VAR_7,
   (VAR_3->request->payload_size - sizeof(*VAR_6)));
  return -VAR_0;
 }
 if (VAR_7 == 0) {
  FUNC_1(VAR_5, "log request of 0 bytes?\n");
  return -VAR_0;
 }

 if (VAR_7 > VAR_1) {
  FUNC_1(VAR_5, "log request too big: %d\n", VAR_7);
  return -VAR_0;
 }


 VAR_6->msg[VAR_7 - 1] = '\0';





 FUNC_0(VAR_5, "%s", VAR_6->msg);

 return 0;
}
