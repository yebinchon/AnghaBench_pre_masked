
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct cxgbi_tag_format {unsigned int idx_bits; unsigned int color_bits; unsigned int idx_clr_mask; unsigned int rsvd_bits; } ;
struct cxgbi_ppm {struct cxgbi_tag_format tformat; } ;



__attribute__((used)) static inline u32 FUNC_0(struct cxgbi_ppm *VAR_0,
            u32 VAR_1)
{
 struct cxgbi_tag_format *VAR_2 = &VAR_0->tformat;
 unsigned int VAR_3 = VAR_2->idx_bits + VAR_2->color_bits;
 u32 VAR_4 = VAR_1 & VAR_2->idx_clr_mask;
 u32 VAR_5 = (VAR_1 >> VAR_2->rsvd_bits) << VAR_3;

 return VAR_5 | VAR_4;
}
