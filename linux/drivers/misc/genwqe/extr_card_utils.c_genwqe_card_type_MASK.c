
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct genwqe_dev {int slu_unitcfg; } ;


 int VAR_0 ;

u8 FUNC_0(struct genwqe_dev *VAR_1)
{
 u64 VAR_2 = VAR_1->slu_unitcfg;

 return (u8)((VAR_2 & VAR_0) >> 20);
}
