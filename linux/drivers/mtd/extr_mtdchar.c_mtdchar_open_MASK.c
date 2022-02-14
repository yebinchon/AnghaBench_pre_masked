
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ type; int flags; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct mtd_file_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mtd_info*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mtd_info*) ;
 struct mtd_info* FUNC_2 (int *,int) ;
 int FUNC_3 (struct inode*) ;
 struct mtd_file_info* FUNC_4 (int,int ) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_8, struct file *VAR_9)
{
 int VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = VAR_10 >> 1;
 int VAR_12 = 0;
 struct mtd_info *VAR_13;
 struct mtd_file_info *VAR_14;

 FUNC_7("MTD_open\n");


 if ((VAR_9->f_mode & VAR_3) && (VAR_10 & 1))
  return -VAR_0;

 FUNC_5(&VAR_7);
 VAR_13 = FUNC_2(((void*)0), VAR_11);

 if (FUNC_0(VAR_13)) {
  VAR_12 = FUNC_1(VAR_13);
  goto out;
 }

 if (VAR_13->type == VAR_5) {
  VAR_12 = -VAR_1;
  goto out1;
 }


 if ((VAR_9->f_mode & VAR_3) && !(VAR_13->flags & VAR_6)) {
  VAR_12 = -VAR_0;
  goto out1;
 }

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_4);
 if (!VAR_14) {
  VAR_12 = -VAR_2;
  goto out1;
 }
 VAR_14->mtd = VAR_13;
 VAR_9->private_data = VAR_14;
 FUNC_6(&VAR_7);
 return 0;

out1:
 FUNC_8(VAR_13);
out:
 FUNC_6(&VAR_7);
 return VAR_12;
}
