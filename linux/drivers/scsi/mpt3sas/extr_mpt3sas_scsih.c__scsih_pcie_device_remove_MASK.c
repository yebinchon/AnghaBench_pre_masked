
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u64 ;
struct _pcie_device {char* handle; scalar_t__ enclosure_handle; char* slot; char* connector_name; char* enclosure_level; int serial_number; int list; scalar_t__ enclosure_logical_id; scalar_t__ wwid; } ;
struct MPT3SAS_ADAPTER {int pcie_device_lock; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct _pcie_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_0,
 struct _pcie_device *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 if (!VAR_1)
  return;
 FUNC_0(VAR_0, "removing handle(0x%04x), wwid(0x%016llx)\n",
   VAR_1->handle, (u64)VAR_1->wwid);
 if (VAR_1->enclosure_handle != 0)
  FUNC_0(VAR_0, "removing enclosure logical id(0x%016llx), slot(%d)\n",
    (u64)VAR_1->enclosure_logical_id,
    VAR_1->slot);
 if (VAR_1->connector_name[0] != '\0')
  FUNC_0(VAR_0, "removing enclosure level(0x%04x), connector name( %s)\n",
    VAR_1->enclosure_level,
    VAR_1->connector_name);

 FUNC_5(&VAR_0->pcie_device_lock, VAR_2);
 if (!FUNC_3(&VAR_1->list)) {
  FUNC_2(&VAR_1->list);
  VAR_3 = 1;
 }
 FUNC_6(&VAR_0->pcie_device_lock, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1->serial_number);
  FUNC_4(VAR_1);
 }
}
