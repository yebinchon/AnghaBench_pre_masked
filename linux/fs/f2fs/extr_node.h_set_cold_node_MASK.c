
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int flag; } ;
struct f2fs_node {TYPE_1__ footer; } ;


 int VAR_0 ;
 struct f2fs_node* FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct page *VAR_1, bool VAR_2)
{
 struct f2fs_node *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = FUNC_2(VAR_3->footer.flag);

 if (VAR_2)
  VAR_4 &= ~(0x1 << VAR_0);
 else
  VAR_4 |= (0x1 << VAR_0);
 VAR_3->footer.flag = FUNC_1(VAR_4);
}
