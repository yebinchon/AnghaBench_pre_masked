
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int rpcs_out; } ;
struct nfs_inode {TYPE_1__ commit_info; } ;
struct address_space {int host; } ;


 struct nfs_inode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct address_space* FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_0,
    bool *VAR_1, bool *VAR_2)
{
 struct nfs_inode *VAR_3;
 struct address_space *VAR_4 = FUNC_4(VAR_0);

 if (!VAR_4 || FUNC_2(VAR_0))
  return;






 VAR_3 = FUNC_0(VAR_4->host);
 if (FUNC_3(&VAR_3->commit_info.rpcs_out)) {
  *VAR_2 = 1;
  return;
 }






 if (FUNC_1(VAR_0))
  *VAR_1 = 1;
}
