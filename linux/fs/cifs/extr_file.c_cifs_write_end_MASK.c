
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {unsigned int i_size; int i_lock; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsFileInfo {int pid; TYPE_1__* dentry; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;
typedef int __u32 ;
struct TYPE_4__ {int tgid; } ;
struct TYPE_3__ {int d_sb; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,char*,struct page*,unsigned int,unsigned int) ;
 int FUNC_6 (struct cifsFileInfo*,int ,char*,unsigned int,unsigned int*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (struct inode*,unsigned int) ;
 char* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_4, struct address_space *VAR_5,
   loff_t VAR_6, unsigned VAR_7, unsigned VAR_8,
   struct page *VAR_9, void *VAR_10)
{
 int VAR_11;
 struct inode *VAR_12 = VAR_5->host;
 struct cifsFileInfo *VAR_13 = VAR_4->private_data;
 struct cifs_sb_info *VAR_14 = FUNC_0(VAR_13->dentry->d_sb);
 __u32 VAR_15;

 if (VAR_14->mnt_cifs_flags & VAR_0)
  VAR_15 = VAR_13->pid;
 else
  VAR_15 = VAR_3->tgid;

 FUNC_5(VAR_1, "write_end for page %p from pos %lld with %d bytes\n",
   VAR_9, VAR_6, VAR_8);

 if (FUNC_2(VAR_9)) {
  if (VAR_8 == VAR_7)
   FUNC_4(VAR_9);
  FUNC_1(VAR_9);
 } else if (!FUNC_3(VAR_9) && VAR_8 == VAR_2)
  FUNC_4(VAR_9);

 if (!FUNC_3(VAR_9)) {
  char *VAR_16;
  unsigned VAR_17 = VAR_6 & (VAR_2 - 1);
  unsigned int VAR_18;

  VAR_18 = FUNC_8();





  VAR_16 = FUNC_10(VAR_9);
  VAR_11 = FUNC_6(VAR_13, VAR_15, VAR_16 + VAR_17, VAR_8, &VAR_6);

  FUNC_11(VAR_9);

  FUNC_7(VAR_18);
 } else {
  VAR_11 = VAR_8;
  VAR_6 += VAR_8;
  FUNC_13(VAR_9);
 }

 if (VAR_11 > 0) {
  FUNC_14(&VAR_12->i_lock);
  if (VAR_6 > VAR_12->i_size)
   FUNC_9(VAR_12, VAR_6);
  FUNC_15(&VAR_12->i_lock);
 }

 FUNC_16(VAR_9);
 FUNC_12(VAR_9);

 return VAR_11;
}
