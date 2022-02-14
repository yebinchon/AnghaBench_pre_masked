
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {int dummy; } ;


 struct nfs_page* FUNC_0 (struct page*) ;
 struct nfs_page* FUNC_1 (struct page*) ;

__attribute__((used)) static struct nfs_page *FUNC_2(struct page *VAR_0)
{
 struct nfs_page *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);
 return VAR_1;
}
