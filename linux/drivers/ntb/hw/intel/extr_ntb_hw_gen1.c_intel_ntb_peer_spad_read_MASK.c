
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ntb_dev {int dummy; } ;
struct intel_ntb_dev {TYPE_1__* peer_reg; scalar_t__ peer_mmio; } ;
struct TYPE_2__ {scalar_t__ spad; } ;


 int FUNC_0 (struct intel_ntb_dev*,int,scalar_t__) ;
 struct intel_ntb_dev* FUNC_1 (struct ntb_dev*) ;

u32 FUNC_2(struct ntb_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct intel_ntb_dev *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2,
         VAR_3->peer_mmio +
         VAR_3->peer_reg->spad);
}
