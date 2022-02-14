
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file_lock*,struct file_lock*) ;
 int FUNC_1 (int,struct file_lock*,struct file_lock*) ;

__attribute__((used)) static bool FUNC_2(struct file_lock *VAR_3, struct file_lock *VAR_4)
{
 bool VAR_5;

 if ((VAR_4->fl_flags & VAR_1) != (VAR_3->fl_flags & VAR_1)) {
  VAR_5 = 0;
  goto trace;
 }
 if ((VAR_4->fl_flags & VAR_0) && (VAR_3->fl_flags & VAR_2)) {
  VAR_5 = 0;
  goto trace;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3);
trace:
 FUNC_1(VAR_5, VAR_3, VAR_4);
 return VAR_5;
}
