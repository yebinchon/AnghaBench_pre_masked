
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct file {int f_path; } ;
struct audit_buffer {int dummy; } ;


 int FUNC_0 (struct audit_buffer*,char*,int *) ;
 int FUNC_1 (struct audit_buffer*,char*) ;
 int FUNC_2 (struct file*) ;
 struct file* FUNC_3 (struct mm_struct*) ;

void FUNC_4(struct audit_buffer *VAR_0,
     struct mm_struct *VAR_1)
{
 struct file *VAR_2;

 if (!VAR_1)
  goto out_null;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  goto out_null;

 FUNC_0(VAR_0, " exe=", &VAR_2->f_path);
 FUNC_2(VAR_2);
 return;
out_null:
 FUNC_1(VAR_0, " exe=(null)");
}
