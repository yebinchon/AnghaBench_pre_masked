
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int (* build_zero_len_sge_mpi ) (struct MPT3SAS_ADAPTER*,int *) ;} ;
struct TYPE_5__ {int PageVersion; scalar_t__ PageNumber; int PageType; } ;
struct TYPE_6__ {int Action; int PageAddress; int PageBufferSGE; TYPE_1__ Header; int Function; } ;
typedef int Mpi2RaidVolPage0_t ;
typedef TYPE_2__ Mpi2ConfigRequest_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_2__*,int *,int ,int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,int *) ;

int
FUNC_4(struct MPT3SAS_ADAPTER *VAR_6,
 Mpi2ConfigReply_t *VAR_7, Mpi2RaidVolPage0_t *VAR_8, u32 VAR_9,
 u32 VAR_10, u16 VAR_11)
{
 Mpi2ConfigRequest_t VAR_12;
 int VAR_13;

 FUNC_2(&VAR_12, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_12.Function = VAR_3;
 VAR_12.Action = VAR_0;
 VAR_12.Header.PageType = VAR_2;
 VAR_12.Header.PageNumber = 0;
 VAR_12.Header.PageVersion = VAR_4;
 VAR_6->build_zero_len_sge_mpi(VAR_6, &VAR_12.PageBufferSGE);
 VAR_13 = FUNC_0(VAR_6, &VAR_12, VAR_7,
     VAR_5, ((void*)0), 0);
 if (VAR_13)
  goto out;

 VAR_12.PageAddress = FUNC_1(VAR_9 | VAR_10);
 VAR_12.Action = VAR_1;
 VAR_13 = FUNC_0(VAR_6, &VAR_12, VAR_7,
     VAR_5, VAR_8, VAR_11);
 out:
 return VAR_13;
}
