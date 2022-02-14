
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_inode {unsigned long attrtimeo_timestamp; int access_cache; int attrtimeo; int cache_validity; int attr_gencount; int read_cache_jiffies; scalar_t__ read_io; scalar_t__ write_io; void** cookieverf; } ;
struct nfs_find_desc {struct nfs_fattr* fattr; struct nfs_fh* fh; } ;
struct nfs_fh {int dummy; } ;
struct TYPE_10__ {int used; } ;
struct TYPE_9__ {scalar_t__ blocks; } ;
struct TYPE_11__ {TYPE_2__ nfs3; TYPE_1__ nfs2; } ;
struct nfs_fattr {int valid; TYPE_3__ du; int gid; int uid; int nlink; int size; int change_attr; int ctime; int mtime; int atime; int gencount; int time_start; int rdev; int mode; int mounted_on_fileid; int fileid; } ;
struct nfs4_label {int dummy; } ;
struct TYPE_15__ {int * a_ops; } ;
struct inode {int i_state; unsigned long i_ino; int i_flags; int i_count; TYPE_4__* i_sb; scalar_t__ i_blocks; int i_gid; int i_uid; scalar_t__ i_size; void* i_ctime; void* i_mtime; void* i_atime; int i_mode; int * i_op; int * i_fop; TYPE_7__ i_data; } ;
struct TYPE_16__ {TYPE_6__* nfs_client; } ;
struct TYPE_14__ {TYPE_5__* rpc_ops; } ;
struct TYPE_13__ {int * dir_inode_ops; int * file_ops; int * file_inode_ops; } ;
struct TYPE_12__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct nfs_inode* FUNC_2 (struct inode*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (struct inode*) ;
 TYPE_8__* FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,int ,...) ;
 struct inode* FUNC_12 (struct super_block*,unsigned long,int ,int ,struct nfs_find_desc*) ;
 int FUNC_13 (struct inode*,int ,int ) ;
 int VAR_36 ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int ) ;
 int FUNC_16 (struct inode*) ;
 unsigned long VAR_37 ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (void**,int ,int) ;
 int FUNC_20 (struct super_block*,struct nfs_fattr*) ;
 scalar_t__ FUNC_21 (struct nfs_fattr*) ;
 scalar_t__ FUNC_22 (int ) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_23 (struct nfs_fh*) ;
 unsigned long FUNC_24 (struct nfs_fattr*) ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_25 (struct inode*) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_26 (struct inode*,struct nfs_fattr*) ;
 scalar_t__ FUNC_27 (struct inode*,int ) ;
 int FUNC_28 (struct inode*,int ) ;
 int FUNC_29 (struct inode*,struct nfs_fattr*,struct nfs4_label*) ;
 scalar_t__ FUNC_30 (int ) ;
 int VAR_45 ;
 int FUNC_31 (struct inode*,int ) ;
 void* FUNC_32 (int ) ;
 int FUNC_33 (struct inode*) ;

struct inode *
FUNC_34(struct super_block *VAR_46, struct nfs_fh *VAR_47, struct nfs_fattr *VAR_48, struct nfs4_label *VAR_49)
{
 struct nfs_find_desc VAR_50 = {
  .fh = VAR_47,
  .fattr = VAR_48
 };
 struct inode *VAR_51 = FUNC_0(-VAR_0);
 unsigned long VAR_52;

 FUNC_20(VAR_46, VAR_48);

 if (FUNC_21(VAR_48))
  VAR_48->fileid = VAR_48->mounted_on_fileid;
 else if ((VAR_48->valid & VAR_7) == 0)
  goto out_no_inode;
 if ((VAR_48->valid & VAR_16) == 0)
  goto out_no_inode;

 VAR_52 = FUNC_24(VAR_48);

 VAR_51 = FUNC_12(VAR_46, VAR_52, VAR_41, VAR_42, &VAR_50);
 if (VAR_51 == ((void*)0)) {
  VAR_51 = FUNC_0(-VAR_1);
  goto out_no_inode;
 }

 if (VAR_51->i_state & VAR_2) {
  struct nfs_inode *VAR_53 = FUNC_2(VAR_51);
  unsigned long VAR_54 = VAR_37;



  VAR_51->i_ino = VAR_52;


  VAR_51->i_flags |= VAR_34|VAR_35;
  VAR_51->i_mode = VAR_48->mode;
  VAR_53->cache_validity = 0;
  if ((VAR_48->valid & VAR_9) == 0
    && FUNC_27(VAR_51, VAR_20))
   FUNC_28(VAR_51, VAR_29);



  VAR_51->i_op = FUNC_4(VAR_46)->nfs_client->rpc_ops->file_inode_ops;
  if (FUNC_8(VAR_51->i_mode)) {
   VAR_51->i_fop = FUNC_4(VAR_46)->nfs_client->rpc_ops->file_ops;
   VAR_51->i_data.a_ops = &VAR_40;
  } else if (FUNC_6(VAR_51->i_mode)) {
   VAR_51->i_op = FUNC_4(VAR_46)->nfs_client->rpc_ops->dir_inode_ops;
   VAR_51->i_fop = &VAR_39;
   VAR_51->i_data.a_ops = &VAR_38;

   if (VAR_48->valid & VAR_10 ||
     VAR_48->valid & VAR_17) {
    if (VAR_48->valid & VAR_17)
     VAR_51->i_op = &VAR_44;
    else
     VAR_51->i_op = &VAR_43;
    VAR_51->i_fop = ((void*)0);
    VAR_51->i_flags |= VAR_33;
   }
  } else if (FUNC_7(VAR_51->i_mode)) {
   VAR_51->i_op = &VAR_45;
   FUNC_14(VAR_51);
  } else
   FUNC_13(VAR_51, VAR_51->i_mode, VAR_48->rdev);

  FUNC_19(&VAR_51->i_atime, 0, sizeof(VAR_51->i_atime));
  FUNC_19(&VAR_51->i_mtime, 0, sizeof(VAR_51->i_mtime));
  FUNC_19(&VAR_51->i_ctime, 0, sizeof(VAR_51->i_ctime));
  FUNC_15(VAR_51, 0);
  VAR_51->i_size = 0;
  FUNC_10(VAR_51);
  VAR_51->i_uid = FUNC_18(&VAR_36, -2);
  VAR_51->i_gid = FUNC_17(&VAR_36, -2);
  VAR_51->i_blocks = 0;
  FUNC_19(VAR_53->cookieverf, 0, sizeof(VAR_53->cookieverf));
  VAR_53->write_io = 0;
  VAR_53->read_io = 0;

  VAR_53->read_cache_jiffies = VAR_48->time_start;
  VAR_53->attr_gencount = VAR_48->gencount;
  if (VAR_48->valid & VAR_3)
   VAR_51->i_atime = FUNC_32(VAR_48->atime);
  else if (FUNC_27(VAR_51, VAR_18))
   FUNC_28(VAR_51, VAR_25);
  if (VAR_48->valid & VAR_11)
   VAR_51->i_mtime = FUNC_32(VAR_48->mtime);
  else if (FUNC_27(VAR_51, VAR_21))
   FUNC_28(VAR_51, VAR_28);
  if (VAR_48->valid & VAR_6)
   VAR_51->i_ctime = FUNC_32(VAR_48->ctime);
  else if (FUNC_27(VAR_51, VAR_19))
   FUNC_28(VAR_51, VAR_27);
  if (VAR_48->valid & VAR_5)
   FUNC_15(VAR_51, VAR_48->change_attr);
  else
   FUNC_28(VAR_51, VAR_26);
  if (VAR_48->valid & VAR_14)
   VAR_51->i_size = FUNC_30(VAR_48->size);
  else
   FUNC_28(VAR_51, VAR_30);
  if (VAR_48->valid & VAR_12)
   FUNC_31(VAR_51, VAR_48->nlink);
  else if (FUNC_27(VAR_51, VAR_22))
   FUNC_28(VAR_51, VAR_29);
  if (VAR_48->valid & VAR_13)
   VAR_51->i_uid = VAR_48->uid;
  else if (FUNC_27(VAR_51, VAR_23))
   FUNC_28(VAR_51, VAR_29);
  if (VAR_48->valid & VAR_8)
   VAR_51->i_gid = VAR_48->gid;
  else if (FUNC_27(VAR_51, VAR_24))
   FUNC_28(VAR_51, VAR_29);
  if (VAR_48->valid & VAR_4)
   VAR_51->i_blocks = VAR_48->du.nfs2.blocks;
  if (VAR_48->valid & VAR_15) {



   VAR_51->i_blocks = FUNC_22(VAR_48->du.nfs3.used);
  }

  if (VAR_53->cache_validity != 0)
   VAR_53->cache_validity |= VAR_31;

  FUNC_29(VAR_51, VAR_48, VAR_49);

  VAR_53->attrtimeo = FUNC_3(VAR_51);
  VAR_53->attrtimeo_timestamp = VAR_54;
  VAR_53->access_cache = VAR_32;

  FUNC_25(VAR_51);

  FUNC_33(VAR_51);
 } else {
  int VAR_55 = FUNC_26(VAR_51, VAR_48);
  if (VAR_55 < 0) {
   FUNC_16(VAR_51);
   VAR_51 = FUNC_0(VAR_55);
   goto out_no_inode;
  }
 }
 FUNC_11("NFS: nfs_fhget(%s/%Lu fh_crc=0x%08x ct=%d)\n",
  VAR_51->i_sb->s_id,
  (unsigned long long)FUNC_1(VAR_51),
  FUNC_23(VAR_47),
  FUNC_9(&VAR_51->i_count));

out:
 return VAR_51;

out_no_inode:
 FUNC_11("nfs_fhget: iget failed with error %ld\n", FUNC_5(VAR_51));
 goto out;
}
