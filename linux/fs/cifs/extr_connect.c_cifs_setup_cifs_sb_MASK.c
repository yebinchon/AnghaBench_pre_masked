
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {scalar_t__ prepath; scalar_t__ dynperm; scalar_t__ cifs_acl; scalar_t__ sfu_emul; scalar_t__ mfsymlinks; scalar_t__ cache_rw; scalar_t__ cache_ro; scalar_t__ direct_io; scalar_t__ strict_io; scalar_t__ multiuser; scalar_t__ fsc; scalar_t__ override_gid; scalar_t__ override_uid; int backupgid; scalar_t__ backupgid_specified; int backupuid; scalar_t__ backupuid_specified; scalar_t__ mode_ace; scalar_t__ rwpidforward; scalar_t__ mand_lock; scalar_t__ nostrictsync; scalar_t__ nohandlecache; scalar_t__ nobrl; scalar_t__ no_xattr; scalar_t__ sfu_remap; scalar_t__ remap; scalar_t__ server_ino; scalar_t__ setuidfromacl; scalar_t__ setuids; scalar_t__ noperm; scalar_t__ nodfs; int local_nls; int actimeo; int dir_mode; int file_mode; int linux_gid; int linux_uid; int wsize; int rsize; int bsize; } ;
struct cifs_sb_info {int mnt_cifs_flags; int * prepath; int mnt_backupgid; int mnt_backupuid; int local_nls; int actimeo; int mnt_dir_mode; int mnt_file_mode; int mnt_gid; int mnt_uid; int wsize; int rsize; int bsize; int tlink_tree; int tlink_tree_lock; int prune_tlinks; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int *,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_33 ;
 int * FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct smb_vol *VAR_34,
   struct cifs_sb_info *VAR_35)
{
 FUNC_0(&VAR_35->prune_tlinks, VAR_33);

 FUNC_3(&VAR_35->tlink_tree_lock);
 VAR_35->tlink_tree = VAR_31;

 VAR_35->bsize = VAR_34->bsize;




 VAR_35->rsize = VAR_34->rsize;
 VAR_35->wsize = VAR_34->wsize;

 VAR_35->mnt_uid = VAR_34->linux_uid;
 VAR_35->mnt_gid = VAR_34->linux_gid;
 VAR_35->mnt_file_mode = VAR_34->file_mode;
 VAR_35->mnt_dir_mode = VAR_34->dir_mode;
 FUNC_1(VAR_29, "file mode: 0x%hx  dir mode: 0x%hx\n",
   VAR_35->mnt_file_mode, VAR_35->mnt_dir_mode);

 VAR_35->actimeo = VAR_34->actimeo;
 VAR_35->local_nls = VAR_34->local_nls;

 if (VAR_34->nodfs)
  VAR_35->mnt_cifs_flags |= VAR_14;
 if (VAR_34->noperm)
  VAR_35->mnt_cifs_flags |= VAR_16;
 if (VAR_34->setuids)
  VAR_35->mnt_cifs_flags |= VAR_24;
 if (VAR_34->setuidfromacl)
  VAR_35->mnt_cifs_flags |= VAR_26;
 if (VAR_34->server_ino)
  VAR_35->mnt_cifs_flags |= VAR_23;
 if (VAR_34->remap)
  VAR_35->mnt_cifs_flags |= VAR_6;
 if (VAR_34->sfu_remap)
  VAR_35->mnt_cifs_flags |= VAR_7;
 if (VAR_34->no_xattr)
  VAR_35->mnt_cifs_flags |= VAR_17;
 if (VAR_34->sfu_emul)
  VAR_35->mnt_cifs_flags |= VAR_27;
 if (VAR_34->nobrl)
  VAR_35->mnt_cifs_flags |= VAR_13;
 if (VAR_34->nohandlecache)
  VAR_35->mnt_cifs_flags |= VAR_15;
 if (VAR_34->nostrictsync)
  VAR_35->mnt_cifs_flags |= VAR_12;
 if (VAR_34->mand_lock)
  VAR_35->mnt_cifs_flags |= VAR_11;
 if (VAR_34->rwpidforward)
  VAR_35->mnt_cifs_flags |= VAR_21;
 if (VAR_34->mode_ace)
  VAR_35->mnt_cifs_flags |= VAR_9;
 if (VAR_34->cifs_acl)
  VAR_35->mnt_cifs_flags |= VAR_0;
 if (VAR_34->backupuid_specified) {
  VAR_35->mnt_cifs_flags |= VAR_2;
  VAR_35->mnt_backupuid = VAR_34->backupuid;
 }
 if (VAR_34->backupgid_specified) {
  VAR_35->mnt_cifs_flags |= VAR_1;
  VAR_35->mnt_backupgid = VAR_34->backupgid;
 }
 if (VAR_34->override_uid)
  VAR_35->mnt_cifs_flags |= VAR_19;
 if (VAR_34->override_gid)
  VAR_35->mnt_cifs_flags |= VAR_18;
 if (VAR_34->dynperm)
  VAR_35->mnt_cifs_flags |= VAR_4;
 if (VAR_34->fsc)
  VAR_35->mnt_cifs_flags |= VAR_5;
 if (VAR_34->multiuser)
  VAR_35->mnt_cifs_flags |= (VAR_10 |
         VAR_16);
 if (VAR_34->strict_io)
  VAR_35->mnt_cifs_flags |= VAR_25;
 if (VAR_34->direct_io) {
  FUNC_1(VAR_29, "mounting share using direct i/o\n");
  VAR_35->mnt_cifs_flags |= VAR_3;
 }
 if (VAR_34->cache_ro) {
  FUNC_1(VAR_32, "mounting share with read only caching. Ensure that the share will not be modified while in use.\n");
  VAR_35->mnt_cifs_flags |= VAR_20;
 } else if (VAR_34->cache_rw) {
  FUNC_1(VAR_32, "mounting share in single client RW caching mode. Ensure that no other systems will be accessing the share.\n");
  VAR_35->mnt_cifs_flags |= (VAR_20 |
         VAR_22);
 }
 if (VAR_34->mfsymlinks) {
  if (VAR_34->sfu_emul) {
   FUNC_1(VAR_32, "mount options mfsymlinks and sfu both enabled\n");
  }
  VAR_35->mnt_cifs_flags |= VAR_8;
 }

 if ((VAR_34->cifs_acl) && (VAR_34->dynperm))
  FUNC_1(VAR_32, "mount option dynperm ignored if cifsacl mount option supported\n");

 if (VAR_34->prepath) {
  VAR_35->prepath = FUNC_2(VAR_34->prepath, VAR_30);
  if (VAR_35->prepath == ((void*)0))
   return -VAR_28;
 }

 return 0;
}
