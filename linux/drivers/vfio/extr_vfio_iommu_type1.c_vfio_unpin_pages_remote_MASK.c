
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_dma {int prot; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct vfio_dma*,int ) ;
 int FUNC_2 (struct vfio_dma*,long,int) ;

__attribute__((used)) static long FUNC_3(struct vfio_dma *VAR_1, dma_addr_t VAR_2,
        unsigned long VAR_3, long VAR_4,
        bool VAR_5)
{
 long VAR_6 = 0, VAR_7 = 0;
 long VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_2 += VAR_0) {
  if (FUNC_0(VAR_3++, VAR_1->prot)) {
   VAR_6++;
   if (FUNC_1(VAR_1, VAR_2))
    VAR_7++;
  }
 }

 if (VAR_5)
  FUNC_2(VAR_1, VAR_7 - VAR_6, 1);

 return VAR_6;
}
