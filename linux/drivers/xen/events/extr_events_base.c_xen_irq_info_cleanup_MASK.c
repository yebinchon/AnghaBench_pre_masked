
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {scalar_t__ evtchn; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct irq_info *VAR_0)
{
 FUNC_0(VAR_0->evtchn, -1);
 VAR_0->evtchn = 0;
}
