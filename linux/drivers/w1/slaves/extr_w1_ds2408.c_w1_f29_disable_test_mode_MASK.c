
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct w1_slave {TYPE_1__* master; int reg_num; } ;
struct TYPE_3__ {int bus_mutex; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int*,int ) ;

__attribute__((used)) static int FUNC_7(struct w1_slave *VAR_0)
{
 int VAR_1;
 u8 VAR_2[10] = {0x96, };
 u64 VAR_3 = FUNC_1(*((u64*)&VAR_0->reg_num));

 FUNC_2(&VAR_2[1], &VAR_3, 8);
 VAR_2[9] = 0x3C;

 FUNC_3(&VAR_0->master->bus_mutex);

 VAR_1 = FUNC_5(VAR_0->master);
 if (VAR_1)
  goto out;
 FUNC_6(VAR_0->master, VAR_2, FUNC_0(VAR_2));

 VAR_1 = FUNC_5(VAR_0->master);
out:
 FUNC_4(&VAR_0->master->bus_mutex);
 return VAR_1;
}
