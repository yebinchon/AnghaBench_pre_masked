
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef scalar_t__ u16 ;
struct audit_context {int dummy; } ;
struct audit_buffer {int dummy; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct audit_buffer*,char*,int ,int ) ;
 int FUNC_1 (struct audit_buffer*) ;
 struct audit_buffer* FUNC_2 (struct audit_context*,int ,scalar_t__) ;
 int FUNC_3 (struct audit_buffer*) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct audit_context *VAR_5,
     struct audit_buffer **VAR_6, u16 VAR_7)
{
 uid_t VAR_8 = FUNC_5(&VAR_4, FUNC_4());
 pid_t VAR_9 = FUNC_6(VAR_3);

 if (!VAR_2 && VAR_7 != VAR_0) {
  *VAR_6 = ((void*)0);
  return;
 }

 *VAR_6 = FUNC_2(VAR_5, VAR_1, VAR_7);
 if (FUNC_7(!*VAR_6))
  return;
 FUNC_0(*VAR_6, "pid=%d uid=%u ", VAR_9, VAR_8);
 FUNC_1(*VAR_6);
 FUNC_3(*VAR_6);
}
