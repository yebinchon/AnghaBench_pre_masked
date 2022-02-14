
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ vaddr; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct ctlr_info *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_2->vaddr + VAR_0);

 return (VAR_3 & VAR_1) ?
  1 : 0;
}
