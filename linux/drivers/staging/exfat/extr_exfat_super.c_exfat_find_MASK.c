
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qstr {scalar_t__ len; scalar_t__ name; } ;
struct inode {int dummy; } ;
struct file_id_t {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int *,struct file_id_t*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct qstr *VAR_2,
        struct file_id_t *VAR_3)
{
 int VAR_4;

 if (VAR_2->len == 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, (u8 *)VAR_2->name, VAR_3);
 if (VAR_4)
  return -VAR_0;

 return 0;
}
