
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct audit_buffer*) ;

void FUNC_6(const char *VAR_3)
{
 struct audit_buffer *VAR_4;

 if (!VAR_2 || FUNC_1())
  return;


 VAR_4 = FUNC_4(FUNC_0(), VAR_1, VAR_0);
 if (!VAR_4)
  return;
 FUNC_3(VAR_4, "op=%s", VAR_3);
 FUNC_5(VAR_4);
 FUNC_3(VAR_4, " res=0");
 FUNC_2(VAR_4);
}
