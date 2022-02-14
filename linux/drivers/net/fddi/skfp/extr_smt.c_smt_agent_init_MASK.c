
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ uniq_ticks; scalar_t__ please_reconnect; scalar_t__* pend; scalar_t__ smt_tid; } ;
struct TYPE_12__ {int * a; } ;
struct TYPE_8__ {TYPE_6__ sid_node; scalar_t__* sid_oem; } ;
struct TYPE_10__ {TYPE_3__* m; TYPE_2__ fddiSMTStationId; int * fddiSMTManufacturerData; } ;
struct TYPE_7__ {int fddi_home_addr; } ;
struct s_smc {TYPE_5__ sm; TYPE_4__ mib; TYPE_1__ hw; } ;
struct TYPE_9__ {int fddiMACUNDA_Flag; int fddiMACDupAddressTest; int fddiMACSMTAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct s_smc*,TYPE_6__*) ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (struct s_smc*) ;

void FUNC_4(struct s_smc *VAR_4)
{
 int VAR_5 ;




 VAR_4->mib.m[VAR_2].fddiMACSMTAddress = VAR_4->hw.fddi_home_addr ;




 VAR_4->mib.fddiSMTStationId.sid_oem[0] = 0 ;
 VAR_4->mib.fddiSMTStationId.sid_oem[1] = 0 ;
 FUNC_1(VAR_4,&VAR_4->mib.fddiSMTStationId.sid_node) ;
 for (VAR_5 = 0 ; VAR_5 < 6 ; VAR_5 ++) {
  VAR_4->mib.fddiSMTStationId.sid_node.a[VAR_5] =
   FUNC_0(VAR_4->mib.fddiSMTStationId.sid_node.a[VAR_5]);
 }
 VAR_4->mib.fddiSMTManufacturerData[0] =
  VAR_4->mib.fddiSMTStationId.sid_node.a[0] ;
 VAR_4->mib.fddiSMTManufacturerData[1] =
  VAR_4->mib.fddiSMTStationId.sid_node.a[1] ;
 VAR_4->mib.fddiSMTManufacturerData[2] =
  VAR_4->mib.fddiSMTStationId.sid_node.a[2] ;
 VAR_4->sm.smt_tid = 0 ;
 VAR_4->mib.m[VAR_2].fddiMACDupAddressTest = VAR_0 ;
 VAR_4->mib.m[VAR_2].fddiMACUNDA_Flag = VAR_1 ;

 FUNC_3(VAR_4) ;
 FUNC_2(VAR_4) ;

 for (VAR_5 = 0 ; VAR_5 < VAR_3 ; VAR_5++)
  VAR_4->sm.pend[VAR_5] = 0 ;
 VAR_4->sm.please_reconnect = 0 ;
 VAR_4->sm.uniq_ticks = 0 ;
}
