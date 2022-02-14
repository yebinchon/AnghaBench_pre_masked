
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct dasd_block {int request_queue; TYPE_1__* base; } ;
struct TYPE_2__ {int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct dasd_block*) ;
 struct dasd_block* FUNC_3 (struct dasd_block*,struct timer_list*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_2)
{
 unsigned long VAR_3;
 struct dasd_block *VAR_4;

 VAR_4 = FUNC_3(VAR_4, VAR_2, VAR_1);
 FUNC_5(FUNC_4(VAR_4->base->cdev), VAR_3);

 FUNC_1(VAR_4->base, VAR_0);
 FUNC_6(FUNC_4(VAR_4->base->cdev), VAR_3);
 FUNC_2(VAR_4);
 FUNC_0(VAR_4->request_queue, 1);
}
