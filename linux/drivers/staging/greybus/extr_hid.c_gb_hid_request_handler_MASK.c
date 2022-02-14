
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_operation {scalar_t__ type; TYPE_1__* request; struct gb_connection* connection; } ;
struct gb_hid_input_report_request {int report; } ;
struct gb_hid {int hid; int flags; } ;
struct gb_connection {TYPE_2__* bundle; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int payload_size; struct gb_hid_input_report_request* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct gb_hid* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct gb_operation *VAR_4)
{
 struct gb_connection *VAR_5 = VAR_4->connection;
 struct gb_hid *VAR_6 = FUNC_1(VAR_5);
 struct gb_hid_input_report_request *VAR_7 = VAR_4->request->payload;

 if (VAR_4->type != VAR_2) {
  FUNC_0(&VAR_5->bundle->dev,
   "unsupported unsolicited request\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_1, &VAR_6->flags))
  FUNC_2(VAR_6->hid, VAR_3,
     VAR_7->report, VAR_4->request->payload_size, 1);

 return 0;
}
