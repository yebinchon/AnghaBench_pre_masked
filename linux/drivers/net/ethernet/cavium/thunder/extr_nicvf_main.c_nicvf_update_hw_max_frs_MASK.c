
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_frs; int vf_id; int msg; } ;
union nic_mbx {TYPE_1__ frs; } ;
struct nicvf {int vf_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int FUNC_1(struct nicvf *VAR_1, int VAR_2)
{
 union nic_mbx VAR_3 = {};

 VAR_3.frs.msg = VAR_0;
 VAR_3.frs.max_frs = VAR_2;
 VAR_3.frs.vf_id = VAR_1->vf_id;

 return FUNC_0(VAR_1, &VAR_3);
}
