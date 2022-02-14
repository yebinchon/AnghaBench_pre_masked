
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct audit_buffer*,char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int ,char**,unsigned int*) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct audit_buffer *VAR_2)
{
 char *VAR_3 = ((void*)0);
 unsigned VAR_4;
 int VAR_5;
 u32 VAR_6;

 FUNC_4(VAR_1, &VAR_6);
 if (!VAR_6)
  return 0;

 VAR_5 = FUNC_3(VAR_6, &VAR_3, &VAR_4);
 if (VAR_5) {
  if (VAR_5 != -VAR_0)
   goto error_path;
  return 0;
 }

 FUNC_0(VAR_2, " subj=%s", VAR_3);
 FUNC_2(VAR_3, VAR_4);
 return 0;

error_path:
 FUNC_1("error in audit_log_task_context");
 return VAR_5;
}
