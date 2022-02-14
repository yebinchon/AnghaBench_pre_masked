
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amvdec_session {scalar_t__ last_irq_jiffies; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct amvdec_session *VAR_0)
{

 while (FUNC_2(VAR_0->last_irq_jiffies +
           FUNC_0(50)))
  FUNC_1(25);
}
