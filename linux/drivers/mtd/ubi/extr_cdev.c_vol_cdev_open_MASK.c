
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct ubi_volume_desc* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubi_volume_desc*) ;
 int FUNC_1 (struct ubi_volume_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 struct ubi_volume_desc* FUNC_6 (int,int,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct ubi_volume_desc *VAR_5;
 int VAR_6 = FUNC_4(VAR_3) - 1, VAR_7, VAR_8;

 VAR_8 = FUNC_5(FUNC_3(VAR_3));
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_4->f_mode & VAR_0)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;

 FUNC_2("open device %d, volume %d, mode %d",
  VAR_8, VAR_6, VAR_7);

 VAR_5 = FUNC_6(VAR_8, VAR_6, VAR_7);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4->private_data = VAR_5;
 return 0;
}
