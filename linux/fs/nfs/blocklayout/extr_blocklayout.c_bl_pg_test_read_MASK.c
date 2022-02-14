
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int dummy; } ;
struct nfs_page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_pageio_descriptor*,struct nfs_page*,int ,int) ;
 size_t FUNC_1 (struct nfs_pageio_descriptor*,struct nfs_page*,struct nfs_page*) ;

__attribute__((used)) static size_t
FUNC_2(struct nfs_pageio_descriptor *VAR_1, struct nfs_page *VAR_2,
  struct nfs_page *VAR_3)
{
 if (!FUNC_0(VAR_1, VAR_3, VAR_0, 0))
  return 0;
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
