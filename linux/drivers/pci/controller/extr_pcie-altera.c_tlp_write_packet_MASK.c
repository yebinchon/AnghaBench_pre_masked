
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tlp_rp_regpair_t {scalar_t__ ctrl; void* reg1; void* reg0; } ;
struct altera_pcie {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct altera_pcie*,struct tlp_rp_regpair_t*) ;

__attribute__((used)) static void FUNC_1(struct altera_pcie *VAR_2, u32 *VAR_3,
        u32 VAR_4, bool VAR_5)
{
 struct tlp_rp_regpair_t VAR_6;

 VAR_6.reg0 = VAR_3[0];
 VAR_6.reg1 = VAR_3[1];
 VAR_6.ctrl = VAR_1;
 FUNC_0(VAR_2, &VAR_6);

 if (VAR_5) {
  VAR_6.reg0 = VAR_3[2];
  VAR_6.reg1 = 0;
  VAR_6.ctrl = 0;
  FUNC_0(VAR_2, &VAR_6);

  VAR_6.reg0 = VAR_4;
  VAR_6.reg1 = 0;
 } else {
  VAR_6.reg0 = VAR_3[2];
  VAR_6.reg1 = VAR_4;
 }

 VAR_6.ctrl = VAR_0;
 FUNC_0(VAR_2, &VAR_6);
}
