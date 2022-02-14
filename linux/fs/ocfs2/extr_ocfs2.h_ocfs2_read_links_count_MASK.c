
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_dinode {int i_dyn_features; int i_links_count_hi; int i_links_count; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ocfs2_dinode *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2->i_links_count);
 u32 VAR_4 = FUNC_1(VAR_2->i_links_count_hi);

 if (VAR_2->i_dyn_features & FUNC_0(VAR_0))
  VAR_3 |= (VAR_4 << VAR_1);

 return VAR_3;
}
