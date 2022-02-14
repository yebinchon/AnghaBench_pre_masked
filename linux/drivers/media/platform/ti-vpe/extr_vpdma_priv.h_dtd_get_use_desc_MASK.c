
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_dtd {int desc_write_addr; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct vpdma_dtd *VAR_1)
{
 return VAR_1->desc_write_addr & VAR_0;
}
