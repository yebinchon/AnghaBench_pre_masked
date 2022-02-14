
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iomode; } ;
struct pnfs_layout_segment {TYPE_1__ pls_range; } ;
struct pnfs_layout_range {int iomode; int length; int offset; } ;
struct pnfs_layout_hdr {int plh_return_segs; } ;
struct inode {int i_lock; } ;
typedef int nfs4_stateid ;
typedef enum pnfs_iomode { ____Placeholder_pnfs_iomode } pnfs_iomode ;
struct TYPE_4__ {struct pnfs_layout_hdr* layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct pnfs_layout_hdr*) ;
 int FUNC_3 (struct pnfs_layout_hdr*,int *,struct pnfs_layout_range*,int ) ;
 int FUNC_4 (struct pnfs_layout_hdr*,int *,int*) ;
 int FUNC_5 (struct pnfs_layout_hdr*,int *,int,int) ;
 int FUNC_6 (struct pnfs_layout_hdr*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct inode *VAR_2,
           struct pnfs_layout_segment *VAR_3)
{
 struct pnfs_layout_hdr *VAR_4 = FUNC_0(VAR_2)->layout;
 struct pnfs_layout_range VAR_5 = {
  .iomode = VAR_3->pls_range.iomode,
  .offset = 0,
  .length = VAR_1,
 };
 bool VAR_6 = 0;

 FUNC_7(&VAR_2->i_lock);
 if (!FUNC_2(VAR_4)) {
  FUNC_8(&VAR_2->i_lock);
  return;
 }
 FUNC_6(VAR_4, VAR_5.iomode, 0);





 if (FUNC_3(VAR_4, &VAR_4->plh_return_segs, &VAR_5, 0) != -VAR_0) {
  nfs4_stateid VAR_7;
  enum pnfs_iomode VAR_8;

  VAR_6 = FUNC_4(VAR_4, &VAR_7, &VAR_8);
  FUNC_8(&VAR_2->i_lock);
  if (VAR_6)
   FUNC_5(VAR_4, &VAR_7, VAR_8, 0);
 } else {
  FUNC_8(&VAR_2->i_lock);
  FUNC_1(VAR_2, 0);
 }
}
