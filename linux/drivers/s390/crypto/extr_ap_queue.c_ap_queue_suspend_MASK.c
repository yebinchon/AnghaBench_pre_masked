
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue {int lock; int state; } ;
struct ap_device {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ap_queue*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ap_queue* FUNC_3 (int *) ;

void FUNC_4(struct ap_device *VAR_4)
{
 struct ap_queue *VAR_5 = FUNC_3(&VAR_4->device);


 FUNC_1(&VAR_5->lock);
 VAR_5->state = VAR_2;
 while (FUNC_0(VAR_5, VAR_0) != VAR_3)
  ;
 VAR_5->state = VAR_1;
 FUNC_2(&VAR_5->lock);
}
