
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int * pg_lseg; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct nfs_pageio_descriptor *VAR_0)
{
 if (VAR_0->pg_lseg) {
  FUNC_0(VAR_0->pg_lseg);
  VAR_0->pg_lseg = ((void*)0);
 }
}
