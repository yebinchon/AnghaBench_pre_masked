
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ virt; } ;
struct vr_nor_mtd {scalar_t__ csr_base; TYPE_1__ map; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vr_nor_mtd *VAR_2)
{
 unsigned int VAR_3;


 VAR_3 = FUNC_1(VAR_2->csr_base + VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_3, VAR_2->csr_base + VAR_0);


 FUNC_0(VAR_2->map.virt);


 FUNC_0(VAR_2->csr_base);
}
