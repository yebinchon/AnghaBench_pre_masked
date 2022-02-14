
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pnfs_layout_range {int length; int offset; int iomode; } ;
struct TYPE_10__ {int seqid; } ;
struct pnfs_layout_hdr {TYPE_4__ plh_stateid; } ;
struct inode {int i_lock; } ;
struct TYPE_9__ {int seqid; } ;
typedef TYPE_1__ nfs4_stateid ;
struct TYPE_11__ {struct pnfs_layout_hdr* layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_8__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct pnfs_layout_hdr*) ;
 int FUNC_7 (struct pnfs_layout_hdr*,int *,struct pnfs_layout_range*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

bool FUNC_10(nfs4_stateid *VAR_4,
  struct pnfs_layout_range *VAR_5,
  struct inode *VAR_6)
{
 struct pnfs_layout_hdr *VAR_7;
 struct pnfs_layout_range VAR_8 = {
  .iomode = VAR_1,
  .offset = 0,
  .length = VAR_2,
 };
 bool VAR_9 = 0;
 FUNC_0(VAR_3);
 int VAR_10;

 FUNC_8(&VAR_6->i_lock);
 VAR_7 = FUNC_1(VAR_6)->layout;
 if (VAR_7 && FUNC_6(VAR_7) &&
     FUNC_3(VAR_4, &VAR_7->plh_stateid)) {

  if (!FUNC_2(&VAR_7->plh_stateid, VAR_4)) {
   FUNC_4(VAR_4);
   VAR_9 = 1;
   goto out;
  }

  VAR_10 = FUNC_7(VAR_7, &VAR_3, &VAR_8, 0);
  if (VAR_10 != -VAR_0) {
   VAR_4->seqid = VAR_7->plh_stateid.seqid;
   *VAR_5 = VAR_8;
   VAR_9 = 1;
  }
 }
out:
 FUNC_9(&VAR_6->i_lock);
 FUNC_5(&VAR_3);
 return VAR_9;
}
