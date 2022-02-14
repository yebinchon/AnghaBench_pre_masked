
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ committed; } ;
struct nfs_pgio_header {TYPE_1__ verf; int * lseg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct nfs_pgio_header *VAR_2)
{
 if (VAR_2->verf.committed == VAR_0)
  return VAR_2->lseg == ((void*)0);
 return VAR_2->verf.committed != VAR_1;
}
