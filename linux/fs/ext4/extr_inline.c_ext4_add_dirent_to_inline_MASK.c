
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; } ;
struct ext4_iloc {int bh; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct inode*,int ,void*,int,struct ext4_filename*,struct ext4_dir_entry_2**) ;
 int FUNC_3 (struct inode*,struct ext4_dir_entry_2*,int,struct ext4_filename*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct inode*,int ,void*,int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(handle_t *VAR_0,
         struct ext4_filename *VAR_1,
         struct inode *VAR_2,
         struct inode *VAR_3,
         struct ext4_iloc *VAR_4,
         void *VAR_5, int VAR_6)
{
 int VAR_7;
 struct ext4_dir_entry_2 *VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4->bh, VAR_5,
    VAR_6, VAR_1, &VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_4->bh, "get_write_access");
 VAR_7 = FUNC_4(VAR_0, VAR_4->bh);
 if (VAR_7)
  return VAR_7;
 FUNC_3(VAR_3, VAR_8, VAR_6, VAR_1);

 FUNC_5(VAR_2, VAR_4->bh, VAR_5, VAR_6);
 VAR_2->i_mtime = VAR_2->i_ctime = FUNC_1(VAR_2);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 return 1;
}
