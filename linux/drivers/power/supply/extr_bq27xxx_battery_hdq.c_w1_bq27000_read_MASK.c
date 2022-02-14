
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct w1_slave {TYPE_1__* master; } ;
struct TYPE_3__ {int bus_mutex; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct w1_slave *VAR_1, unsigned int VAR_2)
{
 u8 VAR_3;

 FUNC_0(&VAR_1->master->bus_mutex);
 FUNC_3(VAR_1->master, VAR_0 | VAR_2);
 VAR_3 = FUNC_2(VAR_1->master);
 FUNC_1(&VAR_1->master->bus_mutex);

 return VAR_3;
}
