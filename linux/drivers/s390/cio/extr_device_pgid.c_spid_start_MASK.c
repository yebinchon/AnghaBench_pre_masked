
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_request {int lpm; int singlepath; int callback; int maxretries; int timeout; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct ccw_request req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccw_request*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ccw_device*) ;

__attribute__((used)) static void FUNC_2(struct ccw_device *VAR_3)
{
 struct ccw_request *VAR_4 = &VAR_3->private->req;


 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->timeout = VAR_1;
 VAR_4->maxretries = VAR_0;
 VAR_4->lpm = 0x80;
 VAR_4->singlepath = 1;
 VAR_4->callback = VAR_2;
 FUNC_1(VAR_3);
}
