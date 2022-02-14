
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vcpu_runstate_info {int state_entry_time; } ;


 int FUNC_0 (int ) ;
 struct vcpu_runstate_info FUNC_1 (struct vcpu_runstate_info) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct vcpu_runstate_info* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(
         struct vcpu_runstate_info *VAR_2, unsigned int VAR_3)
{
 u64 VAR_4;
 struct vcpu_runstate_info *VAR_5;

 FUNC_0(FUNC_4());

 VAR_5 = FUNC_3(&VAR_1, VAR_3);

 do {
  VAR_4 = FUNC_2(&VAR_5->state_entry_time);
  FUNC_5();
  *VAR_2 = FUNC_1(*VAR_5);
  FUNC_5();
 } while (FUNC_2(&VAR_5->state_entry_time) != VAR_4 ||
   (VAR_4 & VAR_0));
}
