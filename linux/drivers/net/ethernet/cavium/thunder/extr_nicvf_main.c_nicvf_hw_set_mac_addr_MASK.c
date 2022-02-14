
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_addr; int vf_id; int msg; } ;
union nic_mbx {TYPE_1__ mac; } ;
struct nicvf {int vf_id; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int FUNC_2(struct nicvf *VAR_1, struct net_device *VAR_2)
{
 union nic_mbx VAR_3 = {};

 VAR_3.mac.msg = VAR_0;
 VAR_3.mac.vf_id = VAR_1->vf_id;
 FUNC_0(VAR_3.mac.mac_addr, VAR_2->dev_addr);

 return FUNC_1(VAR_1, &VAR_3);
}
