
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_ctd {int type_source_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct vpdma_ctd *VAR_2)
{
 return (VAR_2->type_source_ctl >> VAR_1) & VAR_0;
}
