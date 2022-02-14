
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_dir_entry {scalar_t__ de_objectid; scalar_t__ de_entry_num; scalar_t__ de_deh; } ;
struct inode {scalar_t__ i_ino; int * i_sb; } ;


 int FUNC_0 (char const*,int,struct reiserfs_dir_entry*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1,
      struct reiserfs_dir_entry *VAR_2,
      struct inode *VAR_3)
{
 if (!FUNC_0(VAR_0, VAR_1, VAR_2))
  return 0;

 if (VAR_3) {
  if (!FUNC_1(VAR_2->de_deh + VAR_2->de_entry_num))
   FUNC_2(VAR_3->i_sb, "vs-7042",
           "entry must be visible");
  return (VAR_2->de_objectid == VAR_3->i_ino) ? 1 : 0;
 }


 if (FUNC_1(VAR_2->de_deh + VAR_2->de_entry_num))
  FUNC_2(((void*)0), "vs-7043", "entry must be visible");

 return 1;
}
