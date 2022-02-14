
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct win_dev {void* minor; void* major; int type; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifs_open_parms {int create_options; char* path; int reconnect; struct cifs_fid* fid; int disposition; int desired_access; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; } ;
struct cifs_fid {int dummy; } ;
typedef int dev_t ;
typedef scalar_t__ __u32 ;
struct TYPE_8__ {int tgid; } ;
struct TYPE_7__ {TYPE_2__* server; } ;
struct TYPE_6__ {TYPE_1__* ops; scalar_t__ oplocks; } ;
struct TYPE_5__ {int (* open ) (unsigned int,struct cifs_open_parms*,scalar_t__*,int *) ;int (* sync_write ) (unsigned int,struct cifs_fid*,struct cifs_io_parms*,unsigned int*,struct kvec*,int) ;int (* close ) (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;} ;
typedef int FILE_ALL_INFO ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct cifs_sb_info*) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int ) ;
 TYPE_4__* VAR_11 ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int,int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (unsigned int,struct cifs_open_parms*,scalar_t__*,int *) ;
 int FUNC_13 (unsigned int,struct cifs_fid*,struct cifs_io_parms*,unsigned int*,struct kvec*,int) ;
 int FUNC_14 (unsigned int,struct cifs_fid*,struct cifs_io_parms*,unsigned int*,struct kvec*,int) ;
 int FUNC_15 (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;

__attribute__((used)) static int
FUNC_16(unsigned int VAR_12, struct inode *VAR_13,
        struct dentry *VAR_14, struct cifs_tcon *VAR_15,
        char *VAR_16, umode_t VAR_17, dev_t VAR_18)
{
 struct cifs_sb_info *VAR_19 = FUNC_0(VAR_13->i_sb);
 int VAR_20 = -VAR_5;
 int VAR_21 = VAR_1 | VAR_3;
 FILE_ALL_INFO *VAR_22 = ((void*)0);
 struct cifs_io_parms VAR_23;
 __u32 VAR_24 = 0;
 struct cifs_fid VAR_25;
 struct cifs_open_parms VAR_26;
 unsigned int VAR_27;
 struct win_dev *VAR_28;
 struct kvec VAR_29[2];







 if (!(VAR_19->mnt_cifs_flags & VAR_0))
  goto out;







 if (!FUNC_4(VAR_17) && !FUNC_3(VAR_17))
  goto out;

 FUNC_6(VAR_7, "sfu compat create special file\n");

 VAR_22 = FUNC_10(sizeof(FILE_ALL_INFO), VAR_9);
 if (VAR_22 == ((void*)0)) {
  VAR_20 = -VAR_4;
  goto out;
 }

 if (FUNC_5(VAR_19))
  VAR_21 |= VAR_2;

 VAR_26.tcon = VAR_15;
 VAR_26.cifs_sb = VAR_19;
 VAR_26.desired_access = VAR_8;
 VAR_26.create_options = VAR_21;
 VAR_26.disposition = VAR_6;
 VAR_26.path = VAR_16;
 VAR_26.fid = &VAR_25;
 VAR_26.reconnect = 0;

 if (VAR_15->ses->server->oplocks)
  VAR_24 = VAR_10;
 else
  VAR_24 = 0;
 VAR_20 = VAR_15->ses->server->ops->open(VAR_12, &VAR_26, &VAR_24, VAR_22);
 if (VAR_20)
  goto out;






 VAR_28 = (struct win_dev *)VAR_22;
 VAR_23.pid = VAR_11->tgid;
 VAR_23.tcon = VAR_15;
 VAR_23.offset = 0;
 VAR_23.length = sizeof(struct win_dev);
 VAR_29[1].iov_base = VAR_22;
 VAR_29[1].iov_len = sizeof(struct win_dev);
 if (FUNC_4(VAR_17)) {
  FUNC_11(VAR_28->type, "IntxCHR", 8);
  VAR_28->major = FUNC_7(FUNC_1(VAR_18));
  VAR_28->minor = FUNC_7(FUNC_2(VAR_18));
  VAR_20 = VAR_15->ses->server->ops->sync_write(VAR_12, &VAR_25, &VAR_23,
       &VAR_27, VAR_29, 1);
 } else if (FUNC_3(VAR_17)) {
  FUNC_11(VAR_28->type, "IntxBLK", 8);
  VAR_28->major = FUNC_7(FUNC_1(VAR_18));
  VAR_28->minor = FUNC_7(FUNC_2(VAR_18));
  VAR_20 = VAR_15->ses->server->ops->sync_write(VAR_12, &VAR_25, &VAR_23,
       &VAR_27, VAR_29, 1);
 }
 VAR_15->ses->server->ops->close(VAR_12, VAR_15, &VAR_25);
 FUNC_8(VAR_14);


out:
 FUNC_9(VAR_22);
 return VAR_20;
}
