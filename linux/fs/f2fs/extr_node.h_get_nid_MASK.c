
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int * nid; } ;
struct TYPE_3__ {int * i_nid; } ;
struct f2fs_node {TYPE_2__ in; TYPE_1__ i; } ;
typedef int nid_t ;


 struct f2fs_node* FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline nid_t FUNC_2(struct page *VAR_1, int VAR_2, bool VAR_3)
{
 struct f2fs_node *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3)
  return FUNC_1(VAR_4->i.i_nid[VAR_2 - VAR_0]);
 return FUNC_1(VAR_4->in.nid[VAR_2]);
}
