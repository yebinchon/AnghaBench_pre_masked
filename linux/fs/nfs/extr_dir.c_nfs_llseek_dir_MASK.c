
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_dir_context {scalar_t__ duped; scalar_t__ dir_cookie; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ f_pos; struct nfs_open_dir_context* private_data; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,struct file*,scalar_t__,int) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static loff_t FUNC_4(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_2);
 struct nfs_open_dir_context *VAR_6 = VAR_2->private_data;

 FUNC_0(VAR_1, "NFS: llseek dir(%pD2, %lld, %d)\n",
   VAR_2, VAR_3, VAR_4);

 switch (VAR_4) {
 default:
  return -VAR_0;
 case 128:
  if (VAR_3 < 0)
   return -VAR_0;
  FUNC_2(VAR_5);
  break;
 case 129:
  if (VAR_3 == 0)
   return VAR_2->f_pos;
  FUNC_2(VAR_5);
  VAR_3 += VAR_2->f_pos;
  if (VAR_3 < 0) {
   FUNC_3(VAR_5);
   return -VAR_0;
  }
 }
 if (VAR_3 != VAR_2->f_pos) {
  VAR_2->f_pos = VAR_3;
  VAR_6->dir_cookie = 0;
  VAR_6->duped = 0;
 }
 FUNC_3(VAR_5);
 return VAR_3;
}
