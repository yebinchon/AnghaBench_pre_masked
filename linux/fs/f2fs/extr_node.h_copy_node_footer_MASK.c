
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct node_footer {int dummy; } ;
struct f2fs_node {int footer; } ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_2(struct page *VAR_0, struct page *VAR_1)
{
 struct f2fs_node *VAR_2 = FUNC_0(VAR_1);
 struct f2fs_node *VAR_3 = FUNC_0(VAR_0);
 FUNC_1(&VAR_3->footer, &VAR_2->footer, sizeof(struct node_footer));
}
