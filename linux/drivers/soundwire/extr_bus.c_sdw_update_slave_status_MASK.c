
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_slave {TYPE_1__* ops; } ;
typedef enum sdw_slave_status { ____Placeholder_sdw_slave_status } sdw_slave_status ;
struct TYPE_2__ {int (* update_status ) (struct sdw_slave*,int) ;} ;


 int FUNC_0 (struct sdw_slave*,int) ;

__attribute__((used)) static int FUNC_1(struct sdw_slave *VAR_0,
       enum sdw_slave_status VAR_1)
{
 if (VAR_0->ops && VAR_0->ops->update_status)
  return VAR_0->ops->update_status(VAR_0, VAR_1);

 return 0;
}
