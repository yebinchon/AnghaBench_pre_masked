
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct w1_slave {TYPE_1__* master; } ;
typedef int int16_t ;
struct TYPE_2__ {int bus_mutex; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct w1_slave*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_3, int16_t *VAR_4)
{
 u8 VAR_5[VAR_2 + 1 ];
 int VAR_6;

 FUNC_0(&VAR_3->master->bus_mutex);

 if (FUNC_2(VAR_3, 0, VAR_5) == 0) {

  *VAR_4 = (((int16_t) VAR_5[VAR_1]) << 8) | ((int16_t) VAR_5[VAR_0]);
  VAR_6 = 0;
 } else
  VAR_6 = -1;

 FUNC_1(&VAR_3->master->bus_mutex);

 return VAR_6;
}
