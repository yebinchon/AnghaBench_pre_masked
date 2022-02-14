
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int dummy; } ;
struct ntb_netdev {int tx_timer; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct ntb_netdev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ntb_transport_qp*) ;
 int FUNC_6 () ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3,
          struct ntb_transport_qp *VAR_4, int VAR_5)
{
 struct ntb_netdev *VAR_6 = FUNC_2(VAR_3);

 FUNC_4(VAR_3);



 FUNC_6();

 if (FUNC_0(FUNC_5(VAR_4) < VAR_5)) {
  FUNC_1(&VAR_6->tx_timer, VAR_1 + FUNC_7(VAR_2));
  return -VAR_0;
 }

 FUNC_3(VAR_3);
 return 0;
}
