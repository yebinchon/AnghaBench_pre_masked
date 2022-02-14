
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_lock {int fl_end; int fl_start; int fl_type; int fl_flags; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_3__ {int Capability; } ;
struct cifs_tcon {TYPE_1__ fsUnixInfo; TYPE_2__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsFileInfo {int tlink; } ;
typedef int __u32 ;
struct TYPE_4__ {int server; } ;


 struct cifs_sb_info* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct file*,struct file_lock*,int ,int,int,int) ;
 int FUNC_5 (struct file_lock*,int *,int*,int*,int*,int ) ;
 int FUNC_6 (struct file*,struct file_lock*,int ,int,int,int,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 struct cifs_tcon* FUNC_10 (int ) ;

int FUNC_11(struct file *VAR_5, int VAR_6, struct file_lock *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10 = 0, VAR_11 = 0;
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 struct cifs_sb_info *VAR_14;
 struct cifs_tcon *VAR_15;
 struct cifsFileInfo *VAR_16;
 __u32 VAR_17;

 VAR_8 = -VAR_2;
 VAR_9 = FUNC_8();

 FUNC_3(VAR_4, "Lock parm: 0x%x flockflags: 0x%x flocktype: 0x%x start: %lld end: %lld\n",
   VAR_6, VAR_7->fl_flags, VAR_7->fl_type,
   VAR_7->fl_start, VAR_7->fl_end);

 VAR_16 = (struct cifsFileInfo *)VAR_5->private_data;
 VAR_15 = FUNC_10(VAR_16->tlink);

 FUNC_5(VAR_7, &VAR_17, &VAR_10, &VAR_11, &VAR_12,
   VAR_15->ses->server);
 VAR_14 = FUNC_0(VAR_5);

 if (FUNC_2(VAR_15->ses) &&
     (VAR_1 & FUNC_9(VAR_15->fsUnixInfo.Capability)) &&
     ((VAR_14->mnt_cifs_flags & VAR_0) == 0))
  VAR_13 = 1;




 if (FUNC_1(VAR_6)) {
  VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_17, VAR_12, VAR_13, VAR_9);
  FUNC_7(VAR_9);
  return VAR_8;
 }

 if (!VAR_10 && !VAR_11) {




  FUNC_7(VAR_9);
  return -VAR_3;
 }

 VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_17, VAR_12, VAR_13, VAR_10, VAR_11,
   VAR_9);
 FUNC_7(VAR_9);
 return VAR_8;
}
