
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int dummy; } ;
struct nfs4_filelayout {struct pnfs_layout_hdr generic_hdr; } ;
struct inode {int dummy; } ;
typedef int gfp_t ;


 struct nfs4_filelayout* FUNC_0 (int,int ) ;

__attribute__((used)) static struct pnfs_layout_hdr *
FUNC_1(struct inode *VAR_0, gfp_t VAR_1)
{
 struct nfs4_filelayout *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 return VAR_2 != ((void*)0) ? &VAR_2->generic_hdr : ((void*)0);
}
