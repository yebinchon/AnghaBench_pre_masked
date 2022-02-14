
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct cxgbi_tag_format {unsigned int no_ddp_mask; unsigned int idx_bits; unsigned int color_bits; unsigned int idx_clr_mask; } ;
struct cxgbi_ppm {struct cxgbi_tag_format tformat; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbi_ppm*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct cxgbi_ppm *VAR_1,
          u32 VAR_2,
          u32 *VAR_3)
{
 struct cxgbi_tag_format *VAR_4 = &VAR_1->tformat;

 if (!FUNC_0(VAR_1, VAR_2)) {
  FUNC_1("sw_tag 0x%x NOT usable.\n", VAR_2);
  return -VAR_0;
 }

 if (!VAR_2) {
  *VAR_3 = VAR_4->no_ddp_mask;
 } else {
  unsigned int VAR_5 = VAR_4->idx_bits + VAR_4->color_bits;
  u32 VAR_6 = VAR_2 & VAR_4->idx_clr_mask;
  u32 VAR_7 = (VAR_2 >> VAR_5) << (VAR_5 + 1);

  *VAR_3 = VAR_7 | VAR_4->no_ddp_mask | VAR_6;
 }
 return 0;
}
