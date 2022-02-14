
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int port; } ;
struct tty_driver {int port; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tty_struct* FUNC_0 (struct tty_struct*) ;
 struct tty_struct* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;
 struct tty_struct* FUNC_6 (struct tty_struct*,struct file*,int) ;
 struct tty_struct* FUNC_7 (struct tty_struct*,int) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*) ;
 struct tty_struct* FUNC_10 (int ,struct file*,int*) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (struct tty_struct*) ;

__attribute__((used)) static struct tty_struct *FUNC_14(dev_t VAR_4, struct inode *VAR_5,
          struct file *VAR_6)
{
 struct tty_struct *VAR_7;
 struct tty_driver *VAR_8 = ((void*)0);
 int VAR_9 = -1;
 int VAR_10;

 FUNC_3(&VAR_3);
 VAR_8 = FUNC_10(VAR_4, VAR_6, &VAR_9);
 if (FUNC_2(VAR_8)) {
  FUNC_4(&VAR_3);
  return FUNC_0(VAR_8);
 }


 VAR_7 = FUNC_6(VAR_8, VAR_6, VAR_9);
 if (FUNC_2(VAR_7)) {
  FUNC_4(&VAR_3);
  goto out;
 }

 if (VAR_7) {
  if (FUNC_11(VAR_7->port)) {
   FUNC_8(VAR_7);
   FUNC_4(&VAR_3);
   VAR_7 = FUNC_1(-VAR_0);
   goto out;
  }
  FUNC_4(&VAR_3);
  VAR_10 = FUNC_9(VAR_7);
  FUNC_8(VAR_7);
  if (VAR_10) {
   if (VAR_10 == -VAR_1)
    VAR_10 = -VAR_2;
   VAR_7 = FUNC_1(VAR_10);
   goto out;
  }
  VAR_10 = FUNC_12(VAR_7);
  if (VAR_10 < 0) {
   FUNC_13(VAR_7);
   VAR_7 = FUNC_1(VAR_10);
  }
 } else {
  VAR_7 = FUNC_7(VAR_8, VAR_9);
  FUNC_4(&VAR_3);
 }
out:
 FUNC_5(VAR_8);
 return VAR_7;
}
