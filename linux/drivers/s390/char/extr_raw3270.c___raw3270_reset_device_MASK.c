
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; scalar_t__ cda; int flags; int cmd_code; } ;
struct TYPE_4__ {int callback; TYPE_1__ ccw; scalar_t__ view; } ;
struct raw3270 {scalar_t__ state; TYPE_2__ init_reset; int init_view; int * init_data; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct raw3270*,int *,TYPE_2__*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct raw3270 *VAR_7)
{
 int VAR_8;


 if (VAR_7->init_reset.view)
  return -VAR_1;

 VAR_7->init_data[0] = VAR_5;
 VAR_7->init_reset.ccw.cmd_code = VAR_4;
 VAR_7->init_reset.ccw.flags = VAR_0;
 VAR_7->init_reset.ccw.count = 1;
 VAR_7->init_reset.ccw.cda = (__u32) FUNC_0(VAR_7->init_data);
 VAR_7->init_reset.callback = VAR_6;
 VAR_8 = FUNC_1(VAR_7, &VAR_7->init_view, &VAR_7->init_reset);
 if (VAR_8 == 0 && VAR_7->state == VAR_2)
  VAR_7->state = VAR_3;
 return VAR_8;
}
