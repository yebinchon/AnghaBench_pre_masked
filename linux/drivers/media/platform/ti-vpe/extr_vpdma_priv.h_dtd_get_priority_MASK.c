
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_dtd {int pkt_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct vpdma_dtd *VAR_2)
{
 return (VAR_2->pkt_ctl >> VAR_1) & VAR_0;
}
