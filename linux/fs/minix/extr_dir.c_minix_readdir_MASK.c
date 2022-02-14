
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct minix_sb_info {unsigned int s_dirsize; scalar_t__ s_version; int s_namelen; } ;
struct inode {unsigned long i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct dir_context {unsigned long pos; } ;
struct TYPE_3__ {char* name; scalar_t__ inode; } ;
typedef TYPE_1__ minix_dirent ;
struct TYPE_4__ {char* name; scalar_t__ inode; } ;
typedef TYPE_2__ minix3_dirent ;
typedef scalar_t__ __u32 ;


 unsigned long FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct dir_context*,char const*,unsigned int,scalar_t__,int ) ;
 struct page* FUNC_3 (struct inode*,unsigned long) ;
 unsigned long FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 struct inode* FUNC_6 (struct file*) ;
 int FUNC_7 (struct inode*,unsigned long) ;
 char* FUNC_8 (char*,struct minix_sb_info*) ;
 struct minix_sb_info* FUNC_9 (struct super_block*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 unsigned int FUNC_11 (char const*,int ) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_4, struct dir_context *VAR_5)
{
 struct inode *VAR_6 = FUNC_6(VAR_4);
 struct super_block *VAR_7 = VAR_6->i_sb;
 struct minix_sb_info *VAR_8 = FUNC_9(VAR_7);
 unsigned VAR_9 = VAR_8->s_dirsize;
 unsigned long VAR_10 = FUNC_4(VAR_6);
 unsigned long VAR_11 = VAR_5->pos;
 unsigned VAR_12;
 unsigned long VAR_13;

 VAR_5->pos = VAR_11 = FUNC_0(VAR_11, VAR_9);
 if (VAR_11 >= VAR_6->i_size)
  return 0;

 VAR_12 = VAR_11 & ~VAR_2;
 VAR_13 = VAR_11 >> VAR_3;

 for ( ; VAR_13 < VAR_10; VAR_13++, VAR_12 = 0) {
  char *VAR_14, *VAR_15, *VAR_16;
  struct page *VAR_17 = FUNC_3(VAR_6, VAR_13);

  if (FUNC_1(VAR_17))
   continue;
  VAR_15 = (char *)FUNC_10(VAR_17);
  VAR_14 = VAR_15+VAR_12;
  VAR_16 = VAR_15 + FUNC_7(VAR_6, VAR_13) - VAR_9;
  for ( ; VAR_14 <= VAR_16; VAR_14 = FUNC_8(VAR_14, VAR_8)) {
   const char *VAR_18;
   __u32 VAR_19;
   if (VAR_8->s_version == VAR_1) {
    minix3_dirent *VAR_20 = (minix3_dirent *)VAR_14;
    VAR_18 = VAR_20->name;
    VAR_19 = VAR_20->inode;
    } else {
    minix_dirent *VAR_21 = (minix_dirent *)VAR_14;
    VAR_18 = VAR_21->name;
    VAR_19 = VAR_21->inode;
   }
   if (VAR_19) {
    unsigned VAR_22 = FUNC_11(VAR_18, VAR_8->s_namelen);
    if (!FUNC_2(VAR_5, VAR_18, VAR_22,
           VAR_19, VAR_0)) {
     FUNC_5(VAR_17);
     return 0;
    }
   }
   VAR_5->pos += VAR_9;
  }
  FUNC_5(VAR_17);
 }
 return 0;
}
