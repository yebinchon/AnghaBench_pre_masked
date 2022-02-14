
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pageio_descriptor {TYPE_1__* pg_lseg; } ;
struct TYPE_2__ {int pls_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void
FUNC_2(struct nfs_pageio_descriptor *VAR_1)
{
 if (VAR_1->pg_lseg == ((void*)0) ||
     FUNC_1(VAR_0, &VAR_1->pg_lseg->pls_flags))
  return;
 FUNC_0(VAR_1->pg_lseg);
 VAR_1->pg_lseg = ((void*)0);
}
