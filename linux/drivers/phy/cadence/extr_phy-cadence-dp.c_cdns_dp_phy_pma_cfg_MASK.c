
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_dp_phy {unsigned int num_lanes; } ;


 int FUNC_0 (struct cdns_dp_phy*) ;
 int FUNC_1 (struct cdns_dp_phy*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct cdns_dp_phy *VAR_0)
{
 unsigned int VAR_1;


 FUNC_0(VAR_0);


 for (VAR_1 = 0; VAR_1 < VAR_0->num_lanes; VAR_1++)
  FUNC_1(VAR_0, VAR_1);
}
