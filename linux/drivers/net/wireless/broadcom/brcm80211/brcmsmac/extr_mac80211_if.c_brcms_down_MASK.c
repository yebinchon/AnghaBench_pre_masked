
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct brcms_info {int lock; int callbacks; int wlc; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct brcms_info *VAR_0)
{
 uint VAR_1, VAR_2 = 0;


 VAR_2 = FUNC_2(VAR_0->wlc);
 VAR_1 = FUNC_1(&VAR_0->callbacks) - VAR_2;


 FUNC_4(&VAR_0->lock);




 FUNC_0((FUNC_1(&VAR_0->callbacks) > VAR_1), 100 * 1000);

 FUNC_3(&VAR_0->lock);
}
