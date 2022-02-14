
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tty_port {int dummy; } ;
struct gb_uart_recv_data_request {int flags; int data; int size; } ;
struct gb_tty {TYPE_1__* gbphy_dev; struct tty_port port; } ;
struct gb_operation {struct gb_message* request; struct gb_connection* connection; } ;
struct gb_message {int payload_size; struct gb_uart_recv_data_request* payload; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct gb_tty* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,int ,int ) ;
 int FUNC_5 (struct tty_port*,int ,unsigned long,int) ;

__attribute__((used)) static int FUNC_6(struct gb_operation *VAR_10)
{
 struct gb_connection *VAR_11 = VAR_10->connection;
 struct gb_tty *VAR_12 = FUNC_1(VAR_11);
 struct tty_port *VAR_13 = &VAR_12->port;
 struct gb_message *VAR_14 = VAR_10->request;
 struct gb_uart_recv_data_request *VAR_15;
 u16 VAR_16;
 int VAR_17;
 unsigned long VAR_18 = VAR_7;

 if (VAR_14->payload_size < sizeof(*VAR_15)) {
  FUNC_0(&VAR_12->gbphy_dev->dev,
   "short receive-data request received (%zu < %zu)\n",
   VAR_14->payload_size, sizeof(*VAR_15));
  return -VAR_0;
 }

 VAR_15 = VAR_10->request->payload;
 VAR_16 = FUNC_2(VAR_15->size);

 if (VAR_16 != VAR_14->payload_size - sizeof(*VAR_15)) {
  FUNC_0(&VAR_12->gbphy_dev->dev,
   "malformed receive-data request received (%u != %zu)\n",
   VAR_16,
   VAR_14->payload_size - sizeof(*VAR_15));
  return -VAR_0;
 }

 if (!VAR_16)
  return -VAR_0;

 if (VAR_15->flags) {
  if (VAR_15->flags & VAR_1)
   VAR_18 = VAR_5;
  else if (VAR_15->flags & VAR_4)
   VAR_18 = VAR_9;
  else if (VAR_15->flags & VAR_2)
   VAR_18 = VAR_6;


  if (VAR_15->flags & VAR_3)
   FUNC_4(VAR_13, 0, VAR_8);
 }
 VAR_17 = FUNC_5(VAR_13, VAR_15->data,
        VAR_18, VAR_16);
 if (VAR_17 != VAR_16) {
  FUNC_0(&VAR_12->gbphy_dev->dev,
   "UART: RX 0x%08x bytes only wrote 0x%08x\n",
   VAR_16, VAR_17);
 }
 if (VAR_17)
  FUNC_3(VAR_13);
 return 0;
}
