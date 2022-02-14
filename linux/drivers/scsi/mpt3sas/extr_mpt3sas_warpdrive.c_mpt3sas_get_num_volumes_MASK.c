
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_6__ {int IOCStatus; } ;
struct TYPE_5__ {int DevHandle; } ;
typedef TYPE_1__ Mpi2RaidVolPage1_t ;
typedef TYPE_2__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,TYPE_2__*,TYPE_1__*,int ,int) ;

u8
FUNC_2(struct MPT3SAS_ADAPTER *VAR_3)
{
 Mpi2RaidVolPage1_t VAR_4;
 Mpi2ConfigReply_t VAR_5;
 u16 VAR_6;
 u8 VAR_7 = 0;
 u16 VAR_8;

 VAR_6 = 0xFFFF;
 while (!(FUNC_1(VAR_3, &VAR_5,
     &VAR_4, VAR_2, VAR_6))) {
  VAR_8 = FUNC_0(VAR_5.IOCStatus) &
      VAR_1;
  if (VAR_8 == VAR_0)
   break;
  VAR_7++;
  VAR_6 = FUNC_0(VAR_4);
 }
 return VAR_7;
}
