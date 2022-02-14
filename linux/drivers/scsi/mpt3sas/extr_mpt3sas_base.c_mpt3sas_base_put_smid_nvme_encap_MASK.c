
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int scsi_lookup_lock; TYPE_1__* chip; } ;
struct TYPE_5__ {scalar_t__ DescriptorTypeDependent; scalar_t__ LMID; int SMID; int MSIxIndex; int RequestFlags; } ;
struct TYPE_6__ {TYPE_2__ Default; } ;
struct TYPE_4__ {int RequestDescriptorPostLow; } ;
typedef TYPE_3__ Mpi2RequestDescriptorUnion_t ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1, u16 VAR_2)
{
 Mpi2RequestDescriptorUnion_t VAR_3;
 u64 *VAR_4 = (u64 *)&VAR_3;

 VAR_3.Default.RequestFlags =
  VAR_0;
 VAR_3.Default.MSIxIndex = FUNC_0(VAR_1, VAR_2);
 VAR_3.Default.SMID = FUNC_2(VAR_2);
 VAR_3.Default.LMID = 0;
 VAR_3.Default.DescriptorTypeDependent = 0;
 FUNC_1(*VAR_4, &VAR_1->chip->RequestDescriptorPostLow,
     &VAR_1->scsi_lookup_lock);
}
