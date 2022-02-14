
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int slu_unitcfg; } ;



bool FUNC_0(struct genwqe_dev *VAR_0)
{
 return (VAR_0->slu_unitcfg & 0xFFFF0ull) < 0x32170ull;
}
