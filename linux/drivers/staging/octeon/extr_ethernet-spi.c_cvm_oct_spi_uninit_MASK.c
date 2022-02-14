
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ VAR_1 ;

void FUNC_5(struct net_device *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2);
 VAR_1--;
 if (VAR_1 == 0) {
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
   FUNC_3(FUNC_0(VAR_3), 0);
   FUNC_3(FUNC_1(VAR_3), 0);
  }
  FUNC_4(VAR_0, &VAR_1);
 }
}
