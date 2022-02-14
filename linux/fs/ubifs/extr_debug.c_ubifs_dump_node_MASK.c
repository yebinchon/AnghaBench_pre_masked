
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_trun_node {int new_size; int old_size; int inum; } ;
struct ubifs_sb_node {int uuid; int time_gran; int fmt_version; int rp_gid; int rp_uid; int rp_size; int default_compr; int lsave_cnt; int fanout; int jhead_cnt; int orph_lebs; int lpt_lebs; int log_lebs; int max_bud_bytes; int max_leb_cnt; int leb_cnt; int leb_size; int min_io_size; scalar_t__ key_fmt; scalar_t__ key_hash; int flags; } ;
struct ubifs_ref_node {int jhead; int offs; int lnum; } ;
struct ubifs_pad_node {int pad_len; } ;
struct ubifs_orph_node {int * inos; int cmt_no; } ;
struct ubifs_mst_node {int total_dark; int total_dead; int total_used; int total_dirty; int total_free; int idx_lebs; int empty_lebs; int leb_cnt; int lscan_lnum; int lsave_offs; int lsave_lnum; int ltab_offs; int ltab_lnum; int nhead_offs; int nhead_lnum; int lpt_offs; int lpt_lnum; int index_size; int ihead_offs; int ihead_lnum; int gc_lnum; int root_len; int root_offs; int root_lnum; int log_lnum; int flags; int cmt_no; int highest_inum; } ;
struct ubifs_ino_node {int data_len; int compr_type; int xattr_names; int xattr_size; int xattr_cnt; int flags; int mode; int gid; int uid; int ctime_nsec; int ctime_sec; int mtime_nsec; int mtime_sec; int atime_nsec; int atime_sec; int nlink; int size; int creat_sqnum; int key; } ;
struct ubifs_info {int fanout; } ;
struct ubifs_idx_node {int level; int child_cnt; } ;
struct ubifs_dent_node {char* name; scalar_t__ type; int inum; int key; int nlen; } ;
struct ubifs_data_node {int data; int compr_type; int size; int key; } ;
struct ubifs_ch {int node_type; int len; int magic; } ;
struct ubifs_branch {int len; int offs; int lnum; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;

 int VAR_4 ;


 int VAR_5 ;

 unsigned int VAR_6 ;
 unsigned int VAR_7 ;


 int VAR_8 ;

 scalar_t__ VAR_9 ;

 int VAR_10 ;





 int VAR_11 ;
 int FUNC_0 (struct ubifs_info const*,union ubifs_key*,char*,int) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char) ;
 int FUNC_5 (struct ubifs_info const*,int *,union ubifs_key*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*,int ,int,int,void*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct ubifs_branch* FUNC_14 (struct ubifs_info const*,struct ubifs_idx_node const*,int) ;

void FUNC_15(const struct ubifs_info *VAR_12, const void *VAR_13)
{
 int VAR_14, VAR_15;
 union ubifs_key VAR_16;
 const struct ubifs_ch *VAR_17 = VAR_13;
 char VAR_18[VAR_0];


 if (FUNC_7(VAR_17->magic) != VAR_9) {
  FUNC_10("Not a node, first %zu bytes:", VAR_4);
  FUNC_11(VAR_2, "", VAR_1, 32, 1,
          (void *)VAR_13, VAR_4, 1);
  return;
 }

 FUNC_12(&VAR_11);
 FUNC_1(VAR_13);

 switch (VAR_17->node_type) {
 case 132:
 {
  const struct ubifs_pad_node *VAR_19 = VAR_13;

  FUNC_10("\tpad_len        %u\n", FUNC_7(VAR_19->pad_len));
  break;
 }
 case 130:
 {
  const struct ubifs_sb_node *VAR_20 = VAR_13;
  unsigned int VAR_21 = FUNC_7(VAR_20->flags);

  FUNC_10("\tkey_hash       %d (%s)\n",
         (int)VAR_20->key_hash, FUNC_3(VAR_20->key_hash));
  FUNC_10("\tkey_fmt        %d (%s)\n",
         (int)VAR_20->key_fmt, FUNC_2(VAR_20->key_fmt));
  FUNC_10("\tflags          %#x\n", VAR_21);
  FUNC_10("\tbig_lpt        %u\n",
         !!(VAR_21 & VAR_6));
  FUNC_10("\tspace_fixup    %u\n",
         !!(VAR_21 & VAR_7));
  FUNC_10("\tmin_io_size    %u\n", FUNC_7(VAR_20->min_io_size));
  FUNC_10("\tleb_size       %u\n", FUNC_7(VAR_20->leb_size));
  FUNC_10("\tleb_cnt        %u\n", FUNC_7(VAR_20->leb_cnt));
  FUNC_10("\tmax_leb_cnt    %u\n", FUNC_7(VAR_20->max_leb_cnt));
  FUNC_10("\tmax_bud_bytes  %llu\n",
         (unsigned long long)FUNC_8(VAR_20->max_bud_bytes));
  FUNC_10("\tlog_lebs       %u\n", FUNC_7(VAR_20->log_lebs));
  FUNC_10("\tlpt_lebs       %u\n", FUNC_7(VAR_20->lpt_lebs));
  FUNC_10("\torph_lebs      %u\n", FUNC_7(VAR_20->orph_lebs));
  FUNC_10("\tjhead_cnt      %u\n", FUNC_7(VAR_20->jhead_cnt));
  FUNC_10("\tfanout         %u\n", FUNC_7(VAR_20->fanout));
  FUNC_10("\tlsave_cnt      %u\n", FUNC_7(VAR_20->lsave_cnt));
  FUNC_10("\tdefault_compr  %u\n",
         (int)FUNC_6(VAR_20->default_compr));
  FUNC_10("\trp_size        %llu\n",
         (unsigned long long)FUNC_8(VAR_20->rp_size));
  FUNC_10("\trp_uid         %u\n", FUNC_7(VAR_20->rp_uid));
  FUNC_10("\trp_gid         %u\n", FUNC_7(VAR_20->rp_gid));
  FUNC_10("\tfmt_version    %u\n", FUNC_7(VAR_20->fmt_version));
  FUNC_10("\ttime_gran      %u\n", FUNC_7(VAR_20->time_gran));
  FUNC_10("\tUUID           %pUB\n", VAR_20->uuid);
  break;
 }
 case 134:
 {
  const struct ubifs_mst_node *VAR_22 = VAR_13;

  FUNC_10("\thighest_inum   %llu\n",
         (unsigned long long)FUNC_8(VAR_22->highest_inum));
  FUNC_10("\tcommit number  %llu\n",
         (unsigned long long)FUNC_8(VAR_22->cmt_no));
  FUNC_10("\tflags          %#x\n", FUNC_7(VAR_22->flags));
  FUNC_10("\tlog_lnum       %u\n", FUNC_7(VAR_22->log_lnum));
  FUNC_10("\troot_lnum      %u\n", FUNC_7(VAR_22->root_lnum));
  FUNC_10("\troot_offs      %u\n", FUNC_7(VAR_22->root_offs));
  FUNC_10("\troot_len       %u\n", FUNC_7(VAR_22->root_len));
  FUNC_10("\tgc_lnum        %u\n", FUNC_7(VAR_22->gc_lnum));
  FUNC_10("\tihead_lnum     %u\n", FUNC_7(VAR_22->ihead_lnum));
  FUNC_10("\tihead_offs     %u\n", FUNC_7(VAR_22->ihead_offs));
  FUNC_10("\tindex_size     %llu\n",
         (unsigned long long)FUNC_8(VAR_22->index_size));
  FUNC_10("\tlpt_lnum       %u\n", FUNC_7(VAR_22->lpt_lnum));
  FUNC_10("\tlpt_offs       %u\n", FUNC_7(VAR_22->lpt_offs));
  FUNC_10("\tnhead_lnum     %u\n", FUNC_7(VAR_22->nhead_lnum));
  FUNC_10("\tnhead_offs     %u\n", FUNC_7(VAR_22->nhead_offs));
  FUNC_10("\tltab_lnum      %u\n", FUNC_7(VAR_22->ltab_lnum));
  FUNC_10("\tltab_offs      %u\n", FUNC_7(VAR_22->ltab_offs));
  FUNC_10("\tlsave_lnum     %u\n", FUNC_7(VAR_22->lsave_lnum));
  FUNC_10("\tlsave_offs     %u\n", FUNC_7(VAR_22->lsave_offs));
  FUNC_10("\tlscan_lnum     %u\n", FUNC_7(VAR_22->lscan_lnum));
  FUNC_10("\tleb_cnt        %u\n", FUNC_7(VAR_22->leb_cnt));
  FUNC_10("\tempty_lebs     %u\n", FUNC_7(VAR_22->empty_lebs));
  FUNC_10("\tidx_lebs       %u\n", FUNC_7(VAR_22->idx_lebs));
  FUNC_10("\ttotal_free     %llu\n",
         (unsigned long long)FUNC_8(VAR_22->total_free));
  FUNC_10("\ttotal_dirty    %llu\n",
         (unsigned long long)FUNC_8(VAR_22->total_dirty));
  FUNC_10("\ttotal_used     %llu\n",
         (unsigned long long)FUNC_8(VAR_22->total_used));
  FUNC_10("\ttotal_dead     %llu\n",
         (unsigned long long)FUNC_8(VAR_22->total_dead));
  FUNC_10("\ttotal_dark     %llu\n",
         (unsigned long long)FUNC_8(VAR_22->total_dark));
  break;
 }
 case 131:
 {
  const struct ubifs_ref_node *VAR_23 = VAR_13;

  FUNC_10("\tlnum           %u\n", FUNC_7(VAR_23->lnum));
  FUNC_10("\toffs           %u\n", FUNC_7(VAR_23->offs));
  FUNC_10("\tjhead          %u\n", FUNC_7(VAR_23->jhead));
  break;
 }
 case 135:
 {
  const struct ubifs_ino_node *VAR_24 = VAR_13;

  FUNC_5(VAR_12, &VAR_24->key, &VAR_16);
  FUNC_10("\tkey            %s\n",
         FUNC_0(VAR_12, &VAR_16, VAR_18, VAR_0));
  FUNC_10("\tcreat_sqnum    %llu\n",
         (unsigned long long)FUNC_8(VAR_24->creat_sqnum));
  FUNC_10("\tsize           %llu\n",
         (unsigned long long)FUNC_8(VAR_24->size));
  FUNC_10("\tnlink          %u\n", FUNC_7(VAR_24->nlink));
  FUNC_10("\tatime          %lld.%u\n",
         (long long)FUNC_8(VAR_24->atime_sec),
         FUNC_7(VAR_24->atime_nsec));
  FUNC_10("\tmtime          %lld.%u\n",
         (long long)FUNC_8(VAR_24->mtime_sec),
         FUNC_7(VAR_24->mtime_nsec));
  FUNC_10("\tctime          %lld.%u\n",
         (long long)FUNC_8(VAR_24->ctime_sec),
         FUNC_7(VAR_24->ctime_nsec));
  FUNC_10("\tuid            %u\n", FUNC_7(VAR_24->uid));
  FUNC_10("\tgid            %u\n", FUNC_7(VAR_24->gid));
  FUNC_10("\tmode           %u\n", FUNC_7(VAR_24->mode));
  FUNC_10("\tflags          %#x\n", FUNC_7(VAR_24->flags));
  FUNC_10("\txattr_cnt      %u\n", FUNC_7(VAR_24->xattr_cnt));
  FUNC_10("\txattr_size     %u\n", FUNC_7(VAR_24->xattr_size));
  FUNC_10("\txattr_names    %u\n", FUNC_7(VAR_24->xattr_names));
  FUNC_10("\tcompr_type     %#x\n",
         (int)FUNC_6(VAR_24->compr_type));
  FUNC_10("\tdata len       %u\n", FUNC_7(VAR_24->data_len));
  break;
 }
 case 137:
 case 128:
 {
  const struct ubifs_dent_node *VAR_25 = VAR_13;
  int VAR_26 = FUNC_6(VAR_25->nlen);

  FUNC_5(VAR_12, &VAR_25->key, &VAR_16);
  FUNC_10("\tkey            %s\n",
         FUNC_0(VAR_12, &VAR_16, VAR_18, VAR_0));
  FUNC_10("\tinum           %llu\n",
         (unsigned long long)FUNC_8(VAR_25->inum));
  FUNC_10("\ttype           %d\n", (int)VAR_25->type);
  FUNC_10("\tnlen           %d\n", VAR_26);
  FUNC_10("\tname           ");

  if (VAR_26 > VAR_8)
   FUNC_10("(bad name length, not printing, bad or corrupted node)");
  else {
   for (VAR_14 = 0; VAR_14 < VAR_26 && VAR_25->name[VAR_14]; VAR_14++)
    FUNC_9("%c", FUNC_4(VAR_25->name[VAR_14]) ?
     VAR_25->name[VAR_14] : '?');
  }
  FUNC_9("\n");

  break;
 }
 case 138:
 {
  const struct ubifs_data_node *VAR_27 = VAR_13;
  int VAR_28 = FUNC_7(VAR_17->len) - VAR_5;

  FUNC_5(VAR_12, &VAR_27->key, &VAR_16);
  FUNC_10("\tkey            %s\n",
         FUNC_0(VAR_12, &VAR_16, VAR_18, VAR_0));
  FUNC_10("\tsize           %u\n", FUNC_7(VAR_27->size));
  FUNC_10("\tcompr_typ      %d\n",
         (int)FUNC_6(VAR_27->compr_type));
  FUNC_10("\tdata size      %d\n", VAR_28);
  FUNC_10("\tdata:\n");
  FUNC_11(VAR_2, "\t", VAR_1, 32, 1,
          (void *)&VAR_27->data, VAR_28, 0);
  break;
 }
 case 129:
 {
  const struct ubifs_trun_node *VAR_29 = VAR_13;

  FUNC_10("\tinum           %u\n", FUNC_7(VAR_29->inum));
  FUNC_10("\told_size       %llu\n",
         (unsigned long long)FUNC_8(VAR_29->old_size));
  FUNC_10("\tnew_size       %llu\n",
         (unsigned long long)FUNC_8(VAR_29->new_size));
  break;
 }
 case 136:
 {
  const struct ubifs_idx_node *VAR_30 = VAR_13;

  VAR_15 = FUNC_6(VAR_30->child_cnt);
  FUNC_10("\tchild_cnt      %d\n", VAR_15);
  FUNC_10("\tlevel          %d\n", (int)FUNC_6(VAR_30->level));
  FUNC_10("\tBranches:\n");

  for (VAR_14 = 0; VAR_14 < VAR_15 && VAR_14 < VAR_12->fanout - 1; VAR_14++) {
   const struct ubifs_branch *VAR_31;

   VAR_31 = FUNC_14(VAR_12, VAR_30, VAR_14);
   FUNC_5(VAR_12, &VAR_31->key, &VAR_16);
   FUNC_10("\t%d: LEB %d:%d len %d key %s\n",
          VAR_14, FUNC_7(VAR_31->lnum), FUNC_7(VAR_31->offs),
          FUNC_7(VAR_31->len),
          FUNC_0(VAR_12, &VAR_16, VAR_18,
      VAR_0));
  }
  break;
 }
 case 139:
  break;
 case 133:
 {
  const struct ubifs_orph_node *VAR_32 = VAR_13;

  FUNC_10("\tcommit number  %llu\n",
         (unsigned long long)
    FUNC_8(VAR_32->cmt_no) & VAR_3);
  FUNC_10("\tlast node flag %llu\n",
         (unsigned long long)(FUNC_8(VAR_32->cmt_no)) >> 63);
  VAR_15 = (FUNC_7(VAR_17->len) - VAR_10) >> 3;
  FUNC_10("\t%d orphan inode numbers:\n", VAR_15);
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
   FUNC_10("\t  ino %llu\n",
          (unsigned long long)FUNC_8(VAR_32->inos[VAR_14]));
  break;
 }
 case 140:
 {
  break;
 }
 default:
  FUNC_10("node type %d was not recognized\n",
         (int)VAR_17->node_type);
 }
 FUNC_13(&VAR_11);
}
