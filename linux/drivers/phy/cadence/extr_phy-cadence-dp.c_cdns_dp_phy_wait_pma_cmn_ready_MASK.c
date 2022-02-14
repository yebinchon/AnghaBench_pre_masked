
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_dp_phy {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,unsigned int,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cdns_dp_phy *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->base + VAR_1, VAR_3,
     VAR_3 & 1, 0, 500);
 if (VAR_4 == -VAR_0)
  FUNC_0(VAR_2->dev,
   "timeout waiting for PMA common ready\n");
}
