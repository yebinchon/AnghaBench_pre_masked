
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct Mpi2ManufacturingPage11_t {int dummy; } ;
struct MPT3SAS_ADAPTER {int (* build_zero_len_sge_mpi ) (struct MPT3SAS_ADAPTER*,int *) ;} ;
struct TYPE_5__ {int PageNumber; int PageVersion; int PageType; } ;
struct TYPE_6__ {int Action; int PageBufferSGE; TYPE_1__ Header; int Function; } ;
typedef TYPE_2__ Mpi2ConfigRequest_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,TYPE_2__*,int *,int ,struct Mpi2ManufacturingPage11_t*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int *) ;

int
FUNC_3(struct MPT3SAS_ADAPTER *VAR_6,
 Mpi2ConfigReply_t *VAR_7,
 struct Mpi2ManufacturingPage11_t *VAR_8)
{
 Mpi2ConfigRequest_t VAR_9;
 int VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(Mpi2ConfigRequest_t));
 VAR_9.Function = VAR_3;
 VAR_9.Action = VAR_0;
 VAR_9.Header.PageType = VAR_2;
 VAR_9.Header.PageNumber = 11;
 VAR_9.Header.PageVersion = VAR_4;
 VAR_6->build_zero_len_sge_mpi(VAR_6, &VAR_9.PageBufferSGE);
 VAR_10 = FUNC_0(VAR_6, &VAR_9, VAR_7,
     VAR_5, ((void*)0), 0);
 if (VAR_10)
  goto out;

 VAR_9.Action = VAR_1;
 VAR_10 = FUNC_0(VAR_6, &VAR_9, VAR_7,
     VAR_5, VAR_8,
     sizeof(*VAR_8));
 out:
 return VAR_10;
}
