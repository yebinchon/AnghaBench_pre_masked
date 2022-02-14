
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct gb_power_supply_event_request {size_t psy_id; size_t event; } ;
struct gb_power_supply {int cache_invalid; int update_interval; int registered; } ;
struct gb_power_supplies {size_t supplies_count; int supplies_lock; struct gb_power_supply* supply; } ;
struct gb_operation {size_t type; struct gb_message* request; struct gb_connection* connection; } ;
struct gb_message {int payload_size; struct gb_power_supply_event_request* payload; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char*,size_t,...) ;
 struct gb_power_supplies* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_power_supply*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gb_operation *VAR_4)
{
 struct gb_connection *VAR_5 = VAR_4->connection;
 struct gb_power_supplies *VAR_6 = FUNC_1(VAR_5);
 struct gb_power_supply *VAR_7;
 struct gb_message *VAR_8;
 struct gb_power_supply_event_request *VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 int VAR_12 = 0;

 if (VAR_4->type != VAR_2) {
  FUNC_0(&VAR_5->bundle->dev,
   "Unsupported unsolicited event: %u\n", VAR_4->type);
  return -VAR_0;
 }

 VAR_8 = VAR_4->request;

 if (VAR_8->payload_size < sizeof(*VAR_9)) {
  FUNC_0(&VAR_5->bundle->dev,
   "Wrong event size received (%zu < %zu)\n",
   VAR_8->payload_size, sizeof(*VAR_9));
  return -VAR_0;
 }

 VAR_9 = VAR_8->payload;
 VAR_10 = VAR_9->psy_id;
 FUNC_3(&VAR_6->supplies_lock);
 if (VAR_10 >= VAR_6->supplies_count ||
     !VAR_6->supply[VAR_10].registered) {
  FUNC_0(&VAR_5->bundle->dev,
   "Event received for unconfigured power_supply id: %d\n",
   VAR_10);
  VAR_12 = -VAR_0;
  goto out_unlock;
 }

 VAR_11 = VAR_9->event;




 VAR_7 = &VAR_6->supply[VAR_10];
 if (!VAR_7->update_interval) {
  VAR_12 = -VAR_1;
  goto out_unlock;
 }

 if (VAR_11 & VAR_3) {





  VAR_7->cache_invalid = 1;
  FUNC_2(VAR_7);
 }

out_unlock:
 FUNC_4(&VAR_6->supplies_lock);
 return VAR_12;
}
