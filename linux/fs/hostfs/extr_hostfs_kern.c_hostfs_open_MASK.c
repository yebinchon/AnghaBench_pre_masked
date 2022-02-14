
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {int dentry; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;
typedef int fmode_t ;
struct TYPE_4__ {int mode; int fd; int open_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 char *VAR_6;
 fmode_t VAR_7;
 int VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = VAR_5->f_mode & (VAR_1 | VAR_2);
 if ((VAR_7 & FUNC_0(VAR_4)->mode) == VAR_7)
  return 0;

 VAR_7 |= FUNC_0(VAR_4)->mode;

retry:
 VAR_9 = VAR_10 = 0;

 if (VAR_7 & VAR_1)
  VAR_9 = 1;
 if (VAR_7 & VAR_2)
  VAR_9 = VAR_10 = 1;

 VAR_6 = FUNC_3(VAR_5->f_path.dentry);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_6, VAR_9, VAR_10, VAR_3);
 FUNC_1(VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_4(&FUNC_0(VAR_4)->open_mutex);

 if ((VAR_7 & FUNC_0(VAR_4)->mode) == VAR_7) {
  FUNC_5(&FUNC_0(VAR_4)->open_mutex);
  FUNC_2(&VAR_11);
  return 0;
 }
 if ((VAR_7 | FUNC_0(VAR_4)->mode) != VAR_7) {
  VAR_7 |= FUNC_0(VAR_4)->mode;
  FUNC_5(&FUNC_0(VAR_4)->open_mutex);
  FUNC_2(&VAR_11);
  goto retry;
 }
 if (FUNC_0(VAR_4)->fd == -1) {
  FUNC_0(VAR_4)->fd = VAR_11;
 } else {
  VAR_8 = FUNC_7(VAR_11, FUNC_0(VAR_4)->fd);
  FUNC_2(&VAR_11);
  if (VAR_8 < 0) {
   FUNC_5(&FUNC_0(VAR_4)->open_mutex);
   return VAR_8;
  }
 }
 FUNC_0(VAR_4)->mode = VAR_7;
 FUNC_5(&FUNC_0(VAR_4)->open_mutex);

 return 0;
}
