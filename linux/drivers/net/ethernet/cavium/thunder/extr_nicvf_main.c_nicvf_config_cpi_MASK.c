
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rq_cnt; int cpi_alg; int vf_id; int msg; } ;
union nic_mbx {TYPE_1__ cpi_cfg; } ;
struct nicvf {TYPE_2__* qs; int cpi_alg; int vf_id; } ;
struct TYPE_4__ {int rq_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_1)
{
 union nic_mbx VAR_2 = {};

 VAR_2.cpi_cfg.msg = VAR_0;
 VAR_2.cpi_cfg.vf_id = VAR_1->vf_id;
 VAR_2.cpi_cfg.cpi_alg = VAR_1->cpi_alg;
 VAR_2.cpi_cfg.rq_cnt = VAR_1->qs->rq_cnt;

 FUNC_0(VAR_1, &VAR_2);
}
