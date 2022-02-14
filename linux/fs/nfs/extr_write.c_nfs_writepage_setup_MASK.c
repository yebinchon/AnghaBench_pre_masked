
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {int dummy; } ;
struct nfs_open_context {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 int FUNC_1 (struct nfs_page*) ;
 int FUNC_2 (struct page*,unsigned int,unsigned int) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*) ;
 struct nfs_page* FUNC_5 (struct nfs_open_context*,struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (struct nfs_page*) ;

__attribute__((used)) static int FUNC_7(struct nfs_open_context *VAR_0, struct page *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct nfs_page *VAR_4;

 VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 FUNC_6(VAR_4);
 return 0;
}
