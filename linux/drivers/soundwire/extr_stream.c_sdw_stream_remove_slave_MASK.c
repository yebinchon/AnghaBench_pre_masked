
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_stream_runtime {int dummy; } ;
struct sdw_slave {TYPE_1__* bus; } ;
struct TYPE_2__ {int bus_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sdw_slave*,struct sdw_stream_runtime*) ;
 int FUNC_3 (TYPE_1__*,struct sdw_slave*,struct sdw_stream_runtime*) ;

int FUNC_4(struct sdw_slave *VAR_0,
       struct sdw_stream_runtime *VAR_1)
{
 FUNC_0(&VAR_0->bus->bus_lock);

 FUNC_3(VAR_0->bus, VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);

 FUNC_1(&VAR_0->bus->bus_lock);

 return 0;
}
