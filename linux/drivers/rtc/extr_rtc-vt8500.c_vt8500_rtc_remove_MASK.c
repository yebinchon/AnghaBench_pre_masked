
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8500_rtc {scalar_t__ regbase; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct vt8500_rtc* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct vt8500_rtc *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(0, VAR_2->regbase + VAR_0);

 return 0;
}
