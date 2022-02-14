
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl031_local {int rtc; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,unsigned long) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct pl031_local *VAR_9 = VAR_8;
 unsigned long VAR_10;
 unsigned long VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_9->base + VAR_6);
 if (VAR_10 & VAR_3) {
  FUNC_2(VAR_3, VAR_9->base + VAR_4);
  VAR_11 |= (VAR_2 | VAR_5);
  FUNC_1(VAR_9->rtc, 1, VAR_11);

  return VAR_0;
 }

 return VAR_1;
}
