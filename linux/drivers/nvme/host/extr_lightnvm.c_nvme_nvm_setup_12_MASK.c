
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_nvm_id12_grp {scalar_t__ mtype; int num_ch; int num_lun; int num_pln; int fpg_sz; int num_pg; int mpos; int cpar; int fmtype; int tbem; int tbet; int tprm; int tprt; int trdm; int trdt; int mccap; int sos; int csecs; int num_chk; } ;
struct nvme_nvm_id12 {int cgrps; int ppaf; int dom; int cap; int vmnt; int ver_id; struct nvme_nvm_id12_grp grp; } ;
struct nvm_geo {int minor_ver_id; int num_ch; int num_lun; int all_luns; int num_chk; int csecs; int sos; int clba; int all_chunks; int total_secs; int ws_min; int ws_opt; int mw_cunits; int maxoc; int maxocpu; scalar_t__ mtype; int cpar; int mpos; int num_pln; int num_pg; int fpg_sz; int addrf; int pln_mode; int fmtype; void* dom; void* cap; int vmnt; void* tbem; void* tbet; void* tprm; void* tprt; void* trdm; void* trdt; void* mccap; int version; int major_ver_id; } ;
struct nvm_addrf_12 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct nvm_addrf_12*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct nvme_nvm_id12 *VAR_5,
        struct nvm_geo *VAR_6)
{
 struct nvme_nvm_id12_grp *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 if (VAR_5->cgrps != 1)
  return -VAR_0;

 VAR_7 = &VAR_5->grp;

 if (VAR_7->mtype != 0) {
  FUNC_3("nvm: memory type not supported\n");
  return -VAR_0;
 }


 VAR_6->major_ver_id = VAR_5->ver_id;
 VAR_6->minor_ver_id = 2;


 VAR_6->version = VAR_1;

 VAR_6->num_ch = VAR_7->num_ch;
 VAR_6->num_lun = VAR_7->num_lun;
 VAR_6->all_luns = VAR_6->num_ch * VAR_6->num_lun;

 VAR_6->num_chk = FUNC_0(VAR_7->num_chk);

 VAR_6->csecs = FUNC_0(VAR_7->csecs);
 VAR_6->sos = FUNC_0(VAR_7->sos);

 VAR_10 = FUNC_0(VAR_7->num_pg);
 VAR_8 = FUNC_0(VAR_7->fpg_sz) / VAR_6->csecs;
 VAR_9 = VAR_8 * VAR_7->num_pln;
 VAR_6->clba = VAR_9 * VAR_10;

 VAR_6->all_chunks = VAR_6->all_luns * VAR_6->num_chk;
 VAR_6->total_secs = VAR_6->clba * VAR_6->all_chunks;

 VAR_6->ws_min = VAR_8;
 VAR_6->ws_opt = VAR_8;
 VAR_6->mw_cunits = VAR_6->ws_opt << 3;





 VAR_6->maxoc = VAR_6->all_luns * VAR_6->num_chk;
 VAR_6->maxocpu = VAR_6->num_chk;

 VAR_6->mccap = FUNC_1(VAR_7->mccap);

 VAR_6->trdt = FUNC_1(VAR_7->trdt);
 VAR_6->trdm = FUNC_1(VAR_7->trdm);
 VAR_6->tprt = FUNC_1(VAR_7->tprt);
 VAR_6->tprm = FUNC_1(VAR_7->tprm);
 VAR_6->tbet = FUNC_1(VAR_7->tbet);
 VAR_6->tbem = FUNC_1(VAR_7->tbem);


 VAR_6->vmnt = VAR_5->vmnt;
 VAR_6->cap = FUNC_1(VAR_5->cap);
 VAR_6->dom = FUNC_1(VAR_5->dom);

 VAR_6->mtype = VAR_7->mtype;
 VAR_6->fmtype = VAR_7->fmtype;

 VAR_6->cpar = FUNC_0(VAR_7->cpar);
 VAR_6->mpos = FUNC_1(VAR_7->mpos);

 VAR_6->pln_mode = VAR_4;

 if (VAR_6->mpos & 0x020202) {
  VAR_6->pln_mode = VAR_2;
  VAR_6->ws_opt <<= 1;
 } else if (VAR_6->mpos & 0x040404) {
  VAR_6->pln_mode = VAR_3;
  VAR_6->ws_opt <<= 2;
 }

 VAR_6->num_pln = VAR_7->num_pln;
 VAR_6->num_pg = FUNC_0(VAR_7->num_pg);
 VAR_6->fpg_sz = FUNC_0(VAR_7->fpg_sz);

 FUNC_2((struct nvm_addrf_12 *)&VAR_6->addrf, &VAR_5->ppaf);

 return 0;
}
