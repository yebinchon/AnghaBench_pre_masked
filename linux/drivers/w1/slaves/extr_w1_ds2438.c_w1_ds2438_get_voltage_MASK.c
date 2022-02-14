
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u8 ;
struct w1_slave {TYPE_1__* master; } ;
struct TYPE_2__ {int bus_mutex; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct w1_slave*,int ,int) ;
 scalar_t__ FUNC_5 (struct w1_slave*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct w1_slave*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct w1_slave *VAR_7,
     int VAR_8, uint16_t *VAR_9)
{
 unsigned int VAR_10 = VAR_6;
 u8 VAR_11[VAR_1 + 1 ];
 unsigned int VAR_12 = VAR_0;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_1(&VAR_7->master->bus_mutex);

 if (FUNC_4(VAR_7, VAR_2, VAR_8)) {
  VAR_14 = -1;
  goto pre_unlock;
 }

 while (VAR_10--) {
  if (FUNC_6(VAR_7))
   continue;
  FUNC_7(VAR_7->master, VAR_5);

  FUNC_3(&VAR_7->master->bus_mutex);
  VAR_13 = FUNC_0(VAR_12);
  if (VAR_13 != 0) {
   VAR_14 = -1;
   goto post_unlock;
  }

  if (FUNC_2(&VAR_7->master->bus_mutex) != 0) {
   VAR_14 = -1;
   goto post_unlock;
  }

  break;
 }

 if (FUNC_5(VAR_7, 0, VAR_11) == 0) {
  *VAR_9 = (((uint16_t) VAR_11[VAR_4]) << 8) | ((uint16_t) VAR_11[VAR_3]);
  VAR_14 = 0;
 } else
  VAR_14 = -1;

pre_unlock:
 FUNC_3(&VAR_7->master->bus_mutex);

post_unlock:
 return VAR_14;
}
