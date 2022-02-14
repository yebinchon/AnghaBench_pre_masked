
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {int lock; scalar_t__ regbase; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct sh_rtc* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct device *VAR_2, unsigned int VAR_3)
{
 struct sh_rtc *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;

 FUNC_2(&VAR_4->lock);

 VAR_5 = FUNC_1(VAR_4->regbase + VAR_0);

 if (!VAR_3)
  VAR_5 &= ~VAR_1;
 else
  VAR_5 |= VAR_1;

 FUNC_4(VAR_5, VAR_4->regbase + VAR_0);

 FUNC_3(&VAR_4->lock);
}
