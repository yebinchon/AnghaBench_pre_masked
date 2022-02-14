
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct _sas_device {int list; scalar_t__ sas_address; int handle; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct _sas_device*,int *,int *) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct _sas_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_0,
 struct _sas_device *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1)
  return;
 FUNC_1(VAR_0, "removing handle(0x%04x), sas_addr(0x%016llx)\n",
   VAR_1->handle, (u64)VAR_1->sas_address);

 FUNC_0(VAR_0, VAR_1, ((void*)0), ((void*)0));





 FUNC_5(&VAR_0->sas_device_lock, VAR_2);
 if (!FUNC_3(&VAR_1->list)) {
  FUNC_2(&VAR_1->list);
  FUNC_4(VAR_1);
 }
 FUNC_6(&VAR_0->sas_device_lock, VAR_2);
}
