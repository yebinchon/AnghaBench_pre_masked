
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;
struct file {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,struct pid*,int,int) ;
 struct pid* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct file *VAR_5, unsigned long VAR_6, int VAR_7)
{
 enum pid_type VAR_8;
 struct pid *VAR_9 = ((void*)0);
 int VAR_10 = VAR_6, VAR_11 = 0;

 VAR_8 = VAR_4;
 if (VAR_10 < 0) {

  if (VAR_10 == VAR_2)
   return -VAR_0;

  VAR_8 = VAR_3;
  VAR_10 = -VAR_10;
 }

 FUNC_2();
 if (VAR_10) {
  VAR_9 = FUNC_1(VAR_10);
  if (!VAR_9)
   VAR_11 = -VAR_1;
 }

 if (!VAR_11)
  FUNC_0(VAR_5, VAR_9, VAR_8, VAR_7);
 FUNC_3();

 return VAR_11;
}
