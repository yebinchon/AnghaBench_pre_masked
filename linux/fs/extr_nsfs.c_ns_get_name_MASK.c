
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_ns_operations {char* name; int (* put ) (struct ns_common*) ;scalar_t__ real_ns_name; struct ns_common* (* get ) (struct task_struct*) ;} ;
struct ns_common {int inum; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char const*,int) ;
 struct ns_common* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct ns_common*) ;

int FUNC_3(char *VAR_1, size_t VAR_2, struct task_struct *VAR_3,
   const struct proc_ns_operations *VAR_4)
{
 struct ns_common *VAR_5;
 int VAR_6 = -VAR_0;
 const char *VAR_7;
 VAR_5 = VAR_4->get(VAR_3);
 if (VAR_5) {
  VAR_7 = VAR_4->real_ns_name ? : VAR_4->name;
  VAR_6 = FUNC_0(VAR_1, VAR_2, "%s:[%u]", VAR_7, VAR_5->inum);
  VAR_4->put(VAR_5);
 }
 return VAR_6;
}
