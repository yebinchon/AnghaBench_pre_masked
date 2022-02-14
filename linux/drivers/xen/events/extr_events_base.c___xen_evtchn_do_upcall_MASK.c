
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_info {scalar_t__ evtchn_upcall_pending; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct vcpu_info* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(void)
{
 struct vcpu_info *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_4();
 unsigned VAR_4;

 do {
  VAR_2->evtchn_upcall_pending = 0;

  if (FUNC_1(VAR_0) - 1)
   goto out;

  FUNC_7(VAR_3);

  FUNC_0(!FUNC_5());

  VAR_4 = FUNC_2(VAR_0);
  FUNC_3(VAR_0, 0);
 } while (VAR_4 != 1 || VAR_2->evtchn_upcall_pending);

out:

 FUNC_6();
}
