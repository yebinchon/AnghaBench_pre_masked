
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int ioaddr; int mii_bus; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct smsc911x_data*,int ,char*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct smsc911x_data* FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (struct net_device*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_2)
{
 struct net_device *VAR_3;
 struct smsc911x_data *VAR_4;
 struct resource *VAR_5;

 VAR_3 = FUNC_7(VAR_2);
 FUNC_0(!VAR_3);
 VAR_4 = FUNC_6(VAR_3);
 FUNC_0(!VAR_4);
 FUNC_0(!VAR_4->ioaddr);

 FUNC_1(VAR_4, VAR_1, "Stopping driver");

 FUNC_16(VAR_3);

 FUNC_5(VAR_4->mii_bus);
 FUNC_4(VAR_4->mii_bus);

 VAR_5 = FUNC_9(VAR_2, VAR_0,
        "smsc911x-memory");
 if (!VAR_5)
  VAR_5 = FUNC_8(VAR_2, VAR_0, 0);

 FUNC_12(VAR_5->start, FUNC_13(VAR_5));

 FUNC_3(VAR_4->ioaddr);

 (void)FUNC_14(VAR_2);
 FUNC_15(VAR_2);

 FUNC_2(VAR_3);

 FUNC_11(&VAR_2->dev);
 FUNC_10(&VAR_2->dev);

 return 0;
}
