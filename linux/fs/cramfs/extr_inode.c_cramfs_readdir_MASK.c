
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {unsigned int i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct dir_context {unsigned int pos; } ;
struct cramfs_inode {int namelen; int mode; } ;
typedef int ino_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 struct cramfs_inode* FUNC_1 (struct super_block*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct cramfs_inode*,scalar_t__) ;
 int FUNC_3 (struct dir_context*,char*,int,int ,int) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct file *VAR_6, struct dir_context *VAR_7)
{
 struct inode *VAR_8 = FUNC_4(VAR_6);
 struct super_block *VAR_9 = VAR_8->i_sb;
 char *VAR_10;
 unsigned int VAR_11;


 if (VAR_7->pos >= VAR_8->i_size)
  return 0;
 VAR_11 = VAR_7->pos;

 if (VAR_11 & 3)
  return -VAR_1;

 VAR_10 = FUNC_6(VAR_0, VAR_4);
 if (!VAR_10)
  return -VAR_3;

 while (VAR_11 < VAR_8->i_size) {
  struct cramfs_inode *VAR_12;
  unsigned long VAR_13;
  char *VAR_14;
  ino_t VAR_15;
  umode_t VAR_16;
  int VAR_17;

  FUNC_8(&VAR_5);
  VAR_12 = FUNC_1(VAR_9, FUNC_0(VAR_8) + VAR_11, sizeof(*VAR_12)+VAR_0);
  VAR_14 = (char *)(VAR_12+1);






  VAR_17 = VAR_12->namelen << 2;
  FUNC_7(VAR_10, VAR_14, VAR_17);
  VAR_15 = FUNC_2(VAR_12, FUNC_0(VAR_8) + VAR_11);
  VAR_16 = VAR_12->mode;
  FUNC_9(&VAR_5);
  VAR_13 = VAR_11 + sizeof(*VAR_12) + VAR_17;
  for (;;) {
   if (!VAR_17) {
    FUNC_5(VAR_10);
    return -VAR_2;
   }
   if (VAR_10[VAR_17-1])
    break;
   VAR_17--;
  }
  if (!FUNC_3(VAR_7, VAR_10, VAR_17, VAR_15, VAR_16 >> 12))
   break;

  VAR_7->pos = VAR_11 = VAR_13;
 }
 FUNC_5(VAR_10);
 return 0;
}
