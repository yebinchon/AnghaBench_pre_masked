
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_charger_ints_state {int chrg_det; int rvrs_chrg; int vbusov; int chrg_se1b; int rvrs_mode; int chrgcurr1; int vbusvld; int battdetb; } ;
struct cpcap_charger_ddata {int reg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct cpcap_charger_ddata *VAR_3,
     struct cpcap_charger_ints_state *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_3->reg, VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->chrg_det = VAR_5 & FUNC_0(13);
 VAR_4->rvrs_chrg = VAR_5 & FUNC_0(12);
 VAR_4->vbusov = VAR_5 & FUNC_0(11);

 VAR_6 = FUNC_1(VAR_3->reg, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->chrg_se1b = VAR_5 & FUNC_0(13);
 VAR_4->rvrs_mode = VAR_5 & FUNC_0(6);
 VAR_4->chrgcurr1 = VAR_5 & FUNC_0(4);
 VAR_4->vbusvld = VAR_5 & FUNC_0(3);

 VAR_6 = FUNC_1(VAR_3->reg, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->battdetb = VAR_5 & FUNC_0(6);

 return 0;
}
