
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _sas_device {int sas_address_parent; int sas_address; int starget; int handle; } ;
struct MPT3SAS_ADAPTER {int is_driver_loading; scalar_t__ hide_drives; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct _sas_device*) ;
 struct _sas_device* FUNC_1 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,struct _sas_device*) ;
 int FUNC_5 (struct _sas_device*) ;

__attribute__((used)) static void
FUNC_6(struct MPT3SAS_ADAPTER *VAR_0)
{
 struct _sas_device *VAR_1;

 if (VAR_0->hide_drives)
  return;

 while ((VAR_1 = FUNC_1(VAR_0))) {
  if (!FUNC_2(VAR_0, VAR_1->handle,
      VAR_1->sas_address_parent)) {
   FUNC_0(VAR_0, VAR_1);
   FUNC_5(VAR_1);
   continue;
  } else if (!VAR_1->starget) {






   if (!VAR_0->is_driver_loading) {
    FUNC_3(VAR_0,
        VAR_1->sas_address,
        VAR_1->sas_address_parent);
    FUNC_0(VAR_0, VAR_1);
    FUNC_5(VAR_1);
    continue;
   }
  }
  FUNC_4(VAR_0, VAR_1);
  FUNC_5(VAR_1);
 }
}
