
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct file {int f_pos; struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_2__* ses; scalar_t__ unix_ext; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct TYPE_8__ {int endOfSearch; int info_level; } ;
struct cifsFileInfo {int invalidHandle; TYPE_4__ srch_inf; int fid; struct tcon_link* tlink; int file_info_lock; } ;
struct TCP_Server_Info {TYPE_3__* ops; TYPE_1__* vals; } ;
typedef int __u16 ;
struct TYPE_7__ {int (* query_dir_first ) (unsigned int const,struct cifs_tcon*,char*,struct cifs_sb_info*,int *,int,TYPE_4__*) ;} ;
struct TYPE_6__ {int capabilities; struct TCP_Server_Info* server; } ;
struct TYPE_5__ {int cap_nt_find; } ;


 struct cifs_sb_info* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 int FUNC_2 (struct tcon_link*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (struct cifs_sb_info*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,int ) ;
 struct tcon_link* FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 struct tcon_link* FUNC_8 (struct cifs_sb_info*) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (char*) ;
 struct cifsFileInfo* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (unsigned int const,struct cifs_tcon*,char*,struct cifs_sb_info*,int *,int,TYPE_4__*) ;
 struct cifs_tcon* FUNC_14 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_15(const unsigned int VAR_13, struct file *VAR_14)
{
 __u16 VAR_15;
 int VAR_16 = 0;
 char *VAR_17 = ((void*)0);
 struct cifsFileInfo *VAR_18;
 struct cifs_sb_info *VAR_19 = FUNC_0(VAR_14);
 struct tcon_link *VAR_20 = ((void*)0);
 struct cifs_tcon *VAR_21;
 struct TCP_Server_Info *VAR_22;

 if (VAR_14->private_data == ((void*)0)) {
  VAR_20 = FUNC_8(VAR_19);
  if (FUNC_1(VAR_20))
   return FUNC_2(VAR_20);

  VAR_18 = FUNC_11(sizeof(struct cifsFileInfo), VAR_8);
  if (VAR_18 == ((void*)0)) {
   VAR_16 = -VAR_4;
   goto error_exit;
  }
  FUNC_12(&VAR_18->file_info_lock);
  VAR_14->private_data = VAR_18;
  VAR_18->tlink = FUNC_6(VAR_20);
  VAR_21 = FUNC_14(VAR_20);
 } else {
  VAR_18 = VAR_14->private_data;
  VAR_21 = FUNC_14(VAR_18->tlink);
 }

 VAR_22 = VAR_21->ses->server;

 if (!VAR_22->ops->query_dir_first) {
  VAR_16 = -VAR_5;
  goto error_exit;
 }

 VAR_18->invalidHandle = 1;
 VAR_18->srch_inf.endOfSearch = 0;

 VAR_17 = FUNC_4(FUNC_9(VAR_14));
 if (VAR_17 == ((void*)0)) {
  VAR_16 = -VAR_4;
  goto error_exit;
 }

 FUNC_5(VAR_7, "Full path: %s start at: %lld\n", VAR_17, VAR_14->f_pos);

ffirst_retry:



 if (VAR_21->unix_ext)
  VAR_18->srch_inf.info_level = VAR_12;
 else if ((VAR_21->ses->capabilities &
    VAR_21->ses->server->vals->cap_nt_find) == 0) {
  VAR_18->srch_inf.info_level = VAR_11;
 } else if (VAR_19->mnt_cifs_flags & VAR_0) {
  VAR_18->srch_inf.info_level = VAR_10;
 } else {
  VAR_18->srch_inf.info_level = VAR_9;
 }

 VAR_15 = VAR_2 | VAR_3;
 if (FUNC_3(VAR_19))
  VAR_15 |= VAR_1;

 VAR_16 = VAR_22->ops->query_dir_first(VAR_13, VAR_21, VAR_17, VAR_19,
       &VAR_18->fid, VAR_15,
       &VAR_18->srch_inf);

 if (VAR_16 == 0)
  VAR_18->invalidHandle = 0;



 else if ((VAR_16 == -VAR_6) &&
  (VAR_19->mnt_cifs_flags & VAR_0)) {
  VAR_19->mnt_cifs_flags &= ~VAR_0;
  goto ffirst_retry;
 }
error_exit:
 FUNC_10(VAR_17);
 FUNC_7(VAR_20);
 return VAR_16;
}
