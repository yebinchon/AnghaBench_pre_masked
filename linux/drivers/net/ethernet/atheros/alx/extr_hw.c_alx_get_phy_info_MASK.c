
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mmds; } ;
struct alx_hw {TYPE_1__ mdio; int * phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct alx_hw*,int,int ,int*) ;
 scalar_t__ FUNC_1 (struct alx_hw*,int ,int *) ;

bool FUNC_2(struct alx_hw *VAR_4)
{
 u16 VAR_5, VAR_6;

 if (FUNC_1(VAR_4, VAR_2, &VAR_4->phy_id[0]) ||
     FUNC_1(VAR_4, VAR_3, &VAR_4->phy_id[1]))
  return 0;





 if (FUNC_0(VAR_4, 3, VAR_0, &VAR_5) ||
     FUNC_0(VAR_4, 3, VAR_1, &VAR_6))
  return 0;
 VAR_4->mdio.mmds = VAR_5 | VAR_6 << 16;

 return 1;
}
