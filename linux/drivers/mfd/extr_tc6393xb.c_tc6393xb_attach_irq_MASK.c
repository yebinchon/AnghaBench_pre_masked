
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc6393xb {unsigned int irq_base; int irq; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ,int ,struct tc6393xb*) ;
 int FUNC_2 (unsigned int,int *,int ) ;
 int FUNC_3 (unsigned int,struct tc6393xb*) ;
 int FUNC_4 (int ,int ) ;
 struct tc6393xb* FUNC_5 (struct platform_device*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_7)
{
 struct tc6393xb *VAR_8 = FUNC_5(VAR_7);
 unsigned int VAR_9, VAR_10;

 VAR_10 = VAR_8->irq_base;

 for (VAR_9 = VAR_10; VAR_9 < VAR_10 + VAR_3; VAR_9++) {
  FUNC_2(VAR_9, &VAR_5, VAR_4);
  FUNC_3(VAR_9, VAR_8);
  FUNC_0(VAR_9, VAR_1 | VAR_0);
 }

 FUNC_4(VAR_8->irq, VAR_2);
 FUNC_1(VAR_8->irq, VAR_6,
      VAR_8);
}
