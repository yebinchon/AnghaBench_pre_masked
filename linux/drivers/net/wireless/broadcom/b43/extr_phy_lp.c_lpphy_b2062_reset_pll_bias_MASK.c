
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2)
{
 FUNC_0(VAR_2, VAR_1, 0xFF);
 FUNC_1(20);
 if (VAR_2->dev->chip_id == 0x5354) {
  FUNC_0(VAR_2, VAR_0, 4);
  FUNC_0(VAR_2, VAR_1, 4);
 } else {
  FUNC_0(VAR_2, VAR_1, 0);
 }
 FUNC_1(5);
}
