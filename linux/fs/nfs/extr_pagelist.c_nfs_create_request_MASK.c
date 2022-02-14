
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {int dummy; } ;
struct nfs_open_context {int dummy; } ;
typedef struct nfs_page nfs_lock_context ;


 struct nfs_page* FUNC_0 (struct nfs_page*) ;
 scalar_t__ FUNC_1 (struct nfs_page*) ;
 struct nfs_page* FUNC_2 (struct nfs_page*,struct page*,unsigned int,unsigned int,unsigned int) ;
 struct nfs_page* FUNC_3 (struct nfs_open_context*) ;
 int FUNC_4 (struct nfs_page*,int *) ;
 int FUNC_5 (struct nfs_page*) ;

struct nfs_page *
FUNC_6(struct nfs_open_context *VAR_0, struct page *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct nfs_lock_context *VAR_4 = FUNC_3(VAR_0);
 struct nfs_page *VAR_5;

 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);
 VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_2, VAR_2, VAR_3);
 if (!FUNC_1(VAR_5))
  FUNC_4(VAR_5, ((void*)0));
 FUNC_5(VAR_4);
 return VAR_5;
}
