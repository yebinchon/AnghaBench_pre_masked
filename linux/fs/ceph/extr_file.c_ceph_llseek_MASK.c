
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ f_pos; TYPE_1__* f_mapping; } ;
struct ceph_fs_client {int max_file_size; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




 scalar_t__ FUNC_0 (struct inode*,int ,int) ;
 struct ceph_fs_client* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct file*,scalar_t__,int ) ;

__attribute__((used)) static loff_t FUNC_7(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_2->f_mapping->host;
 struct ceph_fs_client *VAR_6 = FUNC_1(VAR_5);
 loff_t VAR_7;
 loff_t VAR_8;

 FUNC_3(VAR_5);

 if (VAR_4 == 129 || VAR_4 == 130 || VAR_4 == 128) {
  VAR_8 = FUNC_0(VAR_5, VAR_0, 0);
  if (VAR_8 < 0)
   goto out;
 }

 VAR_7 = FUNC_2(VAR_5);
 switch (VAR_4) {
 case 129:
  VAR_3 += VAR_7;
  break;
 case 131:






  if (VAR_3 == 0) {
   VAR_8 = VAR_2->f_pos;
   goto out;
  }
  VAR_3 += VAR_2->f_pos;
  break;
 case 130:
  if (VAR_3 < 0 || VAR_3 >= VAR_7) {
   VAR_8 = -VAR_1;
   goto out;
  }
  break;
 case 128:
  if (VAR_3 < 0 || VAR_3 >= VAR_7) {
   VAR_8 = -VAR_1;
   goto out;
  }
  VAR_3 = VAR_7;
  break;
 }

 VAR_8 = FUNC_6(VAR_2, VAR_3, FUNC_5(VAR_7, VAR_6->max_file_size));

out:
 FUNC_4(VAR_5);
 return VAR_8;
}
