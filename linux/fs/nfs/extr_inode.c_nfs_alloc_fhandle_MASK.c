
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {scalar_t__ size; } ;


 int VAR_0 ;
 struct nfs_fh* FUNC_0 (int,int ) ;

struct nfs_fh *FUNC_1(void)
{
 struct nfs_fh *VAR_1;

 VAR_1 = FUNC_0(sizeof(struct nfs_fh), VAR_0);
 if (VAR_1 != ((void*)0))
  VAR_1->size = 0;
 return VAR_1;
}
