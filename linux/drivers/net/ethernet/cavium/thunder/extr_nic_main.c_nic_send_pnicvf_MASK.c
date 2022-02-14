
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nicvf; int msg; } ;
union nic_mbx {TYPE_1__ nicvf; } ;
struct nicpf {size_t* pqs_vf; int * nicvf; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicpf*,int,union nic_mbx*) ;

__attribute__((used)) static void FUNC_1(struct nicpf *VAR_1, int VAR_2)
{
 union nic_mbx VAR_3 = {};

 VAR_3.nicvf.msg = VAR_0;
 VAR_3.nicvf.nicvf = VAR_1->nicvf[VAR_1->pqs_vf[VAR_2]];
 FUNC_0(VAR_1, VAR_2, &VAR_3);
}
