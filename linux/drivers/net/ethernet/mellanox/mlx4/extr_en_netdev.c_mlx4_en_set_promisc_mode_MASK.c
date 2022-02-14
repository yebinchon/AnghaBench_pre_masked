
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mlx4_en_priv {int flags; int port; int base_qpn; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct TYPE_7__ {int steering_mode; } ;
struct TYPE_8__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_7 (struct mlx4_en_priv*) ;

__attribute__((used)) static void FUNC_8(struct mlx4_en_priv *VAR_4,
         struct mlx4_en_dev *VAR_5)
{
 int VAR_6 = 0;

 if (!(VAR_4->flags & VAR_1)) {
  if (FUNC_7(VAR_4))
   FUNC_1(VAR_4, "Entering promiscuous mode\n");
  VAR_4->flags |= VAR_1;


  switch (VAR_5->dev->caps.steering_mode) {
  case 128:
   VAR_6 = FUNC_4(VAR_5->dev,
         VAR_4->port,
         VAR_4->base_qpn,
         VAR_2);
   if (VAR_6)
    FUNC_0(VAR_4, "Failed enabling promiscuous mode\n");
   VAR_4->flags |= VAR_0;
   break;

  case 129:
   VAR_6 = FUNC_6(VAR_5->dev,
             VAR_4->base_qpn,
             VAR_4->port);
   if (VAR_6)
    FUNC_0(VAR_4, "Failed enabling unicast promiscuous mode\n");




   if (!(VAR_4->flags & VAR_0)) {
    VAR_6 = FUNC_5(VAR_5->dev,
         VAR_4->base_qpn,
         VAR_4->port);
    if (VAR_6)
     FUNC_0(VAR_4, "Failed enabling multicast promiscuous mode\n");
    VAR_4->flags |= VAR_0;
   }
   break;

  case 130:
   VAR_6 = FUNC_3(VAR_5->dev,
           VAR_4->port,
           VAR_4->base_qpn,
           1);
   if (VAR_6)
    FUNC_0(VAR_4, "Failed enabling promiscuous mode\n");
   break;
  }


  VAR_6 = FUNC_2(VAR_5->dev, VAR_4->port, 0,
       0, VAR_3);
  if (VAR_6)
   FUNC_0(VAR_4, "Failed disabling multicast filter\n");
 }
}
