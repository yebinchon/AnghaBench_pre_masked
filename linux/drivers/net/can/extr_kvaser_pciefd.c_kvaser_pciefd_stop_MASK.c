
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct kvaser_pciefd_can {int bec_poll_timer; scalar_t__ reg_base; TYPE_1__ can; int flush_comp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct kvaser_pciefd_can*) ;
 int FUNC_5 (int ,char*) ;
 struct kvaser_pciefd_can* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3)
{
 struct kvaser_pciefd_can *VAR_4 = FUNC_6(VAR_3);
 int VAR_5 = 0;


 if (!FUNC_1(&VAR_4->flush_comp))
  FUNC_4(VAR_4);

 if (!FUNC_7(&VAR_4->flush_comp,
      VAR_2)) {
  FUNC_5(VAR_4->can.dev, "Timeout during stop\n");
  VAR_5 = -VAR_0;
 } else {
  FUNC_3(0, VAR_4->reg_base + VAR_1);
  FUNC_2(&VAR_4->bec_poll_timer);
 }
 FUNC_0(VAR_3);

 return VAR_5;
}
