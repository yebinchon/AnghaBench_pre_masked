
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_dtd {int type_ctl_stride; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct vpdma_dtd *VAR_2)
{
 return (VAR_2->type_ctl_stride >> VAR_1) & VAR_0;
}
