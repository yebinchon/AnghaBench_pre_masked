
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_lights {int lights_count; int lights_lock; int * lights; struct gb_connection* connection; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gb_lights *VAR_0)
{
 struct gb_connection *VAR_1 = VAR_0->connection;
 int VAR_2 = 0;
 int VAR_3;

 FUNC_2(&VAR_0->lights_lock);
 for (VAR_3 = 0; VAR_3 < VAR_0->lights_count; VAR_3++) {
  VAR_2 = FUNC_1(&VAR_0->lights[VAR_3]);
  if (VAR_2 < 0) {
   FUNC_0(&VAR_1->bundle->dev,
    "Fail to enable lights device\n");
   break;
  }
 }

 FUNC_3(&VAR_0->lights_lock);
 return VAR_2;
}
