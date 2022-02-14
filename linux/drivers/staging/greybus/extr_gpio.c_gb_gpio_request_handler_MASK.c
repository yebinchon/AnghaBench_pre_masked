
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct irq_desc {int dummy; } ;
struct gb_operation {scalar_t__ type; struct gb_message* request; struct gb_connection* connection; } ;
struct gb_message {int payload_size; struct gb_gpio_irq_event_request* payload; } ;
struct gb_gpio_irq_event_request {int which; } ;
struct TYPE_5__ {int domain; } ;
struct TYPE_6__ {TYPE_2__ irq; } ;
struct gb_gpio_controller {TYPE_3__ chip; int line_max; TYPE_1__* gbphy_dev; } ;
struct gb_connection {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct gb_gpio_controller* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int ,int ) ;
 struct irq_desc* FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct gb_operation *VAR_2)
{
 struct gb_connection *VAR_3 = VAR_2->connection;
 struct gb_gpio_controller *VAR_4 = FUNC_1(VAR_3);
 struct device *VAR_5 = &VAR_4->gbphy_dev->dev;
 struct gb_message *VAR_6;
 struct gb_gpio_irq_event_request *VAR_7;
 u8 VAR_8 = VAR_2->type;
 int VAR_9;
 struct irq_desc *VAR_10;

 if (VAR_8 != VAR_1) {
  FUNC_0(VAR_5, "unsupported unsolicited request: %u\n", VAR_8);
  return -VAR_0;
 }

 VAR_6 = VAR_2->request;

 if (VAR_6->payload_size < sizeof(*VAR_7)) {
  FUNC_0(VAR_5, "short event received (%zu < %zu)\n",
   VAR_6->payload_size, sizeof(*VAR_7));
  return -VAR_0;
 }

 VAR_7 = VAR_6->payload;
 if (VAR_7->which > VAR_4->line_max) {
  FUNC_0(VAR_5, "invalid hw irq: %d\n", VAR_7->which);
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_4->chip.irq.domain, VAR_7->which);
 if (!VAR_9) {
  FUNC_0(VAR_5, "failed to find IRQ\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_4(VAR_9);
 if (!VAR_10) {
  FUNC_0(VAR_5, "failed to look up irq\n");
  return -VAR_0;
 }

 FUNC_5();
 FUNC_2(VAR_10);
 FUNC_6();

 return 0;
}
