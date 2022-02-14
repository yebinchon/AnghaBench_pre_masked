
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct _raid_device {scalar_t__ wwid; TYPE_1__* starget; } ;
struct MPT3SAS_TARGET {int deleted; } ;
struct MPT3SAS_ADAPTER {int raid_device_lock; } ;
struct TYPE_2__ {struct MPT3SAS_TARGET* hostdata; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,int ,int ) ;
 struct _raid_device* FUNC_2 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 struct _raid_device *VAR_2;
 struct MPT3SAS_TARGET *VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_0->raid_device_lock, VAR_4);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 && VAR_2->starget &&
     VAR_2->starget->hostdata) {
  VAR_3 =
      VAR_2->starget->hostdata;
  VAR_3->deleted = 1;
  FUNC_0(VAR_0,
      FUNC_1(VAR_0, "setting delete flag: handle(0x%04x), wwid(0x%016llx)\n",
        VAR_1, (u64)VAR_2->wwid));
 }
 FUNC_4(&VAR_0->raid_device_lock, VAR_4);
}
