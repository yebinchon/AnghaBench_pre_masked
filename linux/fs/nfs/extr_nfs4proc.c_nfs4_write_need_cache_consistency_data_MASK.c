
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int inode; int * dreq; int * ds_clp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static
bool FUNC_1(struct nfs_pgio_header *VAR_1)
{

 if (VAR_1->ds_clp != ((void*)0) || VAR_1->dreq != ((void*)0))
  return 0;



 return FUNC_0(VAR_1->inode, VAR_0) == 0;
}
