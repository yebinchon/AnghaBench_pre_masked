
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_subop {unsigned int ninstrs; } ;



__attribute__((used)) static bool FUNC_0(const struct nand_subop *VAR_0,
          unsigned int VAR_1)
{
 return VAR_0 && VAR_1 < VAR_0->ninstrs;
}
