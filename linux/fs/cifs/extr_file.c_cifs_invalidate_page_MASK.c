
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct cifsInodeInfo {int vfs_inode; } ;
struct TYPE_2__ {int host; } ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct page*,int *) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct cifsInodeInfo *VAR_4 = FUNC_0(VAR_1->mapping->host);

 if (VAR_2 == 0 && VAR_3 == VAR_0)
  FUNC_1(VAR_1, &VAR_4->vfs_inode);
}
