
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_fasync; struct file* fl_file; } ;
struct file {int dummy; } ;
struct fasync_struct {int fa_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct file*,int *,struct fasync_struct*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct file_lock *VAR_2, void **VAR_3)
{
 struct file *VAR_4 = VAR_2->fl_file;
 struct fasync_struct *VAR_5 = *VAR_3;






 if (!FUNC_1(VAR_5->fa_fd, VAR_4, &VAR_2->fl_fasync, VAR_5))
  *VAR_3 = ((void*)0);

 FUNC_0(VAR_4, FUNC_2(VAR_1), VAR_0, 0);
}
