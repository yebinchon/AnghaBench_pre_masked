
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_slave {int dummy; } ;
struct sdw_driver {int (* shutdown ) (struct sdw_slave*) ;} ;
struct device {int driver; } ;


 struct sdw_slave* FUNC_0 (struct device*) ;
 struct sdw_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct sdw_slave*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct sdw_slave *VAR_1 = FUNC_0(VAR_0);
 struct sdw_driver *VAR_2 = FUNC_1(VAR_0->driver);

 if (VAR_2->shutdown)
  VAR_2->shutdown(VAR_1);
}
