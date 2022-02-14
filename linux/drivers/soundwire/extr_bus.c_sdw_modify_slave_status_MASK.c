
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_slave {int status; TYPE_1__* bus; } ;
typedef enum sdw_slave_status { ____Placeholder_sdw_slave_status } sdw_slave_status ;
struct TYPE_2__ {int bus_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sdw_slave *VAR_0,
        enum sdw_slave_status VAR_1)
{
 FUNC_0(&VAR_0->bus->bus_lock);
 VAR_0->status = VAR_1;
 FUNC_1(&VAR_0->bus->bus_lock);
}
