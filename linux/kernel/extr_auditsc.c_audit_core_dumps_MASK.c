
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,long) ;
 struct audit_buffer* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct audit_buffer*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(long VAR_4)
{
 struct audit_buffer *VAR_5;

 if (!VAR_3)
  return;

 if (VAR_4 == VAR_2)
  return;

 VAR_5 = FUNC_3(FUNC_0(), VAR_1, VAR_0);
 if (FUNC_5(!VAR_5))
  return;
 FUNC_4(VAR_5);
 FUNC_2(VAR_5, " sig=%ld res=1", VAR_4);
 FUNC_1(VAR_5);
}
