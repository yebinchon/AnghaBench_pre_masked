
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {TYPE_2__* ses; int tid; } ;
struct cifsInodeInfo {int cifsAttrs; } ;
struct TYPE_3__ {int persistent_fid; int volatile_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; int pid; int dentry; } ;
typedef scalar_t__ loff_t ;
typedef int __le64 ;
struct TYPE_4__ {int Suid; } ;


 int FUNC_0 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_1 (struct inode*) ;
 long VAR_0 ;
 int VAR_1 ;
 long FUNC_2 (unsigned int,struct cifs_tcon*,int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (unsigned int,struct cifs_tcon*,struct cifsFileInfo*,struct inode*,int) ;
 int FUNC_9 (unsigned int,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (unsigned int,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (unsigned int,int ,int ,int ,scalar_t__,scalar_t__,long) ;

__attribute__((used)) static long FUNC_12(struct file *VAR_2, struct cifs_tcon *VAR_3,
       loff_t VAR_4, loff_t VAR_5, bool VAR_6)
{
 struct inode *VAR_7;
 struct cifsInodeInfo *VAR_8;
 struct cifsFileInfo *VAR_9 = VAR_2->private_data;
 long VAR_10 = -VAR_0;
 unsigned int VAR_11;
 __le64 VAR_12;

 VAR_11 = FUNC_6();

 VAR_7 = FUNC_4(VAR_9->dentry);
 VAR_8 = FUNC_1(VAR_7);

 FUNC_10(VAR_11, VAR_9->fid.persistent_fid, VAR_3->tid,
    VAR_3->ses->Suid, VAR_4, VAR_5);

 if (!FUNC_0(VAR_8))
  if (VAR_6 == 0) {
   FUNC_11(VAR_11, VAR_9->fid.persistent_fid,
    VAR_3->tid, VAR_3->ses->Suid, VAR_4, VAR_5, VAR_10);
   FUNC_5(VAR_11);
   return VAR_10;
  }






 if ((VAR_8->cifsAttrs & VAR_1) == 0) {
  if (VAR_6 == 1)
   VAR_10 = 0;

  else if (FUNC_7(VAR_7) >= VAR_4 + VAR_5)

   VAR_10 = 0;

  else
   VAR_10 = -VAR_0;
  if (VAR_10)
   FUNC_11(VAR_11, VAR_9->fid.persistent_fid,
    VAR_3->tid, VAR_3->ses->Suid, VAR_4, VAR_5, VAR_10);
  else
   FUNC_9(VAR_11, VAR_9->fid.persistent_fid,
    VAR_3->tid, VAR_3->ses->Suid, VAR_4, VAR_5);
  FUNC_5(VAR_11);
  return VAR_10;
 }

 if ((VAR_6 == 1) || (FUNC_7(VAR_7) >= VAR_4 + VAR_5)) {
  if ((VAR_4 > 8192) || (VAR_4 + VAR_5 + 8192 < FUNC_7(VAR_7))) {
   VAR_10 = -VAR_0;
   FUNC_11(VAR_11, VAR_9->fid.persistent_fid,
    VAR_3->tid, VAR_3->ses->Suid, VAR_4, VAR_5, VAR_10);
   FUNC_5(VAR_11);
   return VAR_10;
  }

  FUNC_8(VAR_11, VAR_3, VAR_9, VAR_7, 0);
  VAR_10 = 0;
 } else {
  FUNC_8(VAR_11, VAR_3, VAR_9, VAR_7, 0);
  VAR_10 = 0;
  if (FUNC_7(VAR_7) < VAR_4 + VAR_5) {
   VAR_12 = FUNC_3(VAR_4 + VAR_5);
   VAR_10 = FUNC_2(VAR_11, VAR_3, VAR_9->fid.persistent_fid,
       VAR_9->fid.volatile_fid, VAR_9->pid,
       &VAR_12);
  }
 }

 if (VAR_10)
  FUNC_11(VAR_11, VAR_9->fid.persistent_fid, VAR_3->tid,
    VAR_3->ses->Suid, VAR_4, VAR_5, VAR_10);
 else
  FUNC_9(VAR_11, VAR_9->fid.persistent_fid, VAR_3->tid,
    VAR_3->ses->Suid, VAR_4, VAR_5);

 FUNC_5(VAR_11);
 return VAR_10;
}
