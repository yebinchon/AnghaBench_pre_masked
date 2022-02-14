
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {char* name; int inode; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {unsigned long i_size; struct super_block* i_sb; } ;
struct file {int dummy; } ;
struct dir_context {unsigned long pos; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct dir_context*,char*,int ,int ,int ) ;
 struct page* FUNC_3 (struct inode*,unsigned long) ;
 unsigned long FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 struct inode* FUNC_6 (struct file*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_6, struct dir_context *VAR_7)
{
 unsigned long VAR_8 = VAR_7->pos;
 struct inode *VAR_9 = FUNC_6(VAR_6);
 struct super_block *VAR_10 = VAR_9->i_sb;
 unsigned long VAR_11 = FUNC_4(VAR_9);
 unsigned VAR_12;
 unsigned long VAR_13;

 VAR_7->pos = VAR_8 = (VAR_8 + VAR_4-1) & ~(VAR_4-1);
 if (VAR_8 >= VAR_9->i_size)
  return 0;

 VAR_12 = VAR_8 & ~VAR_1;
 VAR_13 = VAR_8 >> VAR_2;

 for ( ; VAR_13 < VAR_11; VAR_13++, VAR_12 = 0) {
  char *VAR_14, *VAR_15;
  struct sysv_dir_entry *VAR_16;
  struct page *VAR_17 = FUNC_3(VAR_9, VAR_13);

  if (FUNC_0(VAR_17))
   continue;
  VAR_14 = (char *)FUNC_8(VAR_17);
  VAR_16 = (struct sysv_dir_entry *)(VAR_14+VAR_12);
  VAR_15 = VAR_14 + VAR_3 - VAR_4;
  for ( ;(char*)VAR_16 <= VAR_15; VAR_16++, VAR_7->pos += sizeof(*VAR_16)) {
   char *VAR_18 = VAR_16->name;

   if (!VAR_16->inode)
    continue;

   if (!FUNC_2(VAR_7, VAR_18, FUNC_9(VAR_18,VAR_5),
     FUNC_7(FUNC_1(VAR_10), VAR_16->inode),
     VAR_0)) {
    FUNC_5(VAR_17);
    return 0;
   }
  }
  FUNC_5(VAR_17);
 }
 return 0;
}
