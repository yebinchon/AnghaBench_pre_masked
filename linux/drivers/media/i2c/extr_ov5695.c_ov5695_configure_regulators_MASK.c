
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ov5695 {TYPE_2__* supplies; TYPE_1__* client; } ;
struct TYPE_4__ {int supply; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,TYPE_2__*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ov5695 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->supplies[VAR_3].supply = VAR_1[VAR_3];

 return FUNC_0(&VAR_2->client->dev,
           VAR_0,
           VAR_2->supplies);
}
