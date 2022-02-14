
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t7l66xb {unsigned int irq_base; int irq; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct t7l66xb*) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct t7l66xb*) ;
 int FUNC_3 (int ,int ) ;
 struct t7l66xb* FUNC_4 (struct platform_device*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_5)
{
 struct t7l66xb *VAR_6 = FUNC_4(VAR_5);
 unsigned int VAR_7, VAR_8;

 VAR_8 = VAR_6->irq_base;

 for (VAR_7 = VAR_8; VAR_7 < VAR_8 + VAR_1; VAR_7++) {
  FUNC_1(VAR_7, &VAR_3, VAR_2);
  FUNC_2(VAR_7, VAR_6);
 }

 FUNC_3(VAR_6->irq, VAR_0);
 FUNC_0(VAR_6->irq, VAR_4, VAR_6);
}
