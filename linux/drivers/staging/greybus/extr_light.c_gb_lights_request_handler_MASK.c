
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct gb_operation {size_t type; struct gb_message* request; struct gb_connection* connection; } ;
struct gb_message {int payload_size; struct gb_lights_event_request* payload; } ;
struct gb_lights_event_request {size_t light_id; size_t event; } ;
struct gb_lights {size_t lights_count; int lights_lock; struct gb_light* lights; } ;
struct gb_light {int ready; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;
 struct gb_lights* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_lights*,size_t) ;
 int FUNC_3 (struct gb_light*) ;
 int FUNC_4 (struct gb_light*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct gb_operation *VAR_3)
{
 struct gb_connection *VAR_4 = VAR_3->connection;
 struct device *VAR_5 = &VAR_4->bundle->dev;
 struct gb_lights *VAR_6 = FUNC_1(VAR_4);
 struct gb_light *VAR_7;
 struct gb_message *VAR_8;
 struct gb_lights_event_request *VAR_9;
 int VAR_10 = 0;
 u8 VAR_11;
 u8 VAR_12;

 if (VAR_3->type != VAR_2) {
  FUNC_0(VAR_5, "Unsupported unsolicited event: %u\n", VAR_3->type);
  return -VAR_0;
 }

 VAR_8 = VAR_3->request;

 if (VAR_8->payload_size < sizeof(*VAR_9)) {
  FUNC_0(VAR_5, "Wrong event size received (%zu < %zu)\n",
   VAR_8->payload_size, sizeof(*VAR_9));
  return -VAR_0;
 }

 VAR_9 = VAR_8->payload;
 VAR_11 = VAR_9->light_id;

 if (VAR_11 >= VAR_6->lights_count ||
     !VAR_6->lights[VAR_11].ready) {
  FUNC_0(VAR_5, "Event received for unconfigured light id: %d\n",
   VAR_11);
  return -VAR_0;
 }

 VAR_12 = VAR_9->event;

 if (VAR_12 & VAR_1) {
  VAR_7 = &VAR_6->lights[VAR_11];

  FUNC_5(&VAR_6->lights_lock);
  FUNC_4(VAR_7);
  VAR_10 = FUNC_2(VAR_6, VAR_11);
  if (!VAR_10)
   VAR_10 = FUNC_3(VAR_7);
  if (VAR_10 < 0)
   FUNC_4(VAR_7);
  FUNC_6(&VAR_6->lights_lock);
 }

 return VAR_10;
}
