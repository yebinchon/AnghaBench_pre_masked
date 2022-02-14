
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs_page {int dummy; } ;
struct nfs_commit_info {int dummy; } ;
struct nfs4_filelayout_segment {scalar_t__ commit_through_mds; } ;


 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 int FUNC_1 (struct pnfs_layout_segment*,int ) ;
 int FUNC_2 (struct nfs_page*,struct nfs_commit_info*) ;
 int FUNC_3 (struct nfs_page*,struct pnfs_layout_segment*,struct nfs_commit_info*,int ) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct nfs4_filelayout_segment*,int ) ;

__attribute__((used)) static void
FUNC_6(struct nfs_page *VAR_0,
          struct pnfs_layout_segment *VAR_1,
          struct nfs_commit_info *VAR_2,
          u32 VAR_3)

{
 struct nfs4_filelayout_segment *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5, VAR_6;

 if (VAR_4->commit_through_mds) {
  FUNC_2(VAR_0, VAR_2);
 } else {






  VAR_6 = FUNC_1(VAR_1, FUNC_4(VAR_0));
  VAR_5 = FUNC_5(VAR_4, VAR_6);
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5);
 }
}
