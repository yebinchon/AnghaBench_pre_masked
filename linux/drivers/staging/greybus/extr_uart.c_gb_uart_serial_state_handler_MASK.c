
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_uart_serial_state_request {int control; } ;
struct gb_tty {int ctrlin; TYPE_1__* gbphy_dev; } ;
struct gb_operation {struct gb_message* request; struct gb_connection* connection; } ;
struct gb_message {int payload_size; struct gb_uart_serial_state_request* payload; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct gb_tty* FUNC_1 (struct gb_connection*) ;

__attribute__((used)) static int FUNC_2(struct gb_operation *VAR_1)
{
 struct gb_connection *VAR_2 = VAR_1->connection;
 struct gb_tty *VAR_3 = FUNC_1(VAR_2);
 struct gb_message *VAR_4 = VAR_1->request;
 struct gb_uart_serial_state_request *VAR_5;

 if (VAR_4->payload_size < sizeof(*VAR_5)) {
  FUNC_0(&VAR_3->gbphy_dev->dev,
   "short serial-state event received (%zu < %zu)\n",
   VAR_4->payload_size, sizeof(*VAR_5));
  return -VAR_0;
 }

 VAR_5 = VAR_4->payload;
 VAR_3->ctrlin = VAR_5->control;

 return 0;
}
