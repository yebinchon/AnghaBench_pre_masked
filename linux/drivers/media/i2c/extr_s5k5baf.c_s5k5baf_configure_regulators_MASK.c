
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5k5baf {TYPE_1__* supplies; int sd; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int supply; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_1 (struct i2c_client*,char*) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct s5k5baf *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_2->sd);
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2->supplies[VAR_5].supply = VAR_1[VAR_5];

 VAR_4 = FUNC_0(&VAR_3->dev, VAR_0,
          VAR_2->supplies);
 if (VAR_4 < 0)
  FUNC_1(VAR_3, "failed to get regulators\n");
 return VAR_4;
}
