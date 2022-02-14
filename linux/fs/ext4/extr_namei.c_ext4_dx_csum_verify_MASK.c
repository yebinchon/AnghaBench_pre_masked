
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_dir_entry {int dummy; } ;
struct dx_tail {scalar_t__ dt_checksum; } ;
struct dx_entry {int dummy; } ;
struct dx_countlimit {int count; int limit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,char*) ;
 scalar_t__ FUNC_2 (struct inode*,struct ext4_dir_entry*,int,int,struct dx_tail*) ;
 int FUNC_3 (int ) ;
 struct dx_countlimit* FUNC_4 (struct inode*,struct ext4_dir_entry*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0,
          struct ext4_dir_entry *VAR_1)
{
 struct dx_countlimit *VAR_2;
 struct dx_tail *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if (!FUNC_3(VAR_0->i_sb))
  return 1;

 VAR_2 = FUNC_4(VAR_0, VAR_1, &VAR_4);
 if (!VAR_2) {
  FUNC_1(VAR_0, "dir seems corrupt?  Run e2fsck -D.");
  return 0;
 }
 VAR_5 = FUNC_5(VAR_2->limit);
 VAR_6 = FUNC_5(VAR_2->count);
 if (VAR_4 + (VAR_5 * sizeof(struct dx_entry)) >
     FUNC_0(VAR_0->i_sb) - sizeof(struct dx_tail)) {
  FUNC_6(VAR_0);
  return 0;
 }
 VAR_3 = (struct dx_tail *)(((struct dx_entry *)VAR_2) + VAR_5);

 if (VAR_3->dt_checksum != FUNC_2(VAR_0, VAR_1, VAR_4,
         VAR_6, VAR_3))
  return 0;
 return 1;
}
