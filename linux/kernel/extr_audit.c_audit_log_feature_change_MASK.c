
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,int ,int,int,int,int,int) ;
 struct audit_buffer* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct audit_buffer*) ;

__attribute__((used)) static void FUNC_5(int VAR_5, u32 VAR_6, u32 VAR_7,
         u32 VAR_8, u32 VAR_9, int VAR_10)
{
 struct audit_buffer *VAR_11;

 if (VAR_3 == VAR_1)
  return;

 VAR_11 = FUNC_3(FUNC_0(), VAR_2, VAR_0);
 if (!VAR_11)
  return;
 FUNC_4(VAR_11);
 FUNC_2(VAR_11, " feature=%s old=%u new=%u old_lock=%u new_lock=%u res=%d",
    VAR_4[VAR_5], !!VAR_6, !!VAR_7,
    !!VAR_8, !!VAR_9, VAR_10);
 FUNC_1(VAR_11);
}
