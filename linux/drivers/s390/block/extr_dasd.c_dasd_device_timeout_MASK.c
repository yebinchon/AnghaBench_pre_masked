
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct dasd_device {int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*,int ) ;
 int FUNC_1 (struct dasd_device*) ;
 struct dasd_device* FUNC_2 (struct dasd_device*,struct timer_list*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 unsigned long VAR_3;
 struct dasd_device *VAR_4;

 VAR_4 = FUNC_2(VAR_4, VAR_2, VAR_1);
 FUNC_4(FUNC_3(VAR_4->cdev), VAR_3);

 FUNC_0(VAR_4, VAR_0);
 FUNC_5(FUNC_3(VAR_4->cdev), VAR_3);
 FUNC_1(VAR_4);
}
