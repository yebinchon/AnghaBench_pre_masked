
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 scalar_t__ FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_0)
{
 if (FUNC_7(VAR_0)) {
  if (!FUNC_2(VAR_0)) {
   FUNC_3(VAR_0);
   FUNC_0(VAR_0, "link up\n");
   FUNC_6(VAR_0, 0);
   FUNC_4(VAR_0);
  }
 } else {
  if (FUNC_2(VAR_0)) {
   FUNC_1(VAR_0);
   FUNC_0(VAR_0, "link down\n");
   FUNC_6(VAR_0, 1);
   FUNC_5(VAR_0);
  }
 }
}
