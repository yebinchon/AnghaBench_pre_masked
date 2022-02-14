
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slink_front {char* symname; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; int i_ino; } ;
struct file {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct affs_sb_info {char* s_prefix; int symlink_lock; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct affs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct buffer_head* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,char) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1, struct page *VAR_2)
{
 struct buffer_head *VAR_3;
 struct inode *VAR_4 = VAR_2->mapping->host;
 char *VAR_5 = FUNC_5(VAR_2);
 struct slink_front *VAR_6;
 int VAR_7, VAR_8;
 char VAR_9;
 char VAR_10;

 FUNC_6("get_link(ino=%lu)\n", VAR_4->i_ino);

 VAR_3 = FUNC_3(VAR_4->i_sb, VAR_4->i_ino);
 if (!VAR_3)
  goto fail;
 VAR_7 = 0;
 VAR_8 = 0;
 VAR_6 = (struct slink_front *)VAR_3->b_data;
 VAR_10 = 0;

 if (FUNC_9(VAR_6->symname,':')) {
  struct affs_sb_info *VAR_11 = FUNC_0(VAR_4->i_sb);
  char *VAR_12;
  FUNC_7(&VAR_11->symlink_lock);
  VAR_12 = VAR_11->s_prefix ? VAR_11->s_prefix : "/";
  while (VAR_7 < 1023 && (VAR_9 = VAR_12[VAR_7]))
   VAR_5[VAR_7++] = VAR_9;
  FUNC_8(&VAR_11->symlink_lock);
  while (VAR_7 < 1023 && VAR_6->symname[VAR_8] != ':')
   VAR_5[VAR_7++] = VAR_6->symname[VAR_8++];
  if (VAR_7 < 1023)
   VAR_5[VAR_7++] = '/';
  VAR_8++;
  VAR_10 = '/';
 }
 while (VAR_7 < 1023 && (VAR_9 = VAR_6->symname[VAR_8])) {
  if (VAR_9 == '/' && VAR_10 == '/' && VAR_7 < 1020) {
   VAR_5[VAR_7++] = '.';
   VAR_5[VAR_7++] = '.';
  }
  VAR_5[VAR_7++] = VAR_9;
  VAR_10 = VAR_9;
  VAR_8++;
 }
 VAR_5[VAR_7] = '\0';
 FUNC_4(VAR_3);
 FUNC_2(VAR_2);
 FUNC_10(VAR_2);
 return 0;
fail:
 FUNC_1(VAR_2);
 FUNC_10(VAR_2);
 return -VAR_0;
}
