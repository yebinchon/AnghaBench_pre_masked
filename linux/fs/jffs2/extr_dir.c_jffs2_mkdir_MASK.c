
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
typedef int uint32_t ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_raw_inode {int nsize; void* mctime; void* name_crc; void* node_crc; int type; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; } ;
struct jffs2_raw_dirent {int nsize; void* mctime; void* name_crc; void* node_crc; int type; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; } ;
struct jffs2_inode_info {int highest_version; int sem; int dents; struct jffs2_full_dnode* metadata; TYPE_1__* inocache; } ;
struct jffs2_full_dnode {int i_ino; int i_ctime; int i_mtime; int * i_fop; int * i_op; int i_sb; } ;
struct jffs2_full_dirent {int i_ino; int i_ctime; int i_mtime; int * i_fop; int * i_op; int i_sb; } ;
struct inode {int i_ino; int i_ctime; int i_mtime; int * i_fop; int * i_op; int i_sb; } ;
struct TYPE_4__ {int len; struct jffs2_raw_inode* name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_3__ {int pino_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct jffs2_full_dnode*) ;
 int FUNC_1 (int ) ;
 struct jffs2_inode_info* FUNC_2 (struct jffs2_full_dnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 struct jffs2_sb_info* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (struct jffs2_full_dnode*) ;
 int VAR_6 ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ,struct jffs2_raw_inode*,int) ;
 int FUNC_10 (struct dentry*,struct jffs2_full_dnode*) ;
 int FUNC_11 (struct jffs2_full_dnode*) ;
 int FUNC_12 (struct jffs2_full_dnode*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (struct jffs2_sb_info*,struct jffs2_full_dnode*,int *) ;
 struct jffs2_raw_inode* FUNC_15 () ;
 struct jffs2_raw_inode* FUNC_16 () ;
 int FUNC_17 (struct jffs2_sb_info*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (struct jffs2_raw_inode*) ;
 int FUNC_19 (struct jffs2_raw_inode*) ;
 int FUNC_20 (struct jffs2_full_dnode*) ;
 int FUNC_21 (struct jffs2_full_dnode*,struct jffs2_full_dnode*,TYPE_2__*) ;
 struct jffs2_full_dnode* FUNC_22 (struct jffs2_full_dnode*,int ,struct jffs2_raw_inode*) ;
 int FUNC_23 (struct jffs2_sb_info*,int,int *,int ,int ) ;
 struct jffs2_full_dnode* FUNC_24 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_raw_inode*,struct jffs2_raw_inode*,int,int ) ;
 struct jffs2_full_dnode* FUNC_25 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_raw_inode*,int *,int ,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct jffs2_full_dnode*,int) ;

__attribute__((used)) static int FUNC_29 (struct inode *VAR_9, struct dentry *VAR_10, umode_t VAR_11)
{
 struct jffs2_inode_info *VAR_12, *VAR_13;
 struct jffs2_sb_info *VAR_14;
 struct inode *VAR_15;
 struct jffs2_raw_inode *VAR_16;
 struct jffs2_raw_dirent *VAR_17;
 struct jffs2_full_dnode *VAR_18;
 struct jffs2_full_dirent *VAR_19;
 int VAR_20;
 uint32_t VAR_21;
 int VAR_22;

 VAR_11 |= VAR_6;

 VAR_16 = FUNC_16();
 if (!VAR_16)
  return -VAR_2;

 VAR_14 = FUNC_4(VAR_9->i_sb);




 VAR_20 = VAR_10->d_name.len;
 VAR_22 = FUNC_23(VAR_14, sizeof(*VAR_16), &VAR_21, VAR_0,
      VAR_5);

 if (VAR_22) {
  FUNC_19(VAR_16);
  return VAR_22;
 }

 VAR_15 = FUNC_22(VAR_9, VAR_11, VAR_16);

 if (FUNC_0(VAR_15)) {
  FUNC_19(VAR_16);
  FUNC_17(VAR_14);
  return FUNC_6(VAR_15);
 }

 VAR_15->i_op = &VAR_7;
 VAR_15->i_fop = &VAR_8;

 VAR_12 = FUNC_2(VAR_15);


 FUNC_28(VAR_15, 2);

 VAR_12->inocache->pino_nlink = VAR_9->i_ino;

 VAR_16->data_crc = FUNC_8(0);
 VAR_16->node_crc = FUNC_8(FUNC_9(0, VAR_16, sizeof(*VAR_16)-8));

 VAR_18 = FUNC_25(VAR_14, VAR_12, VAR_16, ((void*)0), 0, VAR_0);

 FUNC_19(VAR_16);

 if (FUNC_0(VAR_18)) {

  FUNC_27(&VAR_12->sem);
  FUNC_17(VAR_14);
  VAR_22 = FUNC_6(VAR_18);
  goto fail;
 }



 VAR_12->metadata = VAR_18;
 FUNC_27(&VAR_12->sem);

 FUNC_17(VAR_14);

 VAR_22 = FUNC_21(VAR_15, VAR_9, &VAR_10->d_name);
 if (VAR_22)
  goto fail;

 VAR_22 = FUNC_20(VAR_15);
 if (VAR_22)
  goto fail;

 VAR_22 = FUNC_23(VAR_14, sizeof(*VAR_17)+VAR_20, &VAR_21,
      VAR_0, FUNC_5(VAR_20));
 if (VAR_22)
  goto fail;

 VAR_17 = FUNC_15();
 if (!VAR_17) {

  FUNC_17(VAR_14);
  VAR_22 = -VAR_2;
  goto fail;
 }

 VAR_13 = FUNC_2(VAR_9);
 FUNC_26(&VAR_13->sem);

 VAR_17->magic = FUNC_7(VAR_3);
 VAR_17->nodetype = FUNC_7(VAR_4);
 VAR_17->totlen = FUNC_8(sizeof(*VAR_17) + VAR_20);
 VAR_17->hdr_crc = FUNC_8(FUNC_9(0, VAR_17, sizeof(struct jffs2_unknown_node)-4));

 VAR_17->pino = FUNC_8(VAR_9->i_ino);
 VAR_17->version = FUNC_8(++VAR_13->highest_version);
 VAR_17->ino = FUNC_8(VAR_15->i_ino);
 VAR_17->mctime = FUNC_8(FUNC_3());
 VAR_17->nsize = VAR_20;
 VAR_17->type = VAR_1;
 VAR_17->node_crc = FUNC_8(FUNC_9(0, VAR_17, sizeof(*VAR_17)-8));
 VAR_17->name_crc = FUNC_8(FUNC_9(0, VAR_10->d_name.name, VAR_20));

 VAR_19 = FUNC_24(VAR_14, VAR_13, VAR_17, VAR_10->d_name.name, VAR_20, VAR_0);

 if (FUNC_0(VAR_19)) {


  FUNC_17(VAR_14);
  FUNC_18(VAR_17);
  FUNC_27(&VAR_13->sem);
  VAR_22 = FUNC_6(VAR_19);
  goto fail;
 }

 VAR_9->i_mtime = VAR_9->i_ctime = FUNC_1(FUNC_13(VAR_17->mctime));
 FUNC_12(VAR_9);

 FUNC_18(VAR_17);



 FUNC_14(VAR_14, VAR_19, &VAR_13->dents);

 FUNC_27(&VAR_13->sem);
 FUNC_17(VAR_14);

 FUNC_10(VAR_10, VAR_15);
 return 0;

 fail:
 FUNC_11(VAR_15);
 return VAR_22;
}
