
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_usb_ints_state {int id_ground; int id_float; int vbusov; int vbusvld; int sessvld; int sessend; int se1; int dm; int dp; } ;
struct cpcap_phy_ddata {int reg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct cpcap_phy_ddata *VAR_3,
        struct cpcap_usb_ints_state *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_3->reg, VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->id_ground = VAR_5 & FUNC_0(15);
 VAR_4->id_float = VAR_5 & FUNC_0(14);
 VAR_4->vbusov = VAR_5 & FUNC_0(11);

 VAR_6 = FUNC_1(VAR_3->reg, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->vbusvld = VAR_5 & FUNC_0(3);
 VAR_4->sessvld = VAR_5 & FUNC_0(2);
 VAR_4->sessend = VAR_5 & FUNC_0(1);
 VAR_4->se1 = VAR_5 & FUNC_0(0);

 VAR_6 = FUNC_1(VAR_3->reg, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->dm = VAR_5 & FUNC_0(1);
 VAR_4->dp = VAR_5 & FUNC_0(0);

 return 0;
}
