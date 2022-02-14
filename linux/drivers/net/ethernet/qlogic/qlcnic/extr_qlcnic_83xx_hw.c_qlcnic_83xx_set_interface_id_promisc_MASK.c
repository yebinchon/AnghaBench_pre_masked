
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int rx_mac_learn; TYPE_1__* recv_ctx; } ;
struct TYPE_2__ {int context_id; } ;


 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,int*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_0,
       u32 *VAR_1)
{
 if (FUNC_2(VAR_0)) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_1);
  VAR_0->rx_mac_learn = 1;
 } else {
  if (!FUNC_3(VAR_0))
   *VAR_1 = VAR_0->recv_ctx->context_id << 16;
 }
}
