
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int vf_id; int msg; } ;
union nic_mbx {TYPE_1__ lbk; } ;
struct nicvf {int vf_id; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int FUNC_1(struct nicvf *VAR_2,
     netdev_features_t VAR_3)
{
 union nic_mbx VAR_4 = {};

 VAR_4.lbk.msg = VAR_1;
 VAR_4.lbk.vf_id = VAR_2->vf_id;
 VAR_4.lbk.enable = (VAR_3 & VAR_0) != 0;

 return FUNC_0(VAR_2, &VAR_4);
}
