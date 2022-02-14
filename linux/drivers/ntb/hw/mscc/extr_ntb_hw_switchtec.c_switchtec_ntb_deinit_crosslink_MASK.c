
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_ntb {scalar_t__ mmio_xlink_win; TYPE_1__* stdev; } ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct switchtec_ntb *VAR_0)
{
 if (VAR_0->mmio_xlink_win)
  FUNC_0(VAR_0->stdev->pdev, VAR_0->mmio_xlink_win);
}
