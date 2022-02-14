
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_hba {TYPE_1__* pcidev; } ;
struct firmware {int size; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_7, uint32_t VAR_8,
 uint32_t VAR_9, uint32_t VAR_10, uint32_t VAR_11, uint32_t VAR_12,
 const struct firmware *VAR_13)
{
 if ((VAR_8 == VAR_0) ||
     (VAR_7->pcidev->device == VAR_5 &&
      VAR_9 != VAR_3) ||
     (VAR_7->pcidev->device == VAR_6 &&
      VAR_9 != VAR_4))
  FUNC_0(VAR_7, VAR_1, VAR_2,
   "3030 This firmware version is not supported on "
   "this HBA model. Device:%x Magic:%x Type:%x "
   "ID:%x Size %d %zd\n",
   VAR_7->pcidev->device, VAR_9, VAR_10, VAR_11,
   VAR_12, VAR_13->size);
 else
  FUNC_0(VAR_7, VAR_1, VAR_2,
   "3022 FW Download failed. Device:%x Magic:%x Type:%x "
   "ID:%x Size %d %zd\n",
   VAR_7->pcidev->device, VAR_9, VAR_10, VAR_11,
   VAR_12, VAR_13->size);
}
