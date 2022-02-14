
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sdw_slave_id {int unique_id; int class_id; int part_id; int mfg_id; } ;
struct TYPE_4__ {int of_node; int * bus; int release; struct fwnode_handle* fwnode; int parent; } ;
struct sdw_slave {TYPE_1__ dev; int node; scalar_t__ dev_num; int status; struct sdw_bus* bus; int id; } ;
struct sdw_bus {int bus_lock; int dev; int slaves; int link_id; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 struct sdw_slave* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sdw_slave_id*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_11 (struct sdw_slave*) ;
 int VAR_4 ;
 int FUNC_12 (struct fwnode_handle*) ;

__attribute__((used)) static int FUNC_13(struct sdw_bus *VAR_5,
    struct sdw_slave_id *VAR_6, struct fwnode_handle *VAR_7)
{
 struct sdw_slave *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 FUNC_6(&VAR_8->id, VAR_6, sizeof(*VAR_6));
 VAR_8->dev.parent = VAR_5->dev;
 VAR_8->dev.fwnode = VAR_7;


 FUNC_1(&VAR_8->dev, "sdw:%x:%x:%x:%x:%x",
       VAR_5->link_id, VAR_6->mfg_id, VAR_6->part_id,
       VAR_6->class_id, VAR_6->unique_id);

 VAR_8->dev.release = VAR_4;
 VAR_8->dev.bus = &VAR_3;
 VAR_8->dev.of_node = FUNC_9(FUNC_12(VAR_7));
 VAR_8->bus = VAR_5;
 VAR_8->status = VAR_2;
 VAR_8->dev_num = 0;

 FUNC_7(&VAR_5->bus_lock);
 FUNC_4(&VAR_8->node, &VAR_5->slaves);
 FUNC_8(&VAR_5->bus_lock);

 VAR_9 = FUNC_2(&VAR_8->dev);
 if (VAR_9) {
  FUNC_0(VAR_5->dev, "Failed to add slave: ret %d\n", VAR_9);





  FUNC_7(&VAR_5->bus_lock);
  FUNC_5(&VAR_8->node);
  FUNC_8(&VAR_5->bus_lock);
  FUNC_10(&VAR_8->dev);
 }
 FUNC_11(VAR_8);

 return VAR_9;
}
