
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct intel_ntb_dev {TYPE_1__* peer_reg; int peer_addr; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int spad; } ;


 int FUNC_0 (struct intel_ntb_dev*,int,int *,int ,int ) ;
 struct intel_ntb_dev* FUNC_1 (struct ntb_dev*) ;

int FUNC_2(struct ntb_dev *VAR_0, int VAR_1, int VAR_2,
        phys_addr_t *VAR_3)
{
 struct intel_ntb_dev *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(VAR_4, VAR_2, VAR_3, VAR_4->peer_addr,
         VAR_4->peer_reg->spad);
}
