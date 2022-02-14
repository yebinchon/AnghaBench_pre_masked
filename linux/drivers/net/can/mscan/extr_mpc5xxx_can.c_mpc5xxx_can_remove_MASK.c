
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct of_device_id {struct mpc5xxx_can_data* data; } ;
struct net_device {int irq; } ;
struct mscan_priv {int reg_base; } ;
struct mpc5xxx_can_data {int (* put_clock ) (struct platform_device*) ;} ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct mscan_priv* FUNC_3 (struct net_device*) ;
 struct of_device_id* FUNC_4 (int ,int *) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 const struct of_device_id *VAR_2;
 const struct mpc5xxx_can_data *VAR_3;
 struct net_device *VAR_4 = FUNC_5(VAR_1);
 struct mscan_priv *VAR_5 = FUNC_3(VAR_4);

 VAR_2 = FUNC_4(VAR_0, &VAR_1->dev);
 VAR_3 = VAR_2 ? VAR_2->data : ((void*)0);

 FUNC_7(VAR_4);
 if (VAR_3 && VAR_3->put_clock)
  VAR_3->put_clock(VAR_1);
 FUNC_1(VAR_5->reg_base);
 FUNC_2(VAR_4->irq);
 FUNC_0(VAR_4);

 return 0;
}
