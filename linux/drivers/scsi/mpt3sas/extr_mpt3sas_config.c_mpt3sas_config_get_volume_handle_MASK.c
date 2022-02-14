
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u16 ;
struct MPT3SAS_ADAPTER {int (* build_zero_len_sge_mpi ) (struct MPT3SAS_ADAPTER*,int *) ;} ;
struct TYPE_16__ {int IOCStatus; int ExtPageLength; } ;
struct TYPE_12__ {scalar_t__ PageNumber; int PageVersion; int PageType; } ;
struct TYPE_15__ {int PageAddress; int Action; int PageBufferSGE; TYPE_1__ Header; int ExtPageType; int Function; } ;
struct TYPE_14__ {int NumElements; int ConfigNum; TYPE_2__* ConfigElement; } ;
struct TYPE_13__ {int VolDevHandle; int PhysDiskDevHandle; int ElementFlags; } ;
typedef TYPE_3__ Mpi2RaidConfigurationPage0_t ;
typedef TYPE_4__ Mpi2ConfigRequest_t ;
typedef TYPE_5__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_4__*,TYPE_5__*,int ,TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,int *) ;

int
FUNC_7(struct MPT3SAS_ADAPTER *VAR_15, u16 VAR_16,
 u16 *VAR_17)
{
 Mpi2RaidConfigurationPage0_t *VAR_18 = ((void*)0);
 Mpi2ConfigRequest_t VAR_19;
 Mpi2ConfigReply_t VAR_20;
 int VAR_21, VAR_22, VAR_23;
 u16 VAR_24;
 int VAR_25;
 u16 VAR_26;
 u16 VAR_27;

 *VAR_17 = 0;
 FUNC_5(&VAR_19, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_19.Function = VAR_5;
 VAR_19.Action = VAR_1;
 VAR_19.Header.PageType = VAR_4;
 VAR_19.ExtPageType = VAR_3;
 VAR_19.Header.PageVersion = VAR_12;
 VAR_19.Header.PageNumber = 0;
 VAR_15->build_zero_len_sge_mpi(VAR_15, &VAR_19.PageBufferSGE);
 VAR_21 = FUNC_0(VAR_15, &VAR_19, &VAR_20,
     VAR_14, ((void*)0), 0);
 if (VAR_21)
  goto out;

 VAR_19.Action = VAR_2;
 VAR_23 = (FUNC_4(VAR_20.ExtPageLength) * 4);
 VAR_18 = FUNC_3(VAR_23, VAR_0);
 if (!VAR_18) {
  VAR_21 = -1;
  goto out;
 }

 VAR_25 = 0xff;
 while (1) {
  VAR_19.PageAddress = FUNC_1(VAR_25 +
      VAR_13);
  VAR_21 = FUNC_0(VAR_15, &VAR_19, &VAR_20,
      VAR_14, VAR_18,
      VAR_23);
  if (VAR_21)
   goto out;
  VAR_21 = -1;
  VAR_24 = FUNC_4(VAR_20.IOCStatus) &
      VAR_6;
  if (VAR_24 != VAR_7)
   goto out;
  for (VAR_22 = 0; VAR_22 < VAR_18->NumElements; VAR_22++) {
   VAR_26 = FUNC_4(VAR_18->
       ConfigElement[VAR_22].ElementFlags) &
       VAR_9;
   if (VAR_26 ==
       VAR_11 ||
       VAR_26 ==
       VAR_10) {
    VAR_27 =
        FUNC_4(VAR_18->ConfigElement[VAR_22].
        PhysDiskDevHandle);
    if (VAR_27 == VAR_16) {
     *VAR_17 =
         FUNC_4(VAR_18->
         ConfigElement[VAR_22].VolDevHandle);
     VAR_21 = 0;
     goto out;
    }
   } else if (VAR_26 ==
       VAR_8) {
    *VAR_17 = 0;
    VAR_21 = 0;
    goto out;
   }
  }
  VAR_25 = VAR_18->ConfigNum;
 }
 out:
 FUNC_2(VAR_18);
 return VAR_21;
}
