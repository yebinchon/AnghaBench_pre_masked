
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {void** nid; } ;
struct TYPE_3__ {void** i_nid; } ;
struct f2fs_node {TYPE_2__ in; TYPE_1__ i; } ;
typedef int nid_t ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct page*,int ,int,int) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static inline int FUNC_4(struct page *VAR_2, int VAR_3, nid_t VAR_4, bool VAR_5)
{
 struct f2fs_node *VAR_6 = FUNC_0(VAR_2);

 FUNC_2(VAR_2, VAR_0, 1, 1);

 if (VAR_5)
  VAR_6->i.i_nid[VAR_3 - VAR_1] = FUNC_1(VAR_4);
 else
  VAR_6->in.nid[VAR_3] = FUNC_1(VAR_4);
 return FUNC_3(VAR_2);
}
