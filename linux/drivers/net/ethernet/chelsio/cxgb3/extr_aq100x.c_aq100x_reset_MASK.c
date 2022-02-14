
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prtad; } ;
struct cphy {TYPE_1__ mdio; int adapter; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct cphy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_1, int VAR_2)
{




 int VAR_3 = FUNC_1(VAR_1, VAR_0, 3000);

 if (VAR_3)
  FUNC_0(VAR_1->adapter, "PHY%d: reset failed (0x%x).\n",
   VAR_1->mdio.prtad, VAR_3);

 return VAR_3;
}
