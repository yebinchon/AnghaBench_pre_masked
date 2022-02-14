
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8500_rtc {scalar_t__ regbase; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vt8500_rtc* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, unsigned int VAR_3)
{
 struct vt8500_rtc *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5 = FUNC_1(VAR_4->regbase + VAR_1);

 if (VAR_3)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;

 FUNC_2(VAR_5, VAR_4->regbase + VAR_1);
 return 0;
}
