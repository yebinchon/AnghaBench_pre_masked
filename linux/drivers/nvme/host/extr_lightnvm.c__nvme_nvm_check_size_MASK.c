
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_nvm_setbbtbl {int dummy; } ;
struct nvme_nvm_ph_rw {int dummy; } ;
struct nvme_nvm_identity {int dummy; } ;
struct nvme_nvm_id20_addrf {int dummy; } ;
struct nvme_nvm_id20 {int dummy; } ;
struct nvme_nvm_id12_grp {int dummy; } ;
struct nvme_nvm_id12_addrf {int dummy; } ;
struct nvme_nvm_id12 {int dummy; } ;
struct nvme_nvm_getbbtbl {int dummy; } ;
struct nvme_nvm_erase_blk {int dummy; } ;
struct nvme_nvm_chk_meta {int dummy; } ;
struct nvme_nvm_bb_tbl {int dummy; } ;
struct nvm_chk_meta {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(void)
{
 FUNC_0(sizeof(struct nvme_nvm_identity) != 64);
 FUNC_0(sizeof(struct nvme_nvm_ph_rw) != 64);
 FUNC_0(sizeof(struct nvme_nvm_erase_blk) != 64);
 FUNC_0(sizeof(struct nvme_nvm_getbbtbl) != 64);
 FUNC_0(sizeof(struct nvme_nvm_setbbtbl) != 64);
 FUNC_0(sizeof(struct nvme_nvm_id12_grp) != 960);
 FUNC_0(sizeof(struct nvme_nvm_id12_addrf) != 16);
 FUNC_0(sizeof(struct nvme_nvm_id12) != VAR_0);
 FUNC_0(sizeof(struct nvme_nvm_bb_tbl) != 64);
 FUNC_0(sizeof(struct nvme_nvm_id20_addrf) != 8);
 FUNC_0(sizeof(struct nvme_nvm_id20) != VAR_0);
 FUNC_0(sizeof(struct nvme_nvm_chk_meta) != 32);
 FUNC_0(sizeof(struct nvme_nvm_chk_meta) !=
      sizeof(struct nvm_chk_meta));
}
