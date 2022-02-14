
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct pci_driver {struct pci_device_id* id_table; } ;
struct pci_device_id {unsigned long driver_data; scalar_t__ class_mask; scalar_t__ subvendor; scalar_t__ vendor; } ;
struct pci_dev {void* class; void* subsystem_device; void* subsystem_vendor; void* device; void* vendor; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_driver*,void*,void*,void*,void*,void*,void*,unsigned long) ;
 scalar_t__ FUNC_3 (struct pci_device_id*,struct pci_dev*) ;
 int FUNC_4 (char const*,char*,void**,void**,void**,void**,void**,void**,unsigned long*) ;
 struct pci_driver* FUNC_5 (struct device_driver*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device_driver *VAR_5, const char *VAR_6,
       size_t VAR_7)
{
 struct pci_driver *VAR_8 = FUNC_5(VAR_5);
 const struct pci_device_id *VAR_9 = VAR_8->id_table;
 u32 VAR_10, VAR_11, VAR_12 = VAR_4,
  VAR_13 = VAR_4, VAR_14 = 0, VAR_15 = 0;
 unsigned long VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;

 VAR_17 = FUNC_4(VAR_6, "%x %x %x %x %x %x %lx",
   &VAR_10, &VAR_11, &VAR_12, &VAR_13,
   &VAR_14, &VAR_15, &VAR_16);
 if (VAR_17 < 2)
  return -VAR_1;

 if (VAR_17 != 7) {
  struct pci_dev *VAR_19 = FUNC_1(sizeof(*VAR_19), VAR_3);
  if (!VAR_19)
   return -VAR_2;

  VAR_19->vendor = VAR_10;
  VAR_19->device = VAR_11;
  VAR_19->subsystem_vendor = VAR_12;
  VAR_19->subsystem_device = VAR_13;
  VAR_19->class = VAR_14;

  if (FUNC_3(VAR_8->id_table, VAR_19))
   VAR_18 = -VAR_0;

  FUNC_0(VAR_19);

  if (VAR_18)
   return VAR_18;
 }



 if (VAR_9) {
  VAR_18 = -VAR_1;
  while (VAR_9->vendor || VAR_9->subvendor || VAR_9->class_mask) {
   if (VAR_16 == VAR_9->driver_data) {
    VAR_18 = 0;
    break;
   }
   VAR_9++;
  }
  if (VAR_18)
   return VAR_18;
 }

 VAR_18 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12, VAR_13,
          VAR_14, VAR_15, VAR_16);
 if (VAR_18)
  return VAR_18;
 return VAR_7;
}
