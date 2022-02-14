
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int IRVolumeMappingFlags; } ;
struct TYPE_3__ {int ProtocolFlags; } ;
struct MPT3SAS_ADAPTER {TYPE_2__ ioc_pg8; scalar_t__ ir_firmware; TYPE_1__ facts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_3)
{
 u16 VAR_4;

 if (!(VAR_3->facts.ProtocolFlags & VAR_0))
  return;

 FUNC_0(VAR_3);

 if (VAR_3->ir_firmware) {
  VAR_4 =
      FUNC_4(VAR_3->ioc_pg8.IRVolumeMappingFlags) &
      VAR_2;
  if (VAR_4 ==
      VAR_1) {
   FUNC_2(VAR_3);
   FUNC_3(VAR_3);
  } else {
   FUNC_3(VAR_3);
   FUNC_2(VAR_3);
  }
 } else {
  FUNC_3(VAR_3);
  FUNC_1(VAR_3);
 }
}
