
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*,long,int ,unsigned long,int ,int ,int) ;
 struct audit_buffer* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct audit_buffer*) ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(unsigned long VAR_3, long VAR_4, int VAR_5)
{
 struct audit_buffer *VAR_6;

 VAR_6 = FUNC_4(FUNC_1(), VAR_1, VAR_0);
 if (FUNC_8(!VAR_6))
  return;
 FUNC_5(VAR_6);
 FUNC_3(VAR_6, " sig=%ld arch=%x syscall=%ld compat=%d ip=0x%lx code=0x%x",
    VAR_4, FUNC_7(VAR_2), VAR_3,
    FUNC_6(), FUNC_0(VAR_2), VAR_5);
 FUNC_2(VAR_6);
}
