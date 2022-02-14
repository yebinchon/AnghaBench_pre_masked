
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_meta_cache_item {int dummy; } ;
struct ocfs2_caching_info {int ci_flags; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_1 (struct ocfs2_caching_info*) ;
 int FUNC_2 (struct ocfs2_caching_info*) ;
 int FUNC_3 (struct ocfs2_caching_info*,scalar_t__) ;
 struct ocfs2_meta_cache_item* FUNC_4 (struct ocfs2_caching_info*,scalar_t__) ;
 int FUNC_5 (unsigned long long,unsigned long long,int) ;
 int FUNC_6 (int,struct ocfs2_meta_cache_item*) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_caching_info *VAR_1,
          struct buffer_head *VAR_2)
{
 int VAR_3 = -1;
 struct ocfs2_meta_cache_item *VAR_4 = ((void*)0);

 FUNC_0(VAR_1);

 FUNC_5(
  (unsigned long long)FUNC_1(VAR_1),
  (unsigned long long) VAR_2->b_blocknr,
  !!(VAR_1->ci_flags & VAR_0));

 if (VAR_1->ci_flags & VAR_0)
  VAR_3 = FUNC_3(VAR_1, VAR_2->b_blocknr);
 else
  VAR_4 = FUNC_4(VAR_1, VAR_2->b_blocknr);

 FUNC_2(VAR_1);

 FUNC_6(VAR_3, VAR_4);

 return (VAR_3 != -1) || (VAR_4 != ((void*)0));
}
