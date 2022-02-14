
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct at91_udc {int lock; } ;


 struct at91_udc* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct at91_udc*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_0)
{
 struct at91_udc *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;


 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_1(FUNC_0(VAR_0), 0);
 FUNC_3(&VAR_1->lock, VAR_2);
}
