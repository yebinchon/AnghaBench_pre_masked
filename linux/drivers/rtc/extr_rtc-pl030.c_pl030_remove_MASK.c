
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl030_rtc {scalar_t__ base; } ;
struct amba_device {int * irq; } ;


 scalar_t__ VAR_0 ;
 struct pl030_rtc* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (int ,struct pl030_rtc*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct amba_device *VAR_1)
{
 struct pl030_rtc *VAR_2 = FUNC_0(VAR_1);

 FUNC_4(0, VAR_2->base + VAR_0);

 FUNC_2(VAR_1->irq[0], VAR_2);
 FUNC_3(VAR_2->base);
 FUNC_1(VAR_1);

 return 0;
}
