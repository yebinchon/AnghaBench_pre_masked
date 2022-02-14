
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int rx_cpu_rmap; } ;
struct hns3_nic_priv {int vector_num; struct hns3_enet_tqp_vector* tqp_vector; } ;
struct hns3_enet_tqp_vector {int vector_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 struct hns3_nic_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 return 0;
}
