
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_pciefd {int nr_channels; TYPE_2__** can; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ can; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvaser_pciefd *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_channels; VAR_1++) {
  int VAR_2 = FUNC_0(VAR_0->can[VAR_1]->can.dev);

  if (VAR_2) {
   int VAR_3;


   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    FUNC_1(VAR_0->can[VAR_3]->can.dev);
   return VAR_2;
  }
 }

 return 0;
}
