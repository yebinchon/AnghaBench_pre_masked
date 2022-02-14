
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {TYPE_2__* mapping; } ;
struct extent_io_tree {int dummy; } ;
struct TYPE_6__ {TYPE_1__* root; struct extent_io_tree io_tree; } ;
struct TYPE_5__ {int host; } ;
struct TYPE_4__ {int fs_info; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (int ,char*,unsigned long long) ;
 int FUNC_5 (struct extent_io_tree*,struct page*,unsigned int) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int ) ;

__attribute__((used)) static void FUNC_9(struct page *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct extent_io_tree *VAR_4;
 VAR_4 = &FUNC_0(VAR_1->mapping->host)->io_tree;
 FUNC_5(VAR_4, VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_0);
 if (FUNC_2(VAR_1)) {
  FUNC_4(FUNC_0(VAR_1->mapping->host)->root->fs_info,
      "page private not zero on page %llu",
      (unsigned long long)FUNC_6(VAR_1));
  FUNC_1(VAR_1);
  FUNC_8(VAR_1, 0);
  FUNC_7(VAR_1);
 }
}
