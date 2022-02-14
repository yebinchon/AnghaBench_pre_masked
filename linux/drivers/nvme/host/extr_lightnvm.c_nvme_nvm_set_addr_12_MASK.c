
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_nvm_id12_addrf {unsigned long long ch_len; unsigned long long lun_len; unsigned long long blk_len; unsigned long long pg_len; unsigned long long pln_len; unsigned long long sec_len; unsigned long long ch_offset; unsigned long long lun_offset; unsigned long long blk_offset; unsigned long long pg_offset; unsigned long long pln_offset; unsigned long long sec_offset; } ;
struct nvm_addrf_12 {unsigned long long ch_len; unsigned long long lun_len; unsigned long long blk_len; unsigned long long pg_len; unsigned long long pln_len; unsigned long long sec_len; unsigned long long ch_offset; unsigned long long lun_offset; unsigned long long blk_offset; unsigned long long pg_offset; unsigned long long pln_offset; unsigned long long sec_offset; unsigned long long ch_mask; unsigned long long lun_mask; unsigned long long blk_mask; unsigned long long pg_mask; unsigned long long pln_mask; unsigned long long sec_mask; } ;



__attribute__((used)) static void FUNC_0(struct nvm_addrf_12 *VAR_0,
     struct nvme_nvm_id12_addrf *VAR_1)
{
 VAR_0->ch_len = VAR_1->ch_len;
 VAR_0->lun_len = VAR_1->lun_len;
 VAR_0->blk_len = VAR_1->blk_len;
 VAR_0->pg_len = VAR_1->pg_len;
 VAR_0->pln_len = VAR_1->pln_len;
 VAR_0->sec_len = VAR_1->sec_len;

 VAR_0->ch_offset = VAR_1->ch_offset;
 VAR_0->lun_offset = VAR_1->lun_offset;
 VAR_0->blk_offset = VAR_1->blk_offset;
 VAR_0->pg_offset = VAR_1->pg_offset;
 VAR_0->pln_offset = VAR_1->pln_offset;
 VAR_0->sec_offset = VAR_1->sec_offset;

 VAR_0->ch_mask = ((1ULL << VAR_0->ch_len) - 1) << VAR_0->ch_offset;
 VAR_0->lun_mask = ((1ULL << VAR_0->lun_len) - 1) << VAR_0->lun_offset;
 VAR_0->blk_mask = ((1ULL << VAR_0->blk_len) - 1) << VAR_0->blk_offset;
 VAR_0->pg_mask = ((1ULL << VAR_0->pg_len) - 1) << VAR_0->pg_offset;
 VAR_0->pln_mask = ((1ULL << VAR_0->pln_len) - 1) << VAR_0->pln_offset;
 VAR_0->sec_mask = ((1ULL << VAR_0->sec_len) - 1) << VAR_0->sec_offset;
}
