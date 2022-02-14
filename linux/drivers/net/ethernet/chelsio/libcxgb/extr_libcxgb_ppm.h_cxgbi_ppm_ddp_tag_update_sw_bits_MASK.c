
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxgbi_tag_format {int free_bits; int rsvd_bits; int rsvd_mask; } ;
struct cxgbi_ppm {struct cxgbi_tag_format tformat; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbi_ppm*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct cxgbi_ppm *VAR_1,
         u32 VAR_2, u32 VAR_3,
         u32 *VAR_4)
{
 struct cxgbi_tag_format *VAR_5 = &VAR_1->tformat;
 u32 VAR_6 = VAR_2 >> VAR_5->free_bits;

 if (VAR_6) {
  FUNC_1("sw_bits 0x%x too large, avail bits %u.\n",
   VAR_2, VAR_5->free_bits);
  return -VAR_0;
 }
 if (!FUNC_0(VAR_1, VAR_3))
  return -VAR_0;

 *VAR_4 = (VAR_2 << VAR_5->rsvd_bits) |
       (VAR_3 & VAR_1->tformat.rsvd_mask);
 return 0;
}
