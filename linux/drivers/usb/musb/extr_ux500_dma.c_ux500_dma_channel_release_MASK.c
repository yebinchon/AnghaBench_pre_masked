
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ux500_dma_channel {scalar_t__ is_allocated; int ch_num; TYPE_1__* controller; } ;
struct musb {int controller; } ;
struct dma_channel {scalar_t__ actual_len; int status; struct ux500_dma_channel* private_data; } ;
struct TYPE_2__ {struct musb* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct dma_channel *VAR_1)
{
 struct ux500_dma_channel *VAR_2 = VAR_1->private_data;
 struct musb *VAR_3 = VAR_2->controller->private_data;

 FUNC_0(VAR_3->controller, "channel=%d\n", VAR_2->ch_num);

 if (VAR_2->is_allocated) {
  VAR_2->is_allocated = 0;
  VAR_1->status = VAR_0;
  VAR_1->actual_len = 0;
 }
}
