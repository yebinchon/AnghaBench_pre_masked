
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct lp8788_rtc {size_t alarm; int irq; struct lp8788* lp; } ;
struct lp8788 {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp8788_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lp8788*,int ,unsigned int,unsigned int) ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, unsigned int VAR_5)
{
 struct lp8788_rtc *VAR_6 = FUNC_0(VAR_4);
 struct lp8788 *VAR_7 = VAR_6->lp;
 u8 VAR_8, VAR_9;

 if (!VAR_6->irq)
  return -VAR_0;

 VAR_8 = VAR_2[VAR_6->alarm];
 VAR_9 = VAR_3[VAR_6->alarm];

 return FUNC_1(VAR_7, VAR_1, VAR_8, VAR_5 << VAR_9);
}
