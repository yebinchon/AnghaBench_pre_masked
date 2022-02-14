
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvm_addrf_12 {int sec_len; int sec_offset; int pg_len; int pg_offset; int blk_len; int blk_offset; int pln_len; int pln_offset; int lun_len; int lun_offset; int ch_len; int ch_offset; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct nvm_addrf_12 *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0,
  "0x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n",
    VAR_1->ch_offset, VAR_1->ch_len,
    VAR_1->lun_offset, VAR_1->lun_len,
    VAR_1->pln_offset, VAR_1->pln_len,
    VAR_1->blk_offset, VAR_1->blk_len,
    VAR_1->pg_offset, VAR_1->pg_len,
    VAR_1->sec_offset, VAR_1->sec_len);
}
