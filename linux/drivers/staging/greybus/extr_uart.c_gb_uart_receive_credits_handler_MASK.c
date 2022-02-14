
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_uart_receive_credits_request {int count; } ;
struct gb_tty {scalar_t__ credits; int credits_complete; int port; int tx_work; int close_pending; TYPE_1__* gbphy_dev; int write_lock; } ;
struct gb_operation {struct gb_message* request; struct gb_connection* connection; } ;
struct gb_message {int payload_size; struct gb_uart_receive_credits_request* payload; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 struct gb_tty* FUNC_2 (struct gb_connection*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct gb_operation *VAR_2)
{
 struct gb_connection *VAR_3 = VAR_2->connection;
 struct gb_tty *VAR_4 = FUNC_2(VAR_3);
 struct gb_message *VAR_5 = VAR_2->request;
 struct gb_uart_receive_credits_request *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;

 if (VAR_5->payload_size < sizeof(*VAR_6)) {
  FUNC_1(&VAR_4->gbphy_dev->dev,
   "short receive_credits event received (%zu < %zu)\n",
   VAR_5->payload_size,
   sizeof(*VAR_6));
  return -VAR_0;
 }

 VAR_6 = VAR_5->payload;
 VAR_8 = FUNC_3(VAR_6->count);

 FUNC_5(&VAR_4->write_lock, VAR_7);
 VAR_4->credits += VAR_8;
 if (VAR_4->credits > VAR_1) {
  VAR_4->credits -= VAR_8;
  VAR_9 = -VAR_0;
 }
 FUNC_6(&VAR_4->write_lock, VAR_7);

 if (VAR_9) {
  FUNC_1(&VAR_4->gbphy_dev->dev,
   "invalid number of incoming credits: %d\n",
   VAR_8);
  return VAR_9;
 }

 if (!VAR_4->close_pending)
  FUNC_4(&VAR_4->tx_work);




 FUNC_7(&VAR_4->port);

 if (VAR_4->credits == VAR_1)
  FUNC_0(&VAR_4->credits_complete);

 return VAR_9;
}
