
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_cdns {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdw_cdns*) ;
 int FUNC_1 (struct sdw_cdns*,int ,int ) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct sdw_cdns *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_2, VAR_0,
        VAR_1);
 if (VAR_3 < 0)
  FUNC_2(VAR_2->dev, "Config update timedout\n");

 return VAR_3;
}
