
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int * l_recs; int l_count; int l_next_free_rec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_extent_list *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->l_next_free_rec);
 int VAR_2 = FUNC_1(VAR_0->l_count);
 unsigned int VAR_3;

 FUNC_0(!VAR_1);

 FUNC_0(VAR_1 >= VAR_2);

 VAR_3 = sizeof(struct ocfs2_extent_rec) * VAR_1;

 FUNC_2(&VAR_0->l_recs[1], &VAR_0->l_recs[0], VAR_3);
}
