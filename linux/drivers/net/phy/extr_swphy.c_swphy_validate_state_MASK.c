
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed_phy_status {int speed; scalar_t__ link; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

int FUNC_2(const struct fixed_phy_status *VAR_1)
{
 int VAR_2;

 if (VAR_1->link) {
  VAR_2 = FUNC_1(VAR_1->speed);
  if (VAR_2 < 0) {
   FUNC_0("swphy: unknown speed\n");
   return -VAR_0;
  }
 }
 return 0;
}
