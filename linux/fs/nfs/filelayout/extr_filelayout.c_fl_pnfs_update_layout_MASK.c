
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pnfs_layout_segment {int dummy; } ;
struct pnfs_layout_hdr {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct nfs4_filelayout_segment {int dummy; } ;
struct inode {int dummy; } ;
typedef int loff_t ;
typedef int gfp_t ;
typedef enum pnfs_iomode { ____Placeholder_pnfs_iomode } pnfs_iomode ;
struct TYPE_2__ {struct pnfs_layout_hdr* layout; } ;


 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 scalar_t__ FUNC_1 (struct pnfs_layout_segment*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct pnfs_layout_hdr*,struct nfs4_filelayout_segment*,int ) ;
 int FUNC_4 (struct pnfs_layout_segment*) ;
 struct pnfs_layout_segment* FUNC_5 (struct inode*,struct nfs_open_context*,int ,int ,int,int,int ) ;

__attribute__((used)) static struct pnfs_layout_segment *
FUNC_6(struct inode *VAR_0,
        struct nfs_open_context *VAR_1,
        loff_t VAR_2,
        u64 VAR_3,
        enum pnfs_iomode VAR_4,
        bool VAR_5,
        gfp_t VAR_6)
{
 struct pnfs_layout_segment *VAR_7 = ((void*)0);
 struct pnfs_layout_hdr *VAR_8;
 struct nfs4_filelayout_segment *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6);
 if (FUNC_1(VAR_7))
  goto out;

 VAR_8 = FUNC_2(VAR_0)->layout;
 VAR_9 = FUNC_0(VAR_7);

 VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_6);
 if (VAR_10) {
  FUNC_4(VAR_7);
  VAR_7 = ((void*)0);
 }
out:
 return VAR_7;
}
