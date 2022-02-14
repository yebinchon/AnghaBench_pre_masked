
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct w1_slave {int dev; TYPE_1__* master; } ;
struct TYPE_3__ {int bus_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned char FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct w1_slave*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_6(struct w1_slave *VAR_3, u8 VAR_4, unsigned char* VAR_5)
{
 u8 VAR_6[3];
 FUNC_0(&VAR_3->dev,
   "Reading with slave: %p, reg addr: %0#4x, buff addr: %p",
   VAR_3, (unsigned int)VAR_4, VAR_5);

 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_3->master->bus_mutex);
 FUNC_0(&VAR_3->dev, "mutex locked");

 if (FUNC_4(VAR_3)) {
  FUNC_2(&VAR_3->master->bus_mutex);
  return -VAR_1;
 }

 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_4;
 VAR_6[2] = 0;
 FUNC_5(VAR_3->master, VAR_6, 3);
 *VAR_5 = FUNC_3(VAR_3->master);

 FUNC_2(&VAR_3->master->bus_mutex);
 FUNC_0(&VAR_3->dev, "mutex unlocked");
 return 1;
}
