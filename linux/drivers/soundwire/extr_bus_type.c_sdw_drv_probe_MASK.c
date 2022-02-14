
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int clk_stop_timeout; } ;
struct sdw_slave {TYPE_3__ prop; TYPE_2__* bus; TYPE_1__* ops; } ;
struct sdw_driver {int (* probe ) (struct sdw_slave*,struct sdw_device_id const*) ;int name; TYPE_1__* ops; } ;
struct sdw_device_id {int dummy; } ;
struct device {int driver; } ;
struct TYPE_5__ {int clk_stop_timeout; } ;
struct TYPE_4__ {int (* read_prop ) (struct sdw_slave*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,int) ;
 struct sdw_slave* FUNC_3 (struct device*) ;
 struct sdw_driver* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 struct sdw_device_id* FUNC_6 (struct sdw_slave*,struct sdw_driver*) ;
 int FUNC_7 (struct sdw_slave*,struct sdw_device_id const*) ;
 int FUNC_8 (struct sdw_slave*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2)
{
 struct sdw_slave *VAR_3 = FUNC_3(VAR_2);
 struct sdw_driver *VAR_4 = FUNC_4(VAR_2->driver);
 const struct sdw_device_id *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_3->ops = VAR_4->ops;




 VAR_6 = FUNC_1(VAR_2, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_4->probe(VAR_3, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_2, "Probe of %s failed: %d\n", VAR_4->name, VAR_6);
  FUNC_2(VAR_2, 0);
  return VAR_6;
 }


 if (VAR_3->ops && VAR_3->ops->read_prop)
  VAR_3->ops->read_prop(VAR_3);







 if (VAR_3->prop.clk_stop_timeout == 0)
  VAR_3->prop.clk_stop_timeout = 300;

 VAR_3->bus->clk_stop_timeout = FUNC_5(VAR_1, VAR_3->bus->clk_stop_timeout,
          VAR_3->prop.clk_stop_timeout);

 return 0;
}
