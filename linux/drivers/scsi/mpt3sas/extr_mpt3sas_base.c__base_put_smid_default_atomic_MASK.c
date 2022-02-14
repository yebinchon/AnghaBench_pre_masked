
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {TYPE_1__* chip; } ;
struct TYPE_4__ {int SMID; int MSIxIndex; int RequestFlags; } ;
struct TYPE_3__ {int AtomicRequestDescriptorPost; } ;
typedef TYPE_2__ Mpi26AtomicRequestDescriptor_t ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct MPT3SAS_ADAPTER *VAR_1, u16 VAR_2)
{
 Mpi26AtomicRequestDescriptor_t VAR_3;
 u32 *VAR_4 = (u32 *)&VAR_3;

 VAR_3.RequestFlags = VAR_0;
 VAR_3.MSIxIndex = FUNC_0(VAR_1, VAR_2);
 VAR_3.SMID = FUNC_1(VAR_2);

 FUNC_3(FUNC_2(*VAR_4), &VAR_1->chip->AtomicRequestDescriptorPost);
}
