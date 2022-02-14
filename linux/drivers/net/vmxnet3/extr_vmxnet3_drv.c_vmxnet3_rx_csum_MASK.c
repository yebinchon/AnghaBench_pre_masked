
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int frg; scalar_t__ csum; scalar_t__ udp; scalar_t__ tcp; scalar_t__ v6; scalar_t__ v4; int cnc; } ;
union Vmxnet3_GenericDesc {TYPE_2__ rcd; int * dword; } ;
struct vmxnet3_adapter {TYPE_1__* netdev; } ;
struct sk_buff {void* ip_summed; int csum; } ;
struct TYPE_3__ {int features; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_adapter *VAR_5,
  struct sk_buff *VAR_6,
  union Vmxnet3_GenericDesc *VAR_7)
{
 if (!VAR_7->rcd.cnc && VAR_5->netdev->features & VAR_2) {
  if (VAR_7->rcd.v4 &&
      (FUNC_2(VAR_7->dword[3]) &
       VAR_3) == VAR_3) {
   VAR_6->ip_summed = VAR_1;
   FUNC_0(!(VAR_7->rcd.tcp || VAR_7->rcd.udp));
   FUNC_0(VAR_7->rcd.frg);
  } else if (VAR_7->rcd.v6 && (FUNC_2(VAR_7->dword[3]) &
          (1 << VAR_4))) {
   VAR_6->ip_summed = VAR_1;
   FUNC_0(!(VAR_7->rcd.tcp || VAR_7->rcd.udp));
   FUNC_0(VAR_7->rcd.frg);
  } else {
   if (VAR_7->rcd.csum) {
    VAR_6->csum = FUNC_1(VAR_7->rcd.csum);
    VAR_6->ip_summed = VAR_0;
   } else {
    FUNC_3(VAR_6);
   }
  }
 } else {
  FUNC_3(VAR_6);
 }
}
