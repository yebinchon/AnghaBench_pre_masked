
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdw_cdns {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sdw_cdns*,int ) ;
 int FUNC_1 (struct sdw_cdns*,int ,int ) ;
 int FUNC_2 (struct sdw_cdns*,int ,int ,int ) ;
 int FUNC_3 (struct sdw_cdns*,int ,int ) ;
 int FUNC_4 (int ,char*) ;

irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct sdw_cdns *VAR_8 = VAR_7;
 u32 VAR_9, VAR_10;

 FUNC_4(VAR_8->dev, "Slave status change\n");

 VAR_9 = FUNC_0(VAR_8, VAR_3);
 VAR_10 = FUNC_0(VAR_8, VAR_4);

 FUNC_1(VAR_8, VAR_9, VAR_10);
 FUNC_3(VAR_8, VAR_3, VAR_9);
 FUNC_3(VAR_8, VAR_4, VAR_10);


 FUNC_3(VAR_8, VAR_1, VAR_2);
 FUNC_2(VAR_8, VAR_0,
       VAR_2, VAR_2);

 return VAR_5;
}
