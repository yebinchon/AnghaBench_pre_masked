
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct _sas_device {TYPE_2__* starget; } ;
struct MPT3SAS_TARGET {int tm_busy; int handle; } ;
struct TYPE_5__ {int HeaderVersion; } ;
struct MPT3SAS_ADAPTER {int logging_level; int sas_device_lock; TYPE_1__ facts; } ;
struct TYPE_7__ {scalar_t__ ReasonCode; int SASAddress; } ;
struct TYPE_6__ {struct MPT3SAS_TARGET* hostdata; } ;
typedef TYPE_3__ Mpi2EventDataSasDeviceStatusChange_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct _sas_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct _sas_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct MPT3SAS_ADAPTER *VAR_3,
 Mpi2EventDataSasDeviceStatusChange_t *VAR_4)
{
 struct MPT3SAS_TARGET *VAR_5;
 struct _sas_device *VAR_6;
 u64 VAR_7;
 unsigned long VAR_8;




 if ((VAR_3->facts.HeaderVersion >> 8) < 0xC)
  return;

 if (VAR_4->ReasonCode !=
     VAR_1 &&
    VAR_4->ReasonCode !=
     VAR_0)
  return;

 FUNC_4(&VAR_3->sas_device_lock, VAR_8);
 VAR_7 = FUNC_2(VAR_4->SASAddress);
 VAR_6 = FUNC_0(VAR_3,
     VAR_7);

 if (!VAR_6 || !VAR_6->starget)
  goto out;

 VAR_5 = VAR_6->starget->hostdata;
 if (!VAR_5)
  goto out;

 if (VAR_4->ReasonCode ==
     VAR_1)
  VAR_5->tm_busy = 1;
 else
  VAR_5->tm_busy = 0;

 if (VAR_3->logging_level & VAR_2)
  FUNC_1(VAR_3,
      "%s tm_busy flag for handle(0x%04x)\n",
      (VAR_5->tm_busy == 1) ? "Enable" : "Disable",
      VAR_5->handle);

out:
 if (VAR_6)
  FUNC_3(VAR_6);

 FUNC_5(&VAR_3->sas_device_lock, VAR_8);
}
