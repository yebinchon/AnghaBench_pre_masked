
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {void* flag; void* ino; void* nid; } ;
struct f2fs_node {TYPE_1__ footer; } ;
typedef unsigned int nid_t ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (void*) ;
 int FUNC_3 (struct f2fs_node*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct page *VAR_2, nid_t VAR_3,
    nid_t VAR_4, unsigned int VAR_5, bool VAR_6)
{
 struct f2fs_node *VAR_7 = FUNC_0(VAR_2);
 unsigned int VAR_8 = 0;

 if (VAR_6)
  FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 else
  VAR_8 = FUNC_2(VAR_7->footer.flag);

 VAR_7->footer.nid = FUNC_1(VAR_3);
 VAR_7->footer.ino = FUNC_1(VAR_4);


 VAR_7->footer.flag = FUNC_1((VAR_5 << VAR_1) |
     (VAR_8 & VAR_0));
}
