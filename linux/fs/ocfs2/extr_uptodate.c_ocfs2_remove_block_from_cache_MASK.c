
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_meta_cache_item {int dummy; } ;
struct ocfs2_caching_info {int ci_flags; int ci_num_cached; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ocfs2_meta_cache_item*) ;
 int FUNC_1 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_2 (struct ocfs2_caching_info*) ;
 int FUNC_3 (struct ocfs2_caching_info*) ;
 int FUNC_4 (struct ocfs2_caching_info*,int) ;
 int FUNC_5 (struct ocfs2_caching_info*,struct ocfs2_meta_cache_item*) ;
 int FUNC_6 (struct ocfs2_caching_info*,scalar_t__) ;
 struct ocfs2_meta_cache_item* FUNC_7 (struct ocfs2_caching_info*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_8 (unsigned long long,unsigned long long,int ,int) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_caching_info *VAR_2,
       sector_t VAR_3)
{
 int VAR_4;
 struct ocfs2_meta_cache_item *VAR_5 = ((void*)0);

 FUNC_1(VAR_2);
 FUNC_8(
  (unsigned long long)FUNC_2(VAR_2),
  (unsigned long long) VAR_3, VAR_2->ci_num_cached,
  VAR_2->ci_flags);

 if (VAR_2->ci_flags & VAR_0) {
  VAR_4 = FUNC_6(VAR_2, VAR_3);
  if (VAR_4 != -1)
   FUNC_4(VAR_2, VAR_4);
 } else {
  VAR_5 = FUNC_7(VAR_2, VAR_3);
  if (VAR_5)
   FUNC_5(VAR_2, VAR_5);
 }
 FUNC_3(VAR_2);

 if (VAR_5)
  FUNC_0(VAR_1, VAR_5);
}
