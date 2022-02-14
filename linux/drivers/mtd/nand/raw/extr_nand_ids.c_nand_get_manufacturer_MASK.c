
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nand_manufacturer {scalar_t__ id; } ;


 int FUNC_0 (struct nand_manufacturer const*) ;
 struct nand_manufacturer const* VAR_0 ;

const struct nand_manufacturer *FUNC_1(u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].id == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
