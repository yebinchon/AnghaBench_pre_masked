
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_channel {int delay; int list; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct usbatm_channel *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_1->delay, VAR_0, 0);
}
