
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int advertising; int lp_advertising; } ;
struct TYPE_3__ {scalar_t__ duplex; int speed; int bit; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_4, bool VAR_5)
{
 FUNC_1(VAR_2);
 int VAR_6 = FUNC_0(VAR_3);

 FUNC_2(VAR_2, VAR_4->lp_advertising, VAR_4->advertising);

 while (--VAR_6 >= 0) {
  if (FUNC_3(VAR_3[VAR_6].bit, VAR_2)) {
   if (VAR_5 && VAR_3[VAR_6].duplex != VAR_0)
    continue;
   return VAR_3[VAR_6].speed;
  }
 }

 return VAR_1;
}
