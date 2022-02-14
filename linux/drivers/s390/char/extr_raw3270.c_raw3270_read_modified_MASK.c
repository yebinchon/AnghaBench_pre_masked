
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; scalar_t__ cda; int flags; int cmd_code; } ;
struct TYPE_6__ {int callback; TYPE_1__ ccw; } ;
struct raw3270 {scalar_t__ state; TYPE_2__ init_readmod; int init_view; TYPE_2__ init_data; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct raw3270 *VAR_5)
{
 if (VAR_5->state != VAR_2)
  return;

 FUNC_1(&VAR_5->init_readmod, 0, sizeof(VAR_5->init_readmod));
 FUNC_1(&VAR_5->init_data, 0, sizeof(VAR_5->init_data));
 VAR_5->init_readmod.ccw.cmd_code = VAR_3;
 VAR_5->init_readmod.ccw.flags = VAR_0;
 VAR_5->init_readmod.ccw.count = sizeof(VAR_5->init_data);
 VAR_5->init_readmod.ccw.cda = (__u32) FUNC_0(VAR_5->init_data);
 VAR_5->init_readmod.callback = VAR_4;
 VAR_5->state = VAR_1;
 FUNC_2(&VAR_5->init_view, &VAR_5->init_readmod);
}
