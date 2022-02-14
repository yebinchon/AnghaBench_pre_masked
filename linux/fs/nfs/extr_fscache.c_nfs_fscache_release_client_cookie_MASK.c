
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int * fscache; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct nfs_client*,int *) ;
 int FUNC_1 (int *,int *,int) ;

void FUNC_2(struct nfs_client *VAR_1)
{
 FUNC_0(VAR_0, "NFS: releasing client cookie (0x%p/0x%p)\n",
   VAR_1, VAR_1->fscache);

 FUNC_1(VAR_1->fscache, ((void*)0), 0);
 VAR_1->fscache = ((void*)0);
}
