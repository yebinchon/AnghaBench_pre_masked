
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_rtc_config {int rtc; int lock; scalar_t__ ioaddr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,unsigned long) ;
 int FUNC_2 (struct spear_rtc_config*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct spear_rtc_config *VAR_8 = VAR_7;
 unsigned long VAR_9, VAR_10 = 0;
 unsigned int VAR_11;

 FUNC_3(&VAR_8->lock, VAR_9);
 VAR_11 = FUNC_0(VAR_8->ioaddr + VAR_5);
 FUNC_4(&VAR_8->lock, VAR_9);

 if ((VAR_11 & VAR_3)) {
  FUNC_2(VAR_8);
  VAR_10 = VAR_4 | VAR_2;
  FUNC_1(VAR_8->rtc, 1, VAR_10);
  return VAR_0;
 } else
  return VAR_1;

}
