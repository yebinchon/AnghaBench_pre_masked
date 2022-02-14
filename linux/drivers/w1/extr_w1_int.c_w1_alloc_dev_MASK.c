
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int init_name; } ;
struct w1_master {int max_slave_count; int id; int slave_ttl; int seq; TYPE_1__ dev; struct device_driver* driver; int name; int list_mutex; int bus_mutex; int mutex; int async_list; int slist; int refcnt; int enable_pullup; int search_count; scalar_t__ initialized; scalar_t__ attempts; scalar_t__ slave_count; int owner; struct w1_bus_master* bus_master; } ;
struct w1_bus_master {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 struct w1_master* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,struct device*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct w1_master *FUNC_10(u32 VAR_4, int VAR_5, int VAR_6,
           struct device_driver *VAR_7,
           struct device *VAR_8)
{
 struct w1_master *VAR_9;
 int VAR_10;




 VAR_9 = FUNC_4(sizeof(struct w1_master) + sizeof(struct w1_bus_master), VAR_0);
 if (!VAR_9) {
  FUNC_7("Failed to allocate %zd bytes for new w1 device.\n",
   sizeof(struct w1_master));
  return ((void*)0);
 }


 VAR_9->bus_master = (struct w1_bus_master *)(VAR_9 + 1);

 VAR_9->owner = VAR_1;
 VAR_9->max_slave_count = VAR_5;
 VAR_9->slave_count = 0;
 VAR_9->attempts = 0;
 VAR_9->initialized = 0;
 VAR_9->id = VAR_4;
 VAR_9->slave_ttl = VAR_6;
 VAR_9->search_count = VAR_3;
 VAR_9->enable_pullup = VAR_2;




 FUNC_1(&VAR_9->refcnt, 2);

 FUNC_0(&VAR_9->slist);
 FUNC_0(&VAR_9->async_list);
 FUNC_6(&VAR_9->mutex);
 FUNC_6(&VAR_9->bus_mutex);
 FUNC_6(&VAR_9->list_mutex);

 FUNC_5(&VAR_9->dev, VAR_8, sizeof(struct device));
 FUNC_2(&VAR_9->dev, "w1_bus_master%u", VAR_9->id);
 FUNC_9(VAR_9->name, sizeof(VAR_9->name), "w1_bus_master%u", VAR_9->id);
 VAR_9->dev.init_name = VAR_9->name;

 VAR_9->driver = VAR_7;

 VAR_9->seq = 1;

 VAR_10 = FUNC_3(&VAR_9->dev);
 if (VAR_10) {
  FUNC_7("Failed to register master device. err=%d\n", VAR_10);
  FUNC_8(&VAR_9->dev);
  VAR_9 = ((void*)0);
 }

 return VAR_9;
}
