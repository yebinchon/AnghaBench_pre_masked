
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_zero_data_information {void* BeyondFinalZero; void* FileOffset; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {int dummy; } ;
struct TYPE_2__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; int dentry; } ;
typedef scalar_t__ loff_t ;
typedef int __u8 ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (unsigned int,struct cifs_tcon*,int ,int ,int ,int,char*,int,int ,int *,int *) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (unsigned int,struct cifs_tcon*,struct cifsFileInfo*,struct inode*,int) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_4, struct cifs_tcon *VAR_5,
       loff_t VAR_6, loff_t VAR_7)
{
 struct inode *VAR_8;
 struct cifsFileInfo *VAR_9 = VAR_4->private_data;
 struct file_zero_data_information VAR_10;
 long VAR_11;
 unsigned int VAR_12;
 __u8 VAR_13 = 1;

 VAR_12 = FUNC_5();

 VAR_8 = FUNC_3(VAR_9->dentry);



 if (!FUNC_6(VAR_12, VAR_5, VAR_9, VAR_8, VAR_13)) {
  VAR_11 = -VAR_1;
  FUNC_4(VAR_12);
  return VAR_11;
 }

 FUNC_1(VAR_3, "Offset %lld len %lld\n", VAR_6, VAR_7);

 VAR_10.FileOffset = FUNC_2(VAR_6);
 VAR_10.BeyondFinalZero = FUNC_2(VAR_6 + VAR_7);

 VAR_11 = FUNC_0(VAR_12, VAR_5, VAR_9->fid.persistent_fid,
   VAR_9->fid.volatile_fid, VAR_2,
   1 , (char *)&VAR_10,
   sizeof(struct file_zero_data_information),
   VAR_0, ((void*)0), ((void*)0));
 FUNC_4(VAR_12);
 return VAR_11;
}
