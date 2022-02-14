
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int flag; } ;
struct f2fs_node {TYPE_1__ footer; } ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct page *VAR_1)
{
 struct f2fs_node *VAR_2 = FUNC_0(VAR_1);
 unsigned VAR_3 = FUNC_1(VAR_2->footer.flag);
 return VAR_3 >> VAR_0;
}
