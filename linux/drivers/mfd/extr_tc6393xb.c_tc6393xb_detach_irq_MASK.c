
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc6393xb {unsigned int irq_base; int irq; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (unsigned int,int) ;
 struct tc6393xb* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_3)
{
 struct tc6393xb *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5, VAR_6;

 FUNC_0(VAR_4->irq, ((void*)0), ((void*)0));

 VAR_6 = VAR_4->irq_base;

 for (VAR_5 = VAR_6; VAR_5 < VAR_6 + VAR_2; VAR_5++) {
  FUNC_3(VAR_5, VAR_1 | VAR_0);
  FUNC_1(VAR_5, ((void*)0));
  FUNC_2(VAR_5, ((void*)0));
 }
}
