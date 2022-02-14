
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ vaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct ctlr_info *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_3->vaddr + VAR_0);

 if (!VAR_4)
  return 0;


 VAR_4 = FUNC_0(VAR_3->vaddr + VAR_1);
 return VAR_4 & VAR_2;
}
