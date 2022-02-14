
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_2__** mbox; } ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ mbox_poll_wk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct octeon_device *VAR_0)
{
 FUNC_0(&VAR_0->mbox[0]->mbox_poll_wk.work);
 FUNC_1(VAR_0->mbox[0]);
 return 0;
}
