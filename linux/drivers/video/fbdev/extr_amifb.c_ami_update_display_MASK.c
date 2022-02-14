
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amifb_par {int ddfstop; int ddfstrt; int bpl2mod; int bpl1mod; int bplcon1; } ;
struct TYPE_2__ {int ddfstop; int ddfstrt; int bpl2mod; int bpl1mod; int bplcon1; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct amifb_par *VAR_1)
{
 VAR_0.bplcon1 = VAR_1->bplcon1;
 VAR_0.bpl1mod = VAR_1->bpl1mod;
 VAR_0.bpl2mod = VAR_1->bpl2mod;
 VAR_0.ddfstrt = FUNC_1(VAR_1->ddfstrt);
 VAR_0.ddfstop = FUNC_0(VAR_1->ddfstop);
}
