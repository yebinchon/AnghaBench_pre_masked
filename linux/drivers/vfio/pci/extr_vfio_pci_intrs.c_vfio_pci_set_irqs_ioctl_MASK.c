
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vfio_pci_device {int pdev; } ;


 int VAR_0 ;


 int VAR_1 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (struct vfio_pci_device*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_2 (struct vfio_pci_device*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_3 (struct vfio_pci_device*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_4 (struct vfio_pci_device*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_5 (struct vfio_pci_device*,unsigned int,unsigned int,unsigned int,int,void*) ;
 int FUNC_6 (struct vfio_pci_device*,unsigned int,unsigned int,unsigned int,int,void*) ;

int FUNC_7(struct vfio_pci_device *VAR_2, uint32_t VAR_3,
       unsigned VAR_4, unsigned VAR_5, unsigned VAR_6,
       void *VAR_7)
{
 int (*VAR_8)(struct vfio_pci_device *VAR_9, unsigned VAR_10,
      unsigned VAR_11, unsigned VAR_12, uint32_t VAR_13,
      void *VAR_14) = ((void*)0);

 switch (VAR_4) {
 case 131:
  switch (VAR_3 & VAR_1) {
  case 135:
   VAR_8 = FUNC_2;
   break;
  case 133:
   VAR_8 = FUNC_4;
   break;
  case 134:
   VAR_8 = FUNC_3;
   break;
  }
  break;
 case 129:
 case 130:
  switch (VAR_3 & VAR_1) {
  case 135:
  case 133:

   break;
  case 134:
   VAR_8 = FUNC_5;
   break;
  }
  break;
 case 132:
  switch (VAR_3 & VAR_1) {
  case 134:
   if (FUNC_0(VAR_2->pdev))
    VAR_8 = FUNC_1;
   break;
  }
  break;
 case 128:
  switch (VAR_3 & VAR_1) {
  case 134:
   VAR_8 = FUNC_6;
   break;
  }
  break;
 }

 if (!VAR_8)
  return -VAR_0;

 return VAR_8(VAR_2, VAR_4, VAR_5, VAR_6, VAR_3, VAR_7);
}
