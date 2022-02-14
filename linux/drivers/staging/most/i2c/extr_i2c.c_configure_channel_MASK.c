
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct most_interface {int dummy; } ;
struct most_channel_config {scalar_t__ data_type; scalar_t__ direction; } ;
struct TYPE_6__ {int int_disabled; unsigned int delay; } ;
struct hdm_i2c {TYPE_3__ rx; TYPE_2__* client; TYPE_1__* capabilities; } ;
struct TYPE_5__ {int irq; int name; } ;
struct TYPE_4__ {scalar_t__ direction; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_6 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_7 ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*,unsigned int) ;
 int FUNC_5 (int ,int ,int ,int ,struct hdm_i2c*) ;
 struct hdm_i2c* FUNC_6 (struct most_interface*) ;

__attribute__((used)) static int FUNC_7(struct most_interface *VAR_8,
        int VAR_9,
        struct most_channel_config *VAR_10)
{
 int VAR_11;
 struct hdm_i2c *VAR_12 = FUNC_6(VAR_8);
 unsigned int VAR_13, VAR_14;

 FUNC_0(VAR_9 < 0 || VAR_9 >= VAR_5);

 if (VAR_10->data_type != VAR_2) {
  FUNC_3("bad data type for channel %d\n", VAR_9);
  return -VAR_1;
 }

 if (VAR_10->direction != VAR_12->capabilities[VAR_9].direction) {
  FUNC_3("bad direction for channel %d\n", VAR_9);
  return -VAR_1;
 }

 if (VAR_10->direction == VAR_3) {
  if (!VAR_7) {
   if (VAR_12->client->irq <= 0) {
    FUNC_3("bad irq: %d\n", VAR_12->client->irq);
    return -VAR_0;
   }
   VAR_12->rx.int_disabled = 0;
   VAR_11 = FUNC_5(VAR_12->client->irq, VAR_6, 0,
       VAR_12->client->name, VAR_12);
   if (VAR_11) {
    FUNC_3("request_irq(%d) failed: %d\n",
           VAR_12->client->irq, VAR_11);
    return VAR_11;
   }
  } else {
   VAR_13 = FUNC_2(VAR_4 / VAR_7);
   VAR_12->rx.delay = VAR_13 ? VAR_13 : 1;
   VAR_14 = VAR_4 / FUNC_1(VAR_12->rx.delay);
   FUNC_4("polling rate is %u Hz\n", VAR_14);
  }
 }

 return 0;
}
