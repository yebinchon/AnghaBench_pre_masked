
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int duplex; int speed; int advertising; int lp_advertising; } ;
struct TYPE_3__ {int duplex; int speed; int bit; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct phy_device*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(struct phy_device *VAR_2)
{
 FUNC_1(VAR_0);
 int VAR_3;

 FUNC_2(VAR_0, VAR_2->lp_advertising, VAR_2->advertising);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (FUNC_4(VAR_1[VAR_3].bit, VAR_0)) {
   VAR_2->speed = VAR_1[VAR_3].speed;
   VAR_2->duplex = VAR_1[VAR_3].duplex;
   break;
  }

 FUNC_3(VAR_2);
}
