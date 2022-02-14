
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct inode*,struct qstr const*,struct ext4_dir_entry_2**,int *) ;

__attribute__((used)) static int FUNC_5(handle_t *VAR_1, struct inode *VAR_2,
      const struct qstr *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct buffer_head *VAR_5;
 struct ext4_dir_entry_2 *VAR_6;

 VAR_5 = FUNC_4(VAR_2, VAR_3, &VAR_6, ((void*)0));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (VAR_5) {
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_6, VAR_5);
  FUNC_2(VAR_5);
 }
 return VAR_4;
}
