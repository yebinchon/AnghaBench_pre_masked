
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {scalar_t__ state; int lock; int global_domain; } ;


 int FUNC_0 (struct rtllib_device*) ;
 scalar_t__ FUNC_1 (struct rtllib_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct rtllib_device*) ;
 int FUNC_3 (struct rtllib_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct rtllib_device *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_1(VAR_1) && !FUNC_0(VAR_1)) {
  if (!VAR_1->global_domain)
   return;
 }





 FUNC_2(VAR_1);
 FUNC_4(&VAR_1->lock, VAR_2);

 if (VAR_1->state == VAR_0)
  FUNC_3(VAR_1);
 FUNC_5(&VAR_1->lock, VAR_2);
}
