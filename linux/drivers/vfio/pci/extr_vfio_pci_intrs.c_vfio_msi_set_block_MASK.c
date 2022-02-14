
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {unsigned int num_ctx; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct vfio_pci_device*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct vfio_pci_device *VAR_1, unsigned VAR_2,
         unsigned VAR_3, int32_t *VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;

 if (VAR_2 >= VAR_1->num_ctx || VAR_2 + VAR_3 > VAR_1->num_ctx)
  return -VAR_0;

 for (VAR_6 = 0, VAR_7 = VAR_2; VAR_6 < VAR_3 && !VAR_8; VAR_6++, VAR_7++) {
  int VAR_9 = VAR_4 ? VAR_4[VAR_6] : -1;
  VAR_8 = FUNC_0(VAR_1, VAR_7, VAR_9, VAR_5);
 }

 if (VAR_8) {
  for (--VAR_7; VAR_7 >= (int)VAR_2; VAR_7--)
   FUNC_0(VAR_1, VAR_7, -1, VAR_5);
 }

 return VAR_8;
}
