
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_nvm_id20_addrf {unsigned long long grp_len; unsigned long long pu_len; unsigned long long chk_len; unsigned long long lba_len; } ;
struct nvm_addrf {unsigned long long ch_len; unsigned long long lun_len; unsigned long long chk_len; unsigned long long sec_len; unsigned long long sec_offset; unsigned long long chk_offset; unsigned long long lun_offset; unsigned long long ch_offset; unsigned long long ch_mask; unsigned long long lun_mask; unsigned long long chk_mask; unsigned long long sec_mask; } ;



__attribute__((used)) static void FUNC_0(struct nvm_addrf *VAR_0,
     struct nvme_nvm_id20_addrf *VAR_1)
{
 VAR_0->ch_len = VAR_1->grp_len;
 VAR_0->lun_len = VAR_1->pu_len;
 VAR_0->chk_len = VAR_1->chk_len;
 VAR_0->sec_len = VAR_1->lba_len;

 VAR_0->sec_offset = 0;
 VAR_0->chk_offset = VAR_0->sec_len;
 VAR_0->lun_offset = VAR_0->chk_offset + VAR_0->chk_len;
 VAR_0->ch_offset = VAR_0->lun_offset + VAR_0->lun_len;

 VAR_0->ch_mask = ((1ULL << VAR_0->ch_len) - 1) << VAR_0->ch_offset;
 VAR_0->lun_mask = ((1ULL << VAR_0->lun_len) - 1) << VAR_0->lun_offset;
 VAR_0->chk_mask = ((1ULL << VAR_0->chk_len) - 1) << VAR_0->chk_offset;
 VAR_0->sec_mask = ((1ULL << VAR_0->sec_len) - 1) << VAR_0->sec_offset;
}
