
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_super {unsigned int osb_dx_mask; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct ocfs2_super *VAR_0,
         u32 VAR_1)
{
 return VAR_1 & VAR_0->osb_dx_mask;
}
