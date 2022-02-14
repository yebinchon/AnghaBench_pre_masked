
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlp_rp_regpair_t {int ctrl; int reg1; int reg0; } ;
struct altera_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct altera_pcie*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct altera_pcie *VAR_3,
    struct tlp_rp_regpair_t *VAR_4)
{
 FUNC_0(VAR_3, VAR_4->reg0, VAR_1);
 FUNC_0(VAR_3, VAR_4->reg1, VAR_2);
 FUNC_0(VAR_3, VAR_4->ctrl, VAR_0);
}
