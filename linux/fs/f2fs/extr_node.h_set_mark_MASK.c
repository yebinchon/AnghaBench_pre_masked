
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int flag; } ;
struct f2fs_node {TYPE_1__ footer; } ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,struct page*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct page *VAR_0, int VAR_1, int VAR_2)
{
 struct f2fs_node *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = FUNC_4(VAR_3->footer.flag);
 if (VAR_1)
  VAR_4 |= (0x1 << VAR_2);
 else
  VAR_4 &= ~(0x1 << VAR_2);
 VAR_3->footer.flag = FUNC_2(VAR_4);




}
