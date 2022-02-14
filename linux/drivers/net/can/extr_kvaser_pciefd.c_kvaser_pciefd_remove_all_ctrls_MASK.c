
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct kvaser_pciefd_can {TYPE_1__ can; int bec_poll_timer; scalar_t__ reg_base; } ;
struct kvaser_pciefd {int nr_channels; struct kvaser_pciefd_can** can; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct kvaser_pciefd_can*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct kvaser_pciefd *VAR_1)
{
 struct kvaser_pciefd_can *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_channels; VAR_3++) {
  VAR_2 = VAR_1->can[VAR_3];
  if (VAR_2) {
   FUNC_2(0,
      VAR_2->reg_base + VAR_0);
   FUNC_4(VAR_2->can.dev);
   FUNC_0(&VAR_2->bec_poll_timer);
   FUNC_3(VAR_2);
   FUNC_1(VAR_2->can.dev);
  }
 }
}
