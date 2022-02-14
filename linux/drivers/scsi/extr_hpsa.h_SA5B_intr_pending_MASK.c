
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ vaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct ctlr_info *VAR_2)
{
 return FUNC_0(VAR_2->vaddr + VAR_1) & VAR_0;
}
