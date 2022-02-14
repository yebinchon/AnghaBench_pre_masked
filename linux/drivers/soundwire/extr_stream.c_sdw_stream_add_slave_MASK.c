
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_stream_runtime {int state; int name; } ;
struct sdw_stream_config {int dummy; } ;
struct sdw_slave_runtime {int m_rt_node; } ;
struct sdw_slave {TYPE_1__* bus; int dev; } ;
struct sdw_port_config {int dummy; } ;
struct sdw_master_runtime {int slave_rt_list; } ;
struct TYPE_2__ {int bus_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sdw_master_runtime* FUNC_4 (TYPE_1__*,struct sdw_stream_config*,struct sdw_stream_runtime*) ;
 struct sdw_slave_runtime* FUNC_5 (struct sdw_slave*,struct sdw_stream_config*,struct sdw_stream_runtime*) ;
 int FUNC_6 (int *,struct sdw_stream_runtime*,struct sdw_stream_config*,int) ;
 int FUNC_7 (struct sdw_master_runtime*,struct sdw_stream_runtime*) ;
 int FUNC_8 (struct sdw_slave*,struct sdw_slave_runtime*,struct sdw_port_config*,unsigned int) ;

int FUNC_9(struct sdw_slave *VAR_2,
    struct sdw_stream_config *VAR_3,
    struct sdw_port_config *VAR_4,
    unsigned int VAR_5,
    struct sdw_stream_runtime *VAR_6)
{
 struct sdw_slave_runtime *VAR_7;
 struct sdw_master_runtime *VAR_8;
 int VAR_9;

 FUNC_2(&VAR_2->bus->bus_lock);





 VAR_8 = FUNC_4(VAR_2->bus, VAR_3, VAR_6);
 if (!VAR_8) {
  FUNC_0(&VAR_2->dev,
   "alloc master runtime failed for stream:%s\n",
   VAR_6->name);
  VAR_9 = -VAR_0;
  goto error;
 }

 VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_6);
 if (!VAR_7) {
  FUNC_0(&VAR_2->dev,
   "Slave runtime config failed for stream:%s\n",
   VAR_6->name);
  VAR_9 = -VAR_0;
  goto stream_error;
 }

 VAR_9 = FUNC_6(&VAR_2->dev, VAR_6, VAR_3, 1);
 if (VAR_9)
  goto stream_error;

 FUNC_1(&VAR_7->m_rt_node, &VAR_8->slave_rt_list);

 VAR_9 = FUNC_8(VAR_2, VAR_7, VAR_4, VAR_5);
 if (VAR_9)
  goto stream_error;







 VAR_6->state = VAR_1;
 goto error;

stream_error:




 FUNC_7(VAR_8, VAR_6);
error:
 FUNC_3(&VAR_2->bus->bus_lock);
 return VAR_9;
}
