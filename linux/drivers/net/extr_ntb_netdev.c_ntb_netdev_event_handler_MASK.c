
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_netdev {int qp; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int,scalar_t__) ;
 struct ntb_netdev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, int VAR_1)
{
 struct net_device *VAR_2 = VAR_0;
 struct ntb_netdev *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2, "Event %x, Link %x\n", VAR_1,
     FUNC_4(VAR_3->qp));

 if (VAR_1) {
  if (FUNC_4(VAR_3->qp))
   FUNC_3(VAR_2);
 } else {
  FUNC_2(VAR_2);
 }
}
