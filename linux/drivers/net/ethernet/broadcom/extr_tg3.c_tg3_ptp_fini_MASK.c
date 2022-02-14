
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ ptp_adjust; int * ptp_clock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tg3*,int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_1)
{
 if (!FUNC_1(VAR_1, VAR_0) || !VAR_1->ptp_clock)
  return;

 FUNC_0(VAR_1->ptp_clock);
 VAR_1->ptp_clock = ((void*)0);
 VAR_1->ptp_adjust = 0;
}
