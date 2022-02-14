
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vfio_pci_device {int err_trigger; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,unsigned int,int ,void*) ;

__attribute__((used)) static int FUNC_1(struct vfio_pci_device *VAR_2,
        unsigned VAR_3, unsigned VAR_4,
        unsigned VAR_5, uint32_t VAR_6, void *VAR_7)
{
 if (VAR_3 != VAR_1 || VAR_4 != 0 || VAR_5 > 1)
  return -VAR_0;

 return FUNC_0(&VAR_2->err_trigger,
            VAR_5, VAR_6, VAR_7);
}
