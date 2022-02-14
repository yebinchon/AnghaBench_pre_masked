
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_zero_data_information {void* BeyondFinalZero; void* FileOffset; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {int tid; struct cifs_ses* ses; } ;
struct cifs_ses {int Suid; } ;
struct cifsInodeInfo {int dummy; } ;
struct TYPE_2__ {int persistent_fid; int volatile_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; int pid; int dentry; } ;
typedef scalar_t__ loff_t ;
typedef void* __le64 ;


 int FUNC_0 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_1 (struct inode*) ;
 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_2 (unsigned int,struct cifs_tcon*,int ,int ,int ,int,char*,int,int ,int *,int *) ;
 long FUNC_3 (unsigned int,struct cifs_tcon*,int ,int ,int ,void**) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 struct inode* FUNC_6 (int ) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (unsigned int,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (unsigned int,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (unsigned int,int ,int ,int ,scalar_t__,scalar_t__,long) ;

__attribute__((used)) static long FUNC_13(struct file *VAR_3, struct cifs_tcon *VAR_4,
       loff_t VAR_5, loff_t VAR_6, bool VAR_7)
{
 struct cifs_ses *VAR_8 = VAR_4->ses;
 struct inode *VAR_9;
 struct cifsInodeInfo *VAR_10;
 struct cifsFileInfo *VAR_11 = VAR_3->private_data;
 struct file_zero_data_information VAR_12;
 long VAR_13;
 unsigned int VAR_14;
 __le64 VAR_15;

 VAR_14 = FUNC_8();

 VAR_9 = FUNC_6(VAR_11->dentry);
 VAR_10 = FUNC_1(VAR_9);

 FUNC_11(VAR_14, VAR_11->fid.persistent_fid, VAR_4->tid,
         VAR_8->Suid, VAR_5, VAR_6);



 if (!FUNC_0(VAR_10))
  if (VAR_7 == 0) {
   VAR_13 = -VAR_0;
   FUNC_12(VAR_14, VAR_11->fid.persistent_fid,
    VAR_4->tid, VAR_8->Suid, VAR_5, VAR_6, VAR_13);
   FUNC_7(VAR_14);
   return VAR_13;
  }

 FUNC_4(VAR_2, "Offset %lld len %lld\n", VAR_5, VAR_6);

 VAR_12.FileOffset = FUNC_5(VAR_5);
 VAR_12.BeyondFinalZero = FUNC_5(VAR_5 + VAR_6);

 VAR_13 = FUNC_2(VAR_14, VAR_4, VAR_11->fid.persistent_fid,
   VAR_11->fid.volatile_fid, VAR_1, 1,
   (char *)&VAR_12,
   sizeof(struct file_zero_data_information),
   0, ((void*)0), ((void*)0));
 if (VAR_13)
  goto zero_range_exit;




 if (VAR_7 == 0 && FUNC_9(VAR_9) < VAR_5 + VAR_6) {
  VAR_15 = FUNC_5(VAR_5 + VAR_6);
  VAR_13 = FUNC_3(VAR_14, VAR_4, VAR_11->fid.persistent_fid,
      VAR_11->fid.volatile_fid, VAR_11->pid, &VAR_15);
 }

 zero_range_exit:
 FUNC_7(VAR_14);
 if (VAR_13)
  FUNC_12(VAR_14, VAR_11->fid.persistent_fid, VAR_4->tid,
         VAR_8->Suid, VAR_5, VAR_6, VAR_13);
 else
  FUNC_10(VAR_14, VAR_11->fid.persistent_fid, VAR_4->tid,
         VAR_8->Suid, VAR_5, VAR_6);
 return VAR_13;
}
