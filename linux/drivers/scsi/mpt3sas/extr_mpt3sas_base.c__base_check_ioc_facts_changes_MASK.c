
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct mpt3sas_facts {scalar_t__ MaxDevHandle; } ;
struct TYPE_2__ {scalar_t__ MaxDevHandle; } ;
struct MPT3SAS_ADAPTER {int pd_handles_sz; int pend_os_device_add_sz; int device_remove_in_progress_sz; TYPE_1__ facts; struct mpt3sas_facts prev_fw_facts; void* device_remove_in_progress; void* pend_os_device_add; void* blocking_handles; void* pd_handles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,void*) ;
 void* FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (struct mpt3sas_facts*,TYPE_1__*,int) ;
 int FUNC_3 (void*,int ,void*) ;

__attribute__((used)) static int
FUNC_4(struct MPT3SAS_ADAPTER *VAR_2)
{
 u16 VAR_3;
 void *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 void *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct mpt3sas_facts *VAR_8 = &VAR_2->prev_fw_facts;

 if (VAR_2->facts.MaxDevHandle > VAR_8->MaxDevHandle) {
  VAR_3 = (VAR_2->facts.MaxDevHandle / 8);
  if (VAR_2->facts.MaxDevHandle % 8)
   VAR_3++;

  VAR_4 = FUNC_1(VAR_2->pd_handles, VAR_3,
      VAR_1);
  if (!VAR_4) {
   FUNC_0(VAR_2,
       "Unable to allocate the memory for pd_handles of sz: %d\n",
       VAR_3);
   return -VAR_0;
  }
  FUNC_3(VAR_4 + VAR_2->pd_handles_sz, 0,
      (VAR_3 - VAR_2->pd_handles_sz));
  VAR_2->pd_handles = VAR_4;

  VAR_5 = FUNC_1(VAR_2->blocking_handles,
      VAR_3, VAR_1);
  if (!VAR_5) {
   FUNC_0(VAR_2,
       "Unable to allocate the memory for "
       "blocking_handles of sz: %d\n",
       VAR_3);
   return -VAR_0;
  }
  FUNC_3(VAR_5 + VAR_2->pd_handles_sz, 0,
      (VAR_3 - VAR_2->pd_handles_sz));
  VAR_2->blocking_handles = VAR_5;
  VAR_2->pd_handles_sz = VAR_3;

  VAR_6 = FUNC_1(VAR_2->pend_os_device_add,
      VAR_3, VAR_1);
  if (!VAR_6) {
   FUNC_0(VAR_2,
       "Unable to allocate the memory for pend_os_device_add of sz: %d\n",
       VAR_3);
   return -VAR_0;
  }
  FUNC_3(VAR_6 + VAR_2->pend_os_device_add_sz, 0,
      (VAR_3 - VAR_2->pend_os_device_add_sz));
  VAR_2->pend_os_device_add = VAR_6;
  VAR_2->pend_os_device_add_sz = VAR_3;

  VAR_7 = FUNC_1(
      VAR_2->device_remove_in_progress, VAR_3, VAR_1);
  if (!VAR_7) {
   FUNC_0(VAR_2,
       "Unable to allocate the memory for "
       "device_remove_in_progress of sz: %d\n "
       , VAR_3);
   return -VAR_0;
  }
  FUNC_3(VAR_7 +
      VAR_2->device_remove_in_progress_sz, 0,
      (VAR_3 - VAR_2->device_remove_in_progress_sz));
  VAR_2->device_remove_in_progress = VAR_7;
  VAR_2->device_remove_in_progress_sz = VAR_3;
 }

 FUNC_2(&VAR_2->prev_fw_facts, &VAR_2->facts, sizeof(struct mpt3sas_facts));
 return 0;
}
