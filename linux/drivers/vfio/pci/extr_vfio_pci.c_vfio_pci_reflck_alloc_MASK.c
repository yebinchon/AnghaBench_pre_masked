
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_reflck {int lock; int kref; } ;


 int VAR_0 ;
 struct vfio_pci_reflck* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct vfio_pci_reflck* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct vfio_pci_reflck *FUNC_4(void)
{
 struct vfio_pci_reflck *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_2->kref);
 FUNC_3(&VAR_2->lock);

 return VAR_2;
}
