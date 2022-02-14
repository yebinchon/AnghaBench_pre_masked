
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int * pg_lseg; } ;
struct nfs_page {int dummy; } ;


 int FUNC_0 (int *,struct nfs_page*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfs_pageio_descriptor *VAR_0, struct nfs_page *VAR_1)
{
 if (VAR_0->pg_lseg && !FUNC_0(VAR_0->pg_lseg, VAR_1)) {
  FUNC_1(VAR_0->pg_lseg);
  VAR_0->pg_lseg = ((void*)0);
 }
}
