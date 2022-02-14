
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18 {int mb_apu_waitq; int mb_cpu_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cx18 *VAR_2, u32 VAR_3)
{
 if (VAR_3 & VAR_1)
  FUNC_0(&VAR_2->mb_cpu_waitq);
 if (VAR_3 & VAR_0)
  FUNC_0(&VAR_2->mb_apu_waitq);
}
