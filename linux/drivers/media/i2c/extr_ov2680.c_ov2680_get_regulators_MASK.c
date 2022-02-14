
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ov2680_dev {TYPE_2__* supplies; TYPE_1__* i2c_client; } ;
struct TYPE_4__ {int supply; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,TYPE_2__*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ov2680_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->supplies[VAR_3].supply = VAR_1[VAR_3];

 return FUNC_0(&VAR_2->i2c_client->dev,
           VAR_0,
           VAR_2->supplies);
}
