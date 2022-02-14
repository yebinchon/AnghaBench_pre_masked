
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ql_adapter {TYPE_1__* ndev; } ;
struct ib_mac_iocb_rsp {int flags2; } ;
struct TYPE_2__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ql_adapter *VAR_4,
      struct ib_mac_iocb_rsp *VAR_5,
      void *VAR_6, size_t *VAR_7)
{
 u16 *VAR_8;

 if (VAR_4->ndev->features & VAR_2)
  return;
 if (VAR_5->flags2 & VAR_1) {
  VAR_8 = (u16 *)VAR_6;

  if (VAR_8[6] == VAR_0 &&
      VAR_8[8] == VAR_0)
   *VAR_7 += 2 * VAR_3;
  else
   *VAR_7 += VAR_3;
 }
}
