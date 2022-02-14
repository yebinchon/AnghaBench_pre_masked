
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int dummy; } ;
struct file {int dummy; } ;
struct fasync_struct {unsigned int fa_fd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file_lock*) ;
 int FUNC_1 (struct file_lock*) ;
 struct fasync_struct* FUNC_2 () ;
 int FUNC_3 (struct fasync_struct*) ;
 struct file_lock* FUNC_4 (struct file*,long) ;
 int FUNC_5 (struct file_lock*) ;
 int FUNC_6 (struct file*,long,struct file_lock**,void**) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_1, struct file *VAR_2, long VAR_3)
{
 struct file_lock *VAR_4;
 struct fasync_struct *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_2();
 if (!VAR_5) {
  FUNC_5(VAR_4);
  return -VAR_0;
 }
 VAR_5->fa_fd = VAR_1;

 VAR_6 = FUNC_6(VAR_2, VAR_3, &VAR_4, (void **)&VAR_5);
 if (VAR_4)
  FUNC_5(VAR_4);
 if (VAR_5)
  FUNC_3(VAR_5);
 return VAR_6;
}
