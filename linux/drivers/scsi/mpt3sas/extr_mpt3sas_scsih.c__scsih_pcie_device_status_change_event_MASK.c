
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct fw_event_work {scalar_t__ event_data; } ;
struct _pcie_device {TYPE_1__* starget; } ;
struct MPT3SAS_TARGET {int tm_busy; } ;
struct MPT3SAS_ADAPTER {int logging_level; int pcie_device_lock; } ;
struct TYPE_5__ {scalar_t__ ReasonCode; int WWID; } ;
struct TYPE_4__ {struct MPT3SAS_TARGET* hostdata; } ;
typedef TYPE_2__ Mpi26EventDataPCIeDeviceStatusChange_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct _pcie_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct MPT3SAS_ADAPTER *VAR_3,
 struct fw_event_work *VAR_4)
{
 struct MPT3SAS_TARGET *VAR_5;
 struct _pcie_device *VAR_6;
 u64 VAR_7;
 unsigned long VAR_8;
 Mpi26EventDataPCIeDeviceStatusChange_t *VAR_9 =
  (Mpi26EventDataPCIeDeviceStatusChange_t *)VAR_4->event_data;
 if (VAR_3->logging_level & VAR_2)
  FUNC_1(VAR_3,
   VAR_9);

 if (VAR_9->ReasonCode !=
  VAR_1 &&
  VAR_9->ReasonCode !=
  VAR_0)
  return;

 FUNC_4(&VAR_3->pcie_device_lock, VAR_8);
 VAR_7 = FUNC_2(VAR_9->WWID);
 VAR_6 = FUNC_0(VAR_3, VAR_7);

 if (!VAR_6 || !VAR_6->starget)
  goto out;

 VAR_5 = VAR_6->starget->hostdata;
 if (!VAR_5)
  goto out;

 if (VAR_9->ReasonCode ==
  VAR_1)
  VAR_5->tm_busy = 1;
 else
  VAR_5->tm_busy = 0;
out:
 if (VAR_6)
  FUNC_3(VAR_6);

 FUNC_5(&VAR_3->pcie_device_lock, VAR_8);
}
