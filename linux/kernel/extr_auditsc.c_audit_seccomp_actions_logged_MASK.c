
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,char const*,char const*,int) ;
 struct audit_buffer* FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(const char *VAR_3, const char *VAR_4,
      int VAR_5)
{
 struct audit_buffer *VAR_6;

 if (!VAR_2)
  return;

 VAR_6 = FUNC_3(FUNC_0(), VAR_1,
        VAR_0);
 if (FUNC_4(!VAR_6))
  return;

 FUNC_2(VAR_6,
    "op=seccomp-logging actions=%s old-actions=%s res=%d",
    VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_6);
}
