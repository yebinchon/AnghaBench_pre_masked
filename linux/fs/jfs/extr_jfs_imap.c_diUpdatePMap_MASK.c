
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tblock {int lsn; int clsn; int synclist; int sb; } ;
struct metapage {int lsn; int clsn; int synclist; struct jfs_log* log; scalar_t__ data; } ;
struct jfs_log {int count; } ;
struct inomap {int im_nextiag; } ;
struct inode {int i_sb; } ;
struct iag {int * pmap; int * wmap; } ;
struct TYPE_4__ {struct inomap* i_imap; } ;
struct TYPE_3__ {struct jfs_log* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (struct jfs_log*,unsigned long) ;
 int FUNC_6 (struct jfs_log*,unsigned long) ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct inomap*,int,struct metapage**) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int,int,struct jfs_log*) ;
 int FUNC_15 (struct metapage*) ;
 int FUNC_16 (struct metapage*) ;
 int FUNC_17 (struct metapage*) ;

int
FUNC_18(struct inode *VAR_6,
      unsigned long VAR_7, bool VAR_8, struct tblock * VAR_9)
{
 int VAR_10;
 struct iag *VAR_11;
 struct metapage *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 struct inomap *VAR_17;
 u32 VAR_18;
 struct jfs_log *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 unsigned long VAR_23;

 VAR_17 = FUNC_3(VAR_6)->i_imap;

 VAR_13 = FUNC_0(VAR_7);

 if (VAR_13 >= VAR_17->im_nextiag) {
  FUNC_10(VAR_6->i_sb, "the iag is outside the map\n");
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_5);
 VAR_10 = FUNC_9(VAR_17, VAR_13, &VAR_12);
 FUNC_2(VAR_6);
 if (VAR_10)
  return (VAR_10);
 FUNC_15(VAR_12);
 VAR_11 = (struct iag *) VAR_12->data;



 VAR_14 = VAR_7 & (VAR_3 - 1);
 VAR_15 = VAR_14 >> VAR_4;
 VAR_16 = VAR_14 & (VAR_2 - 1);
 VAR_18 = VAR_1 >> VAR_16;



 if (VAR_8) {





  if (!(FUNC_11(VAR_11->wmap[VAR_15]) & VAR_18)) {
   FUNC_10(VAR_6->i_sb,
      "inode %ld not marked as allocated in wmap!\n",
      VAR_7);
  }
  if (!(FUNC_11(VAR_11->pmap[VAR_15]) & VAR_18)) {
   FUNC_10(VAR_6->i_sb,
      "inode %ld not marked as allocated in pmap!\n",
      VAR_7);
  }

  VAR_11->pmap[VAR_15] &= FUNC_8(~VAR_18);
 }



 else {



  if (!(FUNC_11(VAR_11->wmap[VAR_15]) & VAR_18)) {
   FUNC_16(VAR_12);
   FUNC_10(VAR_6->i_sb,
      "the inode is not allocated in the working map\n");
   return -VAR_0;
  }
  if ((FUNC_11(VAR_11->pmap[VAR_15]) & VAR_18) != 0) {
   FUNC_16(VAR_12);
   FUNC_10(VAR_6->i_sb,
      "the inode is not free in the persistent map\n");
   return -VAR_0;
  }

  VAR_11->pmap[VAR_15] |= FUNC_8(VAR_18);
 }



 VAR_20 = VAR_9->lsn;
 VAR_19 = FUNC_4(VAR_9->sb)->log;
 FUNC_5(VAR_19, VAR_23);
 if (VAR_12->lsn != 0) {

  FUNC_14(VAR_21, VAR_20, VAR_19);
  FUNC_14(VAR_22, VAR_12->lsn, VAR_19);
  if (VAR_21 < VAR_22) {
   VAR_12->lsn = VAR_20;

   FUNC_13(&VAR_12->synclist, &VAR_9->synclist);
  }

  FUNC_7(VAR_12->clsn);
  FUNC_14(VAR_21, VAR_9->clsn, VAR_19);
  FUNC_14(VAR_22, VAR_12->clsn, VAR_19);
  if (VAR_21 > VAR_22)
   VAR_12->clsn = VAR_9->clsn;
 } else {
  VAR_12->log = VAR_19;
  VAR_12->lsn = VAR_20;

  VAR_19->count++;
  FUNC_12(&VAR_12->synclist, &VAR_9->synclist);
  VAR_12->clsn = VAR_9->clsn;
 }
 FUNC_6(VAR_19, VAR_23);
 FUNC_17(VAR_12);
 return (0);
}
