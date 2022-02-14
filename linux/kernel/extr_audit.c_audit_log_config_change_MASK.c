
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 int FUNC_3 (struct audit_buffer*) ;
 struct audit_buffer* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct audit_buffer*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(char *VAR_2, u32 VAR_3, u32 VAR_4,
       int VAR_5)
{
 struct audit_buffer *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_4(FUNC_0(), VAR_1, VAR_0);
 if (FUNC_6(!VAR_6))
  return VAR_7;
 FUNC_2(VAR_6, "op=set %s=%u old=%u ", VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_6);
 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  VAR_5 = 0;
 FUNC_2(VAR_6, " res=%d", VAR_5);
 FUNC_1(VAR_6);
 return VAR_7;
}
