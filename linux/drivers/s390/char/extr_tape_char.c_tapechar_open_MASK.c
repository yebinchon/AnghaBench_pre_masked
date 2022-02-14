
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct tape_device* private_data; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct tape_device*) ;
 int FUNC_2 (struct tape_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,struct file*) ;
 struct tape_device* FUNC_7 (int) ;
 int FUNC_8 (struct tape_device*) ;
 int FUNC_9 (struct tape_device*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_10 (struct inode *VAR_3, struct file *VAR_4)
{
 struct tape_device *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(6, "TCHAR:open: %i:%i\n",
  FUNC_4(FUNC_3(VAR_4)),
  FUNC_5(FUNC_3(VAR_4)));

 if (FUNC_4(FUNC_3(VAR_4)) != VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_5(FUNC_3(VAR_4));
 VAR_5 = FUNC_7(VAR_6 / VAR_1);
 if (FUNC_1(VAR_5)) {
  FUNC_0(3, "TCHAR:open: tape_find_device() failed\n");
  return FUNC_2(VAR_5);
 }

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7 == 0) {
  VAR_4->private_data = VAR_5;
  FUNC_6(VAR_3, VAR_4);
 } else
  FUNC_9(VAR_5);

 return VAR_7;
}
