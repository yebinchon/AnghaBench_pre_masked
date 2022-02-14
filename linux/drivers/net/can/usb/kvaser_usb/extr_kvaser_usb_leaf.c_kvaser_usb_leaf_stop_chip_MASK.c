
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvaser_usb_net_priv {int stop_comp; int channel; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct kvaser_usb_net_priv *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->stop_comp);

 VAR_4 = FUNC_1(VAR_3->dev, VAR_0,
           VAR_3->channel);
 if (VAR_4)
  return VAR_4;

 if (!FUNC_3(&VAR_3->stop_comp,
      FUNC_2(VAR_2)))
  return -VAR_1;

 return 0;
}
