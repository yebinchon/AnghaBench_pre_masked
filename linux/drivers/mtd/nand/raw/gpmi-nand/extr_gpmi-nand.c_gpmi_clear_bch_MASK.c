
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resources {scalar_t__ bch_regs; } ;
struct gpmi_nand_data {struct resources resources; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gpmi_nand_data *VAR_2)
{
 struct resources *VAR_3 = &VAR_2->resources;
 FUNC_0(VAR_0, VAR_3->bch_regs + VAR_1);
}
