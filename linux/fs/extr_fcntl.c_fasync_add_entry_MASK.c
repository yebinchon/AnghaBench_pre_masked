
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct fasync_struct {int dummy; } ;


 int VAR_0 ;
 struct fasync_struct* FUNC_0 () ;
 int FUNC_1 (struct fasync_struct*) ;
 scalar_t__ FUNC_2 (int,struct file*,struct fasync_struct**,struct fasync_struct*) ;

__attribute__((used)) static int FUNC_3(int VAR_1, struct file *VAR_2, struct fasync_struct **VAR_3)
{
 struct fasync_struct *VAR_4;

 VAR_4 = FUNC_0();
 if (!VAR_4)
  return -VAR_0;
 if (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4)) {
  FUNC_1(VAR_4);
  return 0;
 }

 return 1;
}
