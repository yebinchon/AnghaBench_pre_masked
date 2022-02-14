
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_nvm_id20 {int lbaf; int tcrsm; int tcrst; int twrm; int twrt; int trdm; int trdt; int maxocpu; int maxoc; int mw_cunits; int ws_opt; int ws_min; int clba; int num_chk; int num_pu; int num_grp; int mnr; int mjr; } ;
struct nvm_geo {int num_ch; int num_lun; int all_luns; int num_chk; int clba; int all_chunks; int total_secs; int addrf; void* tbem; void* tbet; void* tprm; void* tprt; void* trdm; void* trdt; void* maxocpu; void* maxoc; void* mw_cunits; void* ws_opt; void* ws_min; int version; int minor_ver_id; int major_ver_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct nvme_nvm_id20 *VAR_1,
        struct nvm_geo *VAR_2)
{
 VAR_2->major_ver_id = VAR_1->mjr;
 VAR_2->minor_ver_id = VAR_1->mnr;


 VAR_2->version = VAR_0;

 VAR_2->num_ch = FUNC_0(VAR_1->num_grp);
 VAR_2->num_lun = FUNC_0(VAR_1->num_pu);
 VAR_2->all_luns = VAR_2->num_ch * VAR_2->num_lun;

 VAR_2->num_chk = FUNC_1(VAR_1->num_chk);
 VAR_2->clba = FUNC_1(VAR_1->clba);

 VAR_2->all_chunks = VAR_2->all_luns * VAR_2->num_chk;
 VAR_2->total_secs = VAR_2->clba * VAR_2->all_chunks;

 VAR_2->ws_min = FUNC_1(VAR_1->ws_min);
 VAR_2->ws_opt = FUNC_1(VAR_1->ws_opt);
 VAR_2->mw_cunits = FUNC_1(VAR_1->mw_cunits);
 VAR_2->maxoc = FUNC_1(VAR_1->maxoc);
 VAR_2->maxocpu = FUNC_1(VAR_1->maxocpu);

 VAR_2->trdt = FUNC_1(VAR_1->trdt);
 VAR_2->trdm = FUNC_1(VAR_1->trdm);
 VAR_2->tprt = FUNC_1(VAR_1->twrt);
 VAR_2->tprm = FUNC_1(VAR_1->twrm);
 VAR_2->tbet = FUNC_1(VAR_1->tcrst);
 VAR_2->tbem = FUNC_1(VAR_1->tcrsm);

 FUNC_2(&VAR_2->addrf, &VAR_1->lbaf);

 return 0;
}
