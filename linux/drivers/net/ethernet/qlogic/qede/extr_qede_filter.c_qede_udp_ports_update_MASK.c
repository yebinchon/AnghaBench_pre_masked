
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qede_dev {scalar_t__ vxlan_dst_port; scalar_t__ geneve_dst_port; } ;



void FUNC_0(void *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct qede_dev *VAR_3 = VAR_0;

 if (VAR_3->vxlan_dst_port != VAR_1)
  VAR_3->vxlan_dst_port = 0;

 if (VAR_3->geneve_dst_port != VAR_2)
  VAR_3->geneve_dst_port = 0;
}
