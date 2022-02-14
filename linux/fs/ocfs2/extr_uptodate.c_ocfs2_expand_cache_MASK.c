
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_meta_cache_item {int c_block; } ;
struct TYPE_2__ {int ci_tree; int * ci_array; } ;
struct ocfs2_caching_info {int ci_num_cached; int ci_flags; TYPE_1__ ci_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocfs2_caching_info*,struct ocfs2_meta_cache_item*) ;
 int FUNC_1 (int,char*,unsigned long long,...) ;
 scalar_t__ FUNC_2 (struct ocfs2_caching_info*) ;
 int FUNC_3 (unsigned long long,int,int) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_caching_info *VAR_3,
          struct ocfs2_meta_cache_item **VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_3->ci_num_cached != VAR_1,
   "Owner %llu, num cached = %u, should be %u\n",
   (unsigned long long)FUNC_2(VAR_3),
   VAR_3->ci_num_cached, VAR_1);
 FUNC_1(!(VAR_3->ci_flags & VAR_0),
   "Owner %llu not marked as inline anymore!\n",
   (unsigned long long)FUNC_2(VAR_3));



 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4[VAR_5]->c_block = VAR_3->ci_cache.ci_array[VAR_5];

 VAR_3->ci_flags &= ~VAR_0;
 VAR_3->ci_cache.ci_tree = VAR_2;

 VAR_3->ci_num_cached = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(VAR_3, VAR_4[VAR_5]);
  VAR_4[VAR_5] = ((void*)0);
 }

 FUNC_3(
  (unsigned long long)FUNC_2(VAR_3),
  VAR_3->ci_flags, VAR_3->ci_num_cached);
}
