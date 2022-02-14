
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal_struct {scalar_t__ oom_mm; } ;


 int FUNC_0 (int ,struct signal_struct*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct signal_struct*) ;
 int VAR_0 ;
 int FUNC_3 (struct signal_struct*) ;

__attribute__((used)) static inline void FUNC_4(struct signal_struct *VAR_1)
{
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);




 if (VAR_1->oom_mm)
  FUNC_1(VAR_1->oom_mm);
 FUNC_0(VAR_0, VAR_1);
}
