
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef int uint32_t ;
typedef scalar_t__ uint ;
struct TYPE_13__ {TYPE_4__* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
struct TYPE_12__ {TYPE_3__* iobase; TYPE_1__* pdev; } ;
struct TYPE_10__ {int hccr; } ;
struct TYPE_11__ {TYPE_2__ isp24; } ;
struct TYPE_9__ {int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_10)
{
 uint32_t VAR_11 = 0;
 uint VAR_12 = 100;
 uint VAR_13 = 0;
 uint VAR_14;
 ulong VAR_15;

 if (VAR_10->hw->pdev->subsystem_device != 0x0175 &&
     VAR_10->hw->pdev->subsystem_device != 0x0240)
  return;

 FUNC_0(&VAR_10->hw->iobase->isp24.hccr, VAR_0);
 FUNC_4(100);

attempt:
 VAR_14 = VAR_7;
 VAR_15 = VAR_14 / VAR_12;
 while (VAR_15--) {
  FUNC_3(VAR_10, VAR_6);
  FUNC_2(VAR_10, &VAR_11);
  if (VAR_11 & VAR_1)
   break;
  FUNC_1(VAR_12);
  VAR_13 += VAR_12;
  if (VAR_13 > VAR_9)
   goto force;
 }

 if (!(VAR_11 & VAR_1))
  goto force;

 if (!(VAR_11 & VAR_3))
  goto acquired;

 FUNC_3(VAR_10, VAR_2);
 VAR_14 = VAR_8;
 VAR_15 = VAR_14 / VAR_12;
 while (VAR_15--) {
  FUNC_2(VAR_10, &VAR_11);
  if (!(VAR_11 & VAR_3))
   break;
  FUNC_1(VAR_12);
  VAR_13 += VAR_12;
  if (VAR_13 > VAR_9)
   goto force;
 }

 if (VAR_11 & VAR_3)
  FUNC_3(VAR_10, VAR_4);

 goto attempt;

force:
 FUNC_3(VAR_10, VAR_5);

acquired:
 return;
}
