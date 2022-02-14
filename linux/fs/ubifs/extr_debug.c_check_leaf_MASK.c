
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_zbranch {scalar_t__ len; int offs; int lnum; int key; } ;
struct ubifs_info {scalar_t__ max_sqnum; } ;
struct ubifs_dent_node {scalar_t__ type; int nlen; int key; int inum; } ;
struct ubifs_data_node {int size; int key; } ;
struct ubifs_ch {int sqnum; } ;
struct fsck_inode {long long size; int references; int calc_xcnt; int calc_xnms; int calc_cnt; int calc_sz; int calc_xsz; } ;
typedef scalar_t__ ino_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct fsck_inode*) ;
 int FUNC_3 (struct fsck_inode*) ;
 long long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct fsck_inode* FUNC_4 (struct ubifs_info*,void*,void*) ;
 long long FUNC_5 (struct ubifs_info*,int *) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,int *) ;
 int FUNC_7 (struct ubifs_info*,int *) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 struct fsck_inode* FUNC_13 (struct ubifs_info*,void*,scalar_t__) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,void*) ;
 int FUNC_16 (struct ubifs_info*,char*,int,...) ;
 int FUNC_17 (struct ubifs_info*,char*,int ,int ) ;
 int FUNC_18 (struct ubifs_info*,struct ubifs_zbranch*,void*) ;
 int FUNC_19 (struct ubifs_info*,struct ubifs_dent_node*) ;

__attribute__((used)) static int FUNC_20(struct ubifs_info *VAR_12, struct ubifs_zbranch *VAR_13,
        void *VAR_14)
{
 ino_t VAR_15;
 void *VAR_16;
 struct ubifs_ch *VAR_17;
 int VAR_18, VAR_19 = FUNC_7(VAR_12, &VAR_13->key);
 struct fsck_inode *VAR_20;

 if (VAR_13->len < VAR_4) {
  FUNC_16(VAR_12, "bad leaf length %d (LEB %d:%d)",
     VAR_13->len, VAR_13->lnum, VAR_13->offs);
  return -VAR_0;
 }

 VAR_16 = FUNC_9(VAR_13->len, VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_18 = FUNC_18(VAR_12, VAR_13, VAR_16);
 if (VAR_18) {
  FUNC_16(VAR_12, "cannot read leaf node at LEB %d:%d, error %d",
     VAR_13->lnum, VAR_13->offs, VAR_18);
  goto out_free;
 }


 if (VAR_19 == VAR_9) {
  VAR_20 = FUNC_4(VAR_12, VAR_14, VAR_16);
  if (FUNC_2(VAR_20)) {
   VAR_18 = FUNC_3(VAR_20);
   FUNC_16(VAR_12, "error %d while adding inode node", VAR_18);
   goto out_dump;
  }
  goto out;
 }

 if (VAR_19 != VAR_7 && VAR_19 != VAR_11 &&
     VAR_19 != VAR_5) {
  FUNC_16(VAR_12, "unexpected node type %d at LEB %d:%d",
     VAR_19, VAR_13->lnum, VAR_13->offs);
  VAR_18 = -VAR_0;
  goto out_free;
 }

 VAR_17 = VAR_16;
 if (FUNC_12(VAR_17->sqnum) > VAR_12->max_sqnum) {
  FUNC_16(VAR_12, "too high sequence number, max. is %llu",
     VAR_12->max_sqnum);
  VAR_18 = -VAR_0;
  goto out_dump;
 }

 if (VAR_19 == VAR_5) {
  long long VAR_21;
  struct ubifs_data_node *VAR_22 = VAR_16;

  FUNC_14(VAR_12, VAR_13->len >= VAR_6);





  VAR_15 = FUNC_6(VAR_12, &VAR_22->key);
  VAR_20 = FUNC_13(VAR_12, VAR_14, VAR_15);
  if (FUNC_2(VAR_20)) {
   VAR_18 = FUNC_3(VAR_20);
   FUNC_16(VAR_12, "error %d while processing data node and trying to find inode node %lu",
      VAR_18, (unsigned long)VAR_15);
   goto out_dump;
  }


  VAR_21 = FUNC_5(VAR_12, &VAR_22->key);
  VAR_21 <<= VAR_3;
  VAR_21 += FUNC_11(VAR_22->size);
  if (VAR_21 > VAR_20->size) {
   FUNC_16(VAR_12, "data node at LEB %d:%d is not within inode size %lld",
      VAR_13->lnum, VAR_13->offs, VAR_20->size);
   VAR_18 = -VAR_0;
   goto out_dump;
  }
 } else {
  int VAR_23;
  struct ubifs_dent_node *VAR_24 = VAR_16;
  struct fsck_inode *VAR_25;

  FUNC_14(VAR_12, VAR_13->len >= VAR_8);

  VAR_18 = FUNC_19(VAR_12, VAR_24);
  if (VAR_18)
   goto out_dump;





  VAR_15 = FUNC_12(VAR_24->inum);
  VAR_20 = FUNC_13(VAR_12, VAR_14, VAR_15);
  if (FUNC_2(VAR_20)) {
   VAR_18 = FUNC_3(VAR_20);
   FUNC_16(VAR_12, "error %d while processing entry node and trying to find inode node %lu",
      VAR_18, (unsigned long)VAR_15);
   goto out_dump;
  }


  VAR_20->references += 1;

  VAR_15 = FUNC_6(VAR_12, &VAR_24->key);
  VAR_25 = FUNC_13(VAR_12, VAR_14, VAR_15);
  if (FUNC_2(VAR_25)) {
   VAR_18 = FUNC_3(VAR_25);
   FUNC_16(VAR_12, "error %d while processing entry node and trying to find parent inode node %lu",
      VAR_18, (unsigned long)VAR_15);
   goto out_dump;
  }

  VAR_23 = FUNC_10(VAR_24->nlen);
  if (VAR_19 == VAR_11) {
   VAR_25->calc_xcnt += 1;
   VAR_25->calc_xsz += FUNC_0(VAR_23);
   VAR_25->calc_xsz += FUNC_1(VAR_20->size);
   VAR_25->calc_xnms += VAR_23;
  } else {
   VAR_25->calc_sz += FUNC_0(VAR_23);
   if (VAR_24->type == VAR_10)
    VAR_25->calc_cnt += 1;
  }
 }

out:
 FUNC_8(VAR_16);
 return 0;

out_dump:
 FUNC_17(VAR_12, "dump of node at LEB %d:%d", VAR_13->lnum, VAR_13->offs);
 FUNC_15(VAR_12, VAR_16);
out_free:
 FUNC_8(VAR_16);
 return VAR_18;
}
