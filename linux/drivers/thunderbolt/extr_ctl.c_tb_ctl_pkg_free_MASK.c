
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buffer_phy; } ;
struct ctl_pkg {TYPE_2__ frame; int buffer; TYPE_1__* ctl; } ;
struct TYPE_3__ {int frame_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ctl_pkg*) ;

__attribute__((used)) static void FUNC_2(struct ctl_pkg *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->ctl->frame_pool,
         VAR_0->buffer, VAR_0->frame.buffer_phy);
  FUNC_1(VAR_0);
 }
}
