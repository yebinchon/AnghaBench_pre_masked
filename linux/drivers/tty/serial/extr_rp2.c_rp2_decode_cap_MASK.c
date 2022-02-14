
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;



__attribute__((used)) static inline void FUNC_0(const struct pci_device_id *VAR_0,
      int *VAR_1, int *VAR_2)
{
 *VAR_1 = VAR_0->driver_data >> 8;
 *VAR_2 = VAR_0->driver_data & 0xff;
}
