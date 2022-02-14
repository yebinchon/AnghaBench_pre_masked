
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_host {int lock; int (* set_param ) (struct memstick_host*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct memstick_host*,int ,int ) ;

void FUNC_3(struct memstick_host *VAR_2)
{
 FUNC_0(&VAR_2->lock);
 VAR_2->set_param(VAR_2, VAR_0, VAR_1);
 FUNC_1(&VAR_2->lock);
}
