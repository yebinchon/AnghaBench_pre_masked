
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union jffs2_device_node {int nsize; int type; void* mctime; void* name_crc; void* node_crc; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; int compr; void* csize; void* dsize; } ;
typedef int umode_t ;
typedef int uint32_t ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_raw_inode {int nsize; int type; void* mctime; void* name_crc; void* node_crc; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; int compr; void* csize; void* dsize; } ;
struct jffs2_raw_dirent {int nsize; int type; void* mctime; void* name_crc; void* node_crc; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; void* data_crc; int compr; void* csize; void* dsize; } ;
struct jffs2_inode_info {int highest_version; int sem; int dents; struct jffs2_full_dnode* metadata; } ;
struct jffs2_full_dnode {int i_ino; int i_ctime; int i_mtime; int i_mode; int * i_op; int i_sb; } ;
struct jffs2_full_dirent {int i_ino; int i_ctime; int i_mtime; int i_mode; int * i_op; int i_sb; } ;
struct inode {int i_ino; int i_ctime; int i_mtime; int i_mode; int * i_op; int i_sb; } ;
struct TYPE_2__ {int len; union jffs2_device_node* name; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct jffs2_full_dnode*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct jffs2_inode_info* FUNC_2 (struct jffs2_full_dnode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 struct jffs2_sb_info* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (struct jffs2_full_dnode*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 void* FUNC_9 (int ) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (int ,union jffs2_device_node*,int) ;
 int FUNC_12 (struct dentry*,struct jffs2_full_dnode*) ;
 int FUNC_13 (struct jffs2_full_dnode*) ;
 int FUNC_14 (struct jffs2_full_dnode*,int ,int ) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (struct jffs2_sb_info*,struct jffs2_full_dnode*,int *) ;
 union jffs2_device_node* FUNC_17 () ;
 union jffs2_device_node* FUNC_18 () ;
 int FUNC_19 (struct jffs2_sb_info*) ;
 int FUNC_20 (union jffs2_device_node*,int ) ;
 int VAR_7 ;
 int FUNC_21 (union jffs2_device_node*) ;
 int FUNC_22 (union jffs2_device_node*) ;
 int FUNC_23 (struct jffs2_full_dnode*) ;
 int FUNC_24 (struct jffs2_full_dnode*,struct jffs2_full_dnode*,TYPE_1__*) ;
 struct jffs2_full_dnode* FUNC_25 (struct jffs2_full_dnode*,int,union jffs2_device_node*) ;
 int FUNC_26 (struct jffs2_sb_info*,int,int *,int ,int ) ;
 struct jffs2_full_dnode* FUNC_27 (struct jffs2_sb_info*,struct jffs2_inode_info*,union jffs2_device_node*,union jffs2_device_node*,int,int ) ;
 struct jffs2_full_dnode* FUNC_28 (struct jffs2_sb_info*,struct jffs2_inode_info*,union jffs2_device_node*,char*,int,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31 (struct inode *VAR_8, struct dentry *VAR_9, umode_t VAR_10, dev_t VAR_11)
{
 struct jffs2_inode_info *VAR_12, *VAR_13;
 struct jffs2_sb_info *VAR_14;
 struct inode *VAR_15;
 struct jffs2_raw_inode *VAR_16;
 struct jffs2_raw_dirent *VAR_17;
 struct jffs2_full_dnode *VAR_18;
 struct jffs2_full_dirent *VAR_19;
 int VAR_20;
 union jffs2_device_node VAR_21;
 int VAR_22 = 0;
 uint32_t VAR_23;
 int VAR_24;

 VAR_16 = FUNC_18();
 if (!VAR_16)
  return -VAR_1;

 VAR_14 = FUNC_4(VAR_8->i_sb);

 if (FUNC_7(VAR_10) || FUNC_8(VAR_10))
  VAR_22 = FUNC_20(&VAR_21, VAR_11);




 VAR_20 = VAR_9->d_name.len;
 VAR_24 = FUNC_26(VAR_14, sizeof(*VAR_16) + VAR_22, &VAR_23,
      VAR_0, VAR_5);

 if (VAR_24) {
  FUNC_22(VAR_16);
  return VAR_24;
 }

 VAR_15 = FUNC_25(VAR_8, VAR_10, VAR_16);

 if (FUNC_0(VAR_15)) {
  FUNC_22(VAR_16);
  FUNC_19(VAR_14);
  return FUNC_6(VAR_15);
 }
 VAR_15->i_op = &VAR_7;
 FUNC_14(VAR_15, VAR_15->i_mode, VAR_11);

 VAR_12 = FUNC_2(VAR_15);

 VAR_16->dsize = VAR_16->csize = FUNC_10(VAR_22);
 VAR_16->totlen = FUNC_10(sizeof(*VAR_16) + VAR_22);
 VAR_16->hdr_crc = FUNC_10(FUNC_11(0, VAR_16, sizeof(struct jffs2_unknown_node)-4));

 VAR_16->compr = VAR_2;
 VAR_16->data_crc = FUNC_10(FUNC_11(0, &VAR_21, VAR_22));
 VAR_16->node_crc = FUNC_10(FUNC_11(0, VAR_16, sizeof(*VAR_16)-8));

 VAR_18 = FUNC_28(VAR_14, VAR_12, VAR_16, (char *)&VAR_21, VAR_22, VAR_0);

 FUNC_22(VAR_16);

 if (FUNC_0(VAR_18)) {

  FUNC_30(&VAR_12->sem);
  FUNC_19(VAR_14);
  VAR_24 = FUNC_6(VAR_18);
  goto fail;
 }



 VAR_12->metadata = VAR_18;
 FUNC_30(&VAR_12->sem);

 FUNC_19(VAR_14);

 VAR_24 = FUNC_24(VAR_15, VAR_8, &VAR_9->d_name);
 if (VAR_24)
  goto fail;

 VAR_24 = FUNC_23(VAR_15);
 if (VAR_24)
  goto fail;

 VAR_24 = FUNC_26(VAR_14, sizeof(*VAR_17)+VAR_20, &VAR_23,
      VAR_0, FUNC_5(VAR_20));
 if (VAR_24)
  goto fail;

 VAR_17 = FUNC_17();
 if (!VAR_17) {

  FUNC_19(VAR_14);
  VAR_24 = -VAR_1;
  goto fail;
 }

 VAR_13 = FUNC_2(VAR_8);
 FUNC_29(&VAR_13->sem);

 VAR_17->magic = FUNC_9(VAR_3);
 VAR_17->nodetype = FUNC_9(VAR_4);
 VAR_17->totlen = FUNC_10(sizeof(*VAR_17) + VAR_20);
 VAR_17->hdr_crc = FUNC_10(FUNC_11(0, VAR_17, sizeof(struct jffs2_unknown_node)-4));

 VAR_17->pino = FUNC_10(VAR_8->i_ino);
 VAR_17->version = FUNC_10(++VAR_13->highest_version);
 VAR_17->ino = FUNC_10(VAR_15->i_ino);
 VAR_17->mctime = FUNC_10(FUNC_3());
 VAR_17->nsize = VAR_20;


 VAR_17->type = (VAR_10 & VAR_6) >> 12;

 VAR_17->node_crc = FUNC_10(FUNC_11(0, VAR_17, sizeof(*VAR_17)-8));
 VAR_17->name_crc = FUNC_10(FUNC_11(0, VAR_9->d_name.name, VAR_20));

 VAR_19 = FUNC_27(VAR_14, VAR_13, VAR_17, VAR_9->d_name.name, VAR_20, VAR_0);

 if (FUNC_0(VAR_19)) {


  FUNC_19(VAR_14);
  FUNC_21(VAR_17);
  FUNC_30(&VAR_13->sem);
  VAR_24 = FUNC_6(VAR_19);
  goto fail;
 }

 VAR_8->i_mtime = VAR_8->i_ctime = FUNC_1(FUNC_15(VAR_17->mctime));

 FUNC_21(VAR_17);



 FUNC_16(VAR_14, VAR_19, &VAR_13->dents);

 FUNC_30(&VAR_13->sem);
 FUNC_19(VAR_14);

 FUNC_12(VAR_9, VAR_15);
 return 0;

 fail:
 FUNC_13(VAR_15);
 return VAR_24;
}
