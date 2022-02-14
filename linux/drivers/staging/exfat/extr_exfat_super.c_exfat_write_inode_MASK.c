
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_atime; int i_ctime; int i_mtime; } ;
struct dir_entry_t {int AccessTimestamp; int CreateTimestamp; int ModifyTimestamp; int Size; int Attr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct inode*,struct dir_entry_t*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct writeback_control *VAR_2)
{
 struct dir_entry_t VAR_3;

 if (VAR_1->i_ino == VAR_0)
  return 0;

 VAR_3.Attr = FUNC_0(VAR_1);
 VAR_3.Size = FUNC_3(VAR_1);

 FUNC_1(&VAR_1->i_mtime, &VAR_3.ModifyTimestamp);
 FUNC_1(&VAR_1->i_ctime, &VAR_3.CreateTimestamp);
 FUNC_1(&VAR_1->i_atime, &VAR_3.AccessTimestamp);

 FUNC_2(VAR_1, &VAR_3);

 return 0;
}
