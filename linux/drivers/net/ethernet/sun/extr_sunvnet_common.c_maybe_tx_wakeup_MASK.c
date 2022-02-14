
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet_port {int q_index; } ;
struct netdev_queue {int dummy; } ;


 int FUNC_0 (struct vnet_port*) ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct netdev_queue* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct netdev_queue*) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct vnet_port *VAR_0)
{
 struct netdev_queue *VAR_1;

 VAR_1 = FUNC_4(FUNC_0(VAR_0),
      VAR_0->q_index);
 FUNC_1(VAR_1, FUNC_7());
 if (FUNC_3(FUNC_5(VAR_1)))
  FUNC_6(VAR_1);
 FUNC_2(VAR_1);
}
