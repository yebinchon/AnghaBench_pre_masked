
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct scsiio_tracker {int msix_io; int scmd; } ;
struct MPT3SAS_ADAPTER {scalar_t__ hi_priority_smid; int (* get_msix_index_for_smlio ) (struct MPT3SAS_ADAPTER*,int ) ;} ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,int *) ;
 struct scsiio_tracker* FUNC_1 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int ) ;

__attribute__((used)) static u8
FUNC_3(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 struct scsiio_tracker *VAR_2 = ((void*)0);

 if (VAR_1 < VAR_0->hi_priority_smid)
  VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2 == ((void*)0))
  return FUNC_0(VAR_0, ((void*)0));

 VAR_2->msix_io = VAR_0->get_msix_index_for_smlio(VAR_0, VAR_2->scmd);
 return VAR_2->msix_io;
}
