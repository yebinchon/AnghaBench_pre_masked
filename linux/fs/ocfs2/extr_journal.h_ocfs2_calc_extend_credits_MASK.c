
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_extent_list {int l_tree_depth; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_extent_list*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static inline int FUNC_3(struct super_block *VAR_1,
         struct ocfs2_extent_list *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;


 VAR_3 = VAR_0;






 VAR_4 = 1 +
  (VAR_0 - 1) * FUNC_1(VAR_2);






 VAR_5 = 1 + 1 + FUNC_0(VAR_2->l_tree_depth);

 return VAR_3 + VAR_4 + VAR_5 +
        FUNC_2(VAR_1);
}
