
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {TYPE_1__* i_sb; int i_mapping; } ;
struct file_allocated_range_buffer {void* length; void* file_offset; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {int dummy; } ;
struct cifsInodeInfo {int cifsAttrs; } ;
struct TYPE_4__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_2__ fid; int dentry; } ;
typedef scalar_t__ loff_t ;
typedef int in_data ;
struct TYPE_3__ {int s_maxbytes; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int,struct cifs_tcon*,int ,int ,int ,int,char*,int,int,char**,int*) ;
 int FUNC_2 (struct cifsFileInfo*) ;
 void* FUNC_3 (scalar_t__) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct cifsFileInfo* FUNC_6 (struct cifsInodeInfo*,int) ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (struct file*,scalar_t__,int) ;
 unsigned int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct file_allocated_range_buffer*) ;
 scalar_t__ FUNC_12 (void*) ;
 int FUNC_13 (unsigned int,struct cifs_tcon*,TYPE_2__*) ;
 scalar_t__ FUNC_14 (struct file*,scalar_t__,int ) ;

__attribute__((used)) static loff_t FUNC_15(struct file *VAR_7, struct cifs_tcon *VAR_8, loff_t VAR_9, int VAR_10)
{
 struct cifsFileInfo *VAR_11, *VAR_12 = VAR_7->private_data;
 struct cifsInodeInfo *VAR_13;
 struct inode *VAR_14;
 int VAR_15 = 0;
 struct file_allocated_range_buffer VAR_16, *VAR_17 = ((void*)0);
 u32 VAR_18;
 unsigned int VAR_19;

 if (VAR_10 != VAR_6 && VAR_10 != VAR_5)
  return FUNC_8(VAR_7, VAR_9, VAR_10);

 VAR_14 = FUNC_4(VAR_12->dentry);
 VAR_13 = FUNC_0(VAR_14);

 if (VAR_9 < 0 || VAR_9 >= FUNC_10(VAR_14))
  return -VAR_2;

 VAR_19 = FUNC_9();







 VAR_11 = FUNC_6(VAR_13, 0);
 if (VAR_11) {
  FUNC_5(VAR_14->i_mapping);
  FUNC_13(VAR_19, VAR_8, &VAR_11->fid);
  FUNC_2(VAR_11);
 }

 if (!(VAR_13->cifsAttrs & VAR_3)) {
  if (VAR_10 == VAR_6)
   VAR_9 = FUNC_10(VAR_14);
  goto lseek_exit;
 }

 VAR_16.file_offset = FUNC_3(VAR_9);
 VAR_16.length = FUNC_3(FUNC_10(VAR_14));

 VAR_15 = FUNC_1(VAR_19, VAR_8, VAR_12->fid.persistent_fid,
   VAR_12->fid.volatile_fid,
   VAR_4, 1,
   (char *)&VAR_16, sizeof(VAR_16),
   sizeof(struct file_allocated_range_buffer),
   (char **)&VAR_17, &VAR_18);
 if (VAR_15 == -VAR_0)
  VAR_15 = 0;
 if (VAR_15)
  goto lseek_exit;

 if (VAR_10 == VAR_6 && VAR_18 == 0)
  goto lseek_exit;

 if (VAR_10 == VAR_5 && VAR_18 == 0) {
  VAR_15 = -VAR_2;
  goto lseek_exit;
 }

 if (VAR_18 < sizeof(struct file_allocated_range_buffer)) {
  VAR_15 = -VAR_1;
  goto lseek_exit;
 }
 if (VAR_10 == VAR_5) {
  VAR_9 = FUNC_12(VAR_17->file_offset);
  goto lseek_exit;
 }
 if (VAR_9 < FUNC_12(VAR_17->file_offset))
  goto lseek_exit;

 VAR_9 = FUNC_12(VAR_17->file_offset) + FUNC_12(VAR_17->length);

 lseek_exit:
 FUNC_7(VAR_19);
 FUNC_11(VAR_17);
 if (!VAR_15)
  return FUNC_14(VAR_7, VAR_9, VAR_14->i_sb->s_maxbytes);
 else
  return VAR_15;
}
