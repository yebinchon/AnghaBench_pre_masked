
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_domain {int domain; } ;
struct vfio_dma {int dummy; } ;
typedef size_t phys_addr_t ;
typedef size_t dma_addr_t ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 size_t FUNC_1 (int ,size_t,size_t) ;
 scalar_t__ FUNC_2 (struct vfio_dma*,size_t,size_t,size_t,int) ;

__attribute__((used)) static size_t FUNC_3(struct vfio_domain *VAR_1,
          struct vfio_dma *VAR_2, dma_addr_t *VAR_3,
          size_t VAR_4, phys_addr_t VAR_5,
          long *VAR_6)
{
 size_t VAR_7 = FUNC_1(VAR_1->domain, *VAR_3, VAR_4);

 if (VAR_7) {
  *VAR_6 += FUNC_2(VAR_2, *VAR_3,
           VAR_5 >> VAR_0,
           VAR_7 >> VAR_0,
           0);
  *VAR_3 += VAR_7;
  FUNC_0();
 }
 return VAR_7;
}
