
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pch_phub_reg {unsigned int pch_mac_start_address; } ;


 unsigned int* VAR_0 ;
 int FUNC_0 (struct pch_phub_reg*,unsigned int,int *) ;

__attribute__((used)) static void FUNC_1(struct pch_phub_reg *VAR_1,
      unsigned int VAR_2, u8 *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = VAR_1->pch_mac_start_address +
   VAR_0[VAR_2];

 FUNC_0(VAR_1, VAR_4, VAR_3);
}
