
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _MPT_SCSI_HOST {int dummy; } ;
struct TYPE_4__ {scalar_t__ bus_type; scalar_t__ sh; } ;
typedef TYPE_1__ MPT_ADAPTER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct _MPT_SCSI_HOST*) ;
 struct _MPT_SCSI_HOST* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(MPT_ADAPTER *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if ((VAR_2->bus_type != VAR_1) || (!VAR_4))
  return VAR_4;



 if (VAR_3 == VAR_0 &&
     VAR_2->sh) {
  struct _MPT_SCSI_HOST *VAR_5 = FUNC_2(VAR_2->sh);

  FUNC_1(VAR_5);
 }

 return VAR_4;
}
