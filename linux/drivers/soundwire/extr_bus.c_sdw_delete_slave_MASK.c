
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_slave {int node; scalar_t__ dev_num; struct sdw_bus* bus; } ;
struct sdw_bus {int bus_lock; int assigned; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 struct sdw_slave* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sdw_slave*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0, void *VAR_1)
{
 struct sdw_slave *VAR_2 = FUNC_1(VAR_0);
 struct sdw_bus *VAR_3 = VAR_2->bus;

 FUNC_6(VAR_2);

 FUNC_4(&VAR_3->bus_lock);

 if (VAR_2->dev_num)
  FUNC_0(VAR_2->dev_num, VAR_3->assigned);

 FUNC_3(&VAR_2->node);
 FUNC_5(&VAR_3->bus_lock);

 FUNC_2(VAR_0);
 return 0;
}
