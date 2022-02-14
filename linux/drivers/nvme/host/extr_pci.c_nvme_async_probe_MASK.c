
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scan_work; int reset_work; } ;
struct nvme_dev {TYPE_1__ ctrl; } ;
typedef int async_cookie_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, async_cookie_t VAR_1)
{
 struct nvme_dev *VAR_2 = VAR_0;

 FUNC_0(&VAR_2->ctrl.reset_work);
 FUNC_0(&VAR_2->ctrl.scan_work);
 FUNC_1(&VAR_2->ctrl);
}
