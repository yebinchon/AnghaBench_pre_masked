
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int list; } ;
struct cxgbit_device {int list; TYPE_1__ cskq; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbit_device*) ;
 int FUNC_1 (struct cxgbit_device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct cxgbit_device *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_6(&VAR_1->cskq.lock);
 if (FUNC_3(&VAR_1->cskq.list))
  VAR_2 = 1;
 FUNC_7(&VAR_1->cskq.lock);

 if (VAR_2) {
  FUNC_4(&VAR_0);
  FUNC_2(&VAR_1->list);
  FUNC_5(&VAR_0);

  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_1);
 }
}
