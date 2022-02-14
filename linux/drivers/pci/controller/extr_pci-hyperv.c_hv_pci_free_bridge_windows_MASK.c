
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_pcibus_device {TYPE_1__* high_mmio_res; scalar_t__ high_mmio_space; TYPE_1__* low_mmio_res; scalar_t__ low_mmio_space; } ;
struct TYPE_2__ {int start; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hv_pcibus_device *VAR_1)
{





 if (VAR_1->low_mmio_space && VAR_1->low_mmio_res) {
  VAR_1->low_mmio_res->flags |= VAR_0;
  FUNC_1(VAR_1->low_mmio_res->start,
    FUNC_0(VAR_1->low_mmio_res));
 }

 if (VAR_1->high_mmio_space && VAR_1->high_mmio_res) {
  VAR_1->high_mmio_res->flags |= VAR_0;
  FUNC_1(VAR_1->high_mmio_res->start,
    FUNC_0(VAR_1->high_mmio_res));
 }
}
