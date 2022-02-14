
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct octeon_device {size_t octeon_id; int device_name; int mem_access_lock; int pci_win_lock; } ;


 size_t VAR_0 ;
 struct octeon_device* FUNC_0 (size_t,size_t) ;
 struct octeon_device** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct octeon_device *FUNC_5(u32 VAR_4,
          u32 VAR_5)
{
 u32 VAR_6 = 0;
 struct octeon_device *VAR_7 = ((void*)0);

 FUNC_2(&VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (!VAR_1[VAR_6])
   break;

 if (VAR_6 < VAR_0) {
  VAR_7 = FUNC_0(VAR_4, VAR_5);
  if (VAR_7) {
   VAR_2++;
   VAR_1[VAR_6] = VAR_7;
  }
 }

 FUNC_4(&VAR_3);
 if (!VAR_7)
  return ((void*)0);

 FUNC_3(&VAR_7->pci_win_lock);
 FUNC_3(&VAR_7->mem_access_lock);

 VAR_7->octeon_id = VAR_6;
 FUNC_1(VAR_7->device_name, sizeof(VAR_7->device_name),
   "LiquidIO%d", (VAR_7->octeon_id));

 return VAR_7;
}
