
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_rtc_config {int lock; scalar_t__ ioaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct spear_rtc_config *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 unsigned long VAR_5;


 for (VAR_4 = 0; VAR_4 < 80; VAR_4++) {
  FUNC_2(&VAR_2->lock, VAR_5);
  VAR_3 = FUNC_1(VAR_2->ioaddr + VAR_1);
  FUNC_3(&VAR_2->lock, VAR_5);
  if ((VAR_3 & VAR_0) == 0)
   break;

  FUNC_0(1);
 }
}
