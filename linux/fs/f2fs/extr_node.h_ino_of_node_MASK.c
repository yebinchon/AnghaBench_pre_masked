
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int ino; } ;
struct f2fs_node {TYPE_1__ footer; } ;
typedef int nid_t ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline nid_t FUNC_2(struct page *VAR_0)
{
 struct f2fs_node *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1->footer.ino);
}
