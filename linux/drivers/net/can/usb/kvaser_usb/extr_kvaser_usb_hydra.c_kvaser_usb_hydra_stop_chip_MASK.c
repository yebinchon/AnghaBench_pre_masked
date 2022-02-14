
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct kvaser_usb_net_priv {int stop_comp; int channel; int dev; TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct kvaser_usb_net_priv *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->stop_comp);




 VAR_4->can.state = VAR_0;

 VAR_5 = FUNC_1(VAR_4->dev, VAR_1,
            VAR_4->channel);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_3(&VAR_4->stop_comp,
      FUNC_2(VAR_3)))
  return -VAR_2;

 return 0;
}
