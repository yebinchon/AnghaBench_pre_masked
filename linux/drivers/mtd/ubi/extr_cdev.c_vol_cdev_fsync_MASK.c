
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume_desc {TYPE_1__* vol; } ;
struct ubi_device {int ubi_num; } ;
struct inode {int dummy; } ;
struct file {struct ubi_volume_desc* private_data; } ;
typedef int loff_t ;
struct TYPE_2__ {struct ubi_device* ubi; } ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2,
     int VAR_3)
{
 struct ubi_volume_desc *VAR_4 = VAR_0->private_data;
 struct ubi_device *VAR_5 = VAR_4->vol->ubi;
 struct inode *VAR_6 = FUNC_0(VAR_0);
 int VAR_7;
 FUNC_1(VAR_6);
 VAR_7 = FUNC_3(VAR_5->ubi_num);
 FUNC_2(VAR_6);
 return VAR_7;
}
