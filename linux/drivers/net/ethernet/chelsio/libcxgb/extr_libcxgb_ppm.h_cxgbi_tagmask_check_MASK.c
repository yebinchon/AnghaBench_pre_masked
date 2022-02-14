
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_tag_format {int free_bits; unsigned int rsvd_bits; unsigned int color_bits; unsigned int idx_bits; int no_ddp_mask; int idx_mask; int color_mask; int idx_clr_mask; int rsvd_mask; int * pgsz_order; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,int,unsigned int,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(unsigned int VAR_1,
           struct cxgbi_tag_format *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1);


 VAR_2->free_bits = 32 - 2 - VAR_3;
 VAR_2->rsvd_bits = VAR_3;
 VAR_2->color_bits = VAR_0;
 VAR_2->idx_bits = VAR_3 - 1 - VAR_0;
 VAR_2->no_ddp_mask = 1 << (VAR_3 - 1);
 VAR_2->idx_mask = (1 << VAR_2->idx_bits) - 1;
 VAR_2->color_mask = (1 << VAR_0) - 1;
 VAR_2->idx_clr_mask = (1 << (VAR_3 - 1)) - 1;
 VAR_2->rsvd_mask = (1 << VAR_3) - 1;

 FUNC_1("ippm: tagmask 0x%x, rsvd %u=%u+%u+1, mask 0x%x,0x%x, "
  "pg %u,%u,%u,%u.\n",
  VAR_1, VAR_2->rsvd_bits, VAR_2->idx_bits,
  VAR_2->color_bits, VAR_2->no_ddp_mask, VAR_2->rsvd_mask,
  VAR_2->pgsz_order[0], VAR_2->pgsz_order[1],
  VAR_2->pgsz_order[2], VAR_2->pgsz_order[3]);
}
