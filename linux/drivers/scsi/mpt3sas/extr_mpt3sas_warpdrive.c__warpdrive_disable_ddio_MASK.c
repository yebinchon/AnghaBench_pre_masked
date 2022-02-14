
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct _raid_device {scalar_t__ direct_io_enabled; } ;
struct MPT3SAS_ADAPTER {int raid_device_lock; } ;
struct TYPE_6__ {int IOCStatus; } ;
struct TYPE_5__ {int DevHandle; } ;
typedef TYPE_1__ Mpi2RaidVolPage1_t ;
typedef TYPE_2__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,TYPE_2__*,TYPE_1__*,int ,int) ;
 struct _raid_device* FUNC_2 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_3)
{
 Mpi2RaidVolPage1_t VAR_4;
 Mpi2ConfigReply_t VAR_5;
 struct _raid_device *VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 unsigned long VAR_9;

 VAR_7 = 0xFFFF;
 while (!(FUNC_1(VAR_3, &VAR_5,
     &VAR_4, VAR_2, VAR_7))) {
  VAR_8 = FUNC_0(VAR_5.IOCStatus) &
      VAR_1;
  if (VAR_8 == VAR_0)
   break;
  VAR_7 = FUNC_0(VAR_4);
  FUNC_3(&VAR_3->raid_device_lock, VAR_9);
  VAR_6 = FUNC_2(VAR_3, VAR_7);
  if (VAR_6)
   VAR_6->direct_io_enabled = 0;
  FUNC_4(&VAR_3->raid_device_lock, VAR_9);
 }
 return;
}
