
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u8 ;
struct w1_slave {TYPE_1__* master; } ;
typedef int int16_t ;
struct TYPE_2__ {int bus_mutex; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct w1_slave*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct w1_slave*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct w1_slave *VAR_6, int16_t *VAR_7)
{
 unsigned int VAR_8 = VAR_5;
 u8 VAR_9[VAR_1 + 1 ];
 unsigned int VAR_10 = VAR_0;
 unsigned long VAR_11;
 int VAR_12;

 FUNC_1(&VAR_6->master->bus_mutex);

 while (VAR_8--) {
  if (FUNC_5(VAR_6))
   continue;
  FUNC_6(VAR_6->master, VAR_4);

  FUNC_3(&VAR_6->master->bus_mutex);
  VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 != 0) {
   VAR_12 = -1;
   goto post_unlock;
  }

  if (FUNC_2(&VAR_6->master->bus_mutex) != 0) {
   VAR_12 = -1;
   goto post_unlock;
  }

  break;
 }

 if (FUNC_4(VAR_6, 0, VAR_9) == 0) {
  *VAR_7 = (((int16_t) VAR_9[VAR_3]) << 8) | ((uint16_t) VAR_9[VAR_2]);
  VAR_12 = 0;
 } else
  VAR_12 = -1;

 FUNC_3(&VAR_6->master->bus_mutex);

post_unlock:
 return VAR_12;
}
