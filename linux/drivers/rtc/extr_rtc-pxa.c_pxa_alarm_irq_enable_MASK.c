
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_rtc {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct pxa_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pxa_rtc*,int ) ;
 int FUNC_2 (struct pxa_rtc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, unsigned int VAR_2)
{
 struct pxa_rtc *VAR_3 = FUNC_0(VAR_1);

 FUNC_3(&VAR_3->lock);

 if (VAR_2)
  FUNC_2(VAR_3, VAR_0);
 else
  FUNC_1(VAR_3, VAR_0);

 FUNC_4(&VAR_3->lock);
 return 0;
}
