
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;



__attribute__((used)) static const char * FUNC_0(const struct pci_device_id *VAR_0)
{
 return VAR_0->driver_data ? (const char *)VAR_0->driver_data : "Unknown";
}
