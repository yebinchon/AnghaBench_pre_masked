
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int (* build_zero_len_sge_mpi ) (struct MPT3SAS_ADAPTER*,int *) ;} ;
struct TYPE_12__ {int IOCStatus; } ;
struct TYPE_9__ {int PageVersion; scalar_t__ PageNumber; int PageType; } ;
struct TYPE_11__ {int Action; int PageBufferSGE; TYPE_1__ Header; int ExtPageType; int Function; } ;
struct TYPE_10__ {int NumPhys; } ;
typedef TYPE_2__ Mpi2SasIOUnitPage0_t ;
typedef TYPE_3__ Mpi2ConfigRequest_t ;
typedef TYPE_4__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_3__*,TYPE_4__*,int ,TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,int *) ;

int
FUNC_4(struct MPT3SAS_ADAPTER *VAR_9, u8 *VAR_10)
{
 Mpi2ConfigRequest_t VAR_11;
 int VAR_12;
 u16 VAR_13;
 Mpi2ConfigReply_t VAR_14;
 Mpi2SasIOUnitPage0_t VAR_15;

 *VAR_10 = 0;
 FUNC_2(&VAR_11, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_11.Function = VAR_4;
 VAR_11.Action = VAR_0;
 VAR_11.Header.PageType = VAR_3;
 VAR_11.ExtPageType = VAR_2;
 VAR_11.Header.PageNumber = 0;
 VAR_11.Header.PageVersion = VAR_7;
 VAR_9->build_zero_len_sge_mpi(VAR_9, &VAR_11.PageBufferSGE);
 VAR_12 = FUNC_0(VAR_9, &VAR_11, &VAR_14,
     VAR_8, ((void*)0), 0);
 if (VAR_12)
  goto out;

 VAR_11.Action = VAR_1;
 VAR_12 = FUNC_0(VAR_9, &VAR_11, &VAR_14,
     VAR_8, &VAR_15,
     sizeof(Mpi2SasIOUnitPage0_t));
 if (!VAR_12) {
  VAR_13 = FUNC_1(VAR_14.IOCStatus) &
      VAR_5;
  if (VAR_13 == VAR_6)
   *VAR_10 = VAR_15.NumPhys;
 }
 out:
 return VAR_12;
}
