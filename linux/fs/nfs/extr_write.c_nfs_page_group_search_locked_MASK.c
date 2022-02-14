
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {unsigned int wb_pgbase; unsigned int wb_bytes; struct nfs_page* wb_this_page; } ;



__attribute__((used)) static struct nfs_page *
FUNC_0(struct nfs_page *VAR_0, unsigned int VAR_1)
{
 struct nfs_page *VAR_2;

 VAR_2 = VAR_0;
 do {
  if (VAR_1 >= VAR_2->wb_pgbase &&
      VAR_1 < (VAR_2->wb_pgbase + VAR_2->wb_bytes))
   return VAR_2;

  VAR_2 = VAR_2->wb_this_page;
 } while (VAR_2 != VAR_0);

 return ((void*)0);
}
