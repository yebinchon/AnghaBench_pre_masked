
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_interval_bw {scalar_t__* overhead; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static unsigned int
FUNC_0(struct xhci_interval_bw *VAR_5)
{
 if (VAR_5->overhead[VAR_4])
  return VAR_3;
 if (VAR_5->overhead[VAR_1])
  return VAR_0;
 return VAR_2;
}
