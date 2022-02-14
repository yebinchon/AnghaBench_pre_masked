
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_page {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 struct nfs_page* FUNC_1 (struct nfs_open_context*,struct page*,unsigned int,unsigned int) ;
 int FUNC_2 (struct inode*,struct nfs_page*) ;
 struct nfs_page* FUNC_3 (struct inode*,struct page*,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_4 (struct page*) ;

__attribute__((used)) static struct nfs_page * FUNC_5(struct nfs_open_context* VAR_0,
  struct page *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_1)->host;
 struct nfs_page *VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_5 != ((void*)0))
  goto out;
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_5))
  goto out;
 FUNC_2(VAR_4, VAR_5);
out:
 return VAR_5;
}
