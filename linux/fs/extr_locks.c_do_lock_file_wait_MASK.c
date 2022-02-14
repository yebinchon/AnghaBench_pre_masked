
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_blocker; int fl_wait; int fl_type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (struct file*,int ) ;
 int FUNC_2 (struct file*,unsigned int,struct file_lock*,int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, unsigned int VAR_2,
        struct file_lock *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3->fl_type);
 if (VAR_4)
  return VAR_4;

 for (;;) {
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0));
  if (VAR_4 != VAR_0)
   break;
  VAR_4 = FUNC_3(VAR_3->fl_wait, !VAR_3->fl_blocker);
  if (VAR_4)
   break;
 }
 FUNC_0(VAR_3);

 return VAR_4;
}
