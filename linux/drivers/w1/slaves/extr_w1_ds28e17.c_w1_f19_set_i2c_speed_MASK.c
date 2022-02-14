
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w1_slave {TYPE_1__* master; } ;
struct TYPE_2__ {int bus_mutex; } ;


 int FUNC_0 (struct w1_slave*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_0, u8 VAR_1)
{
 int VAR_2;


 FUNC_1(&VAR_0->master->bus_mutex);


 VAR_2 = FUNC_0(VAR_0, VAR_1);


 FUNC_2(&VAR_0->master->bus_mutex);

 return VAR_2;
}
