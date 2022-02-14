
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t7l66xb {unsigned int irq_base; int irq; } ;
struct platform_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 struct t7l66xb* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_1)
{
 struct t7l66xb *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3, VAR_4;

 VAR_4 = VAR_2->irq_base;

 FUNC_0(VAR_2->irq, ((void*)0), ((void*)0));

 for (VAR_3 = VAR_4; VAR_3 < VAR_4 + VAR_0; VAR_3++) {
  FUNC_1(VAR_3, ((void*)0));
  FUNC_2(VAR_3, ((void*)0));
 }
}
