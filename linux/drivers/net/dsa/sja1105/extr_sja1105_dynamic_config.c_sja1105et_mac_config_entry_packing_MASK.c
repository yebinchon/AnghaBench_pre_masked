
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1105_mac_config_entry {int tp_delout; int tp_delin; int vlanid; int vlanprio; int egr_mirr; int ing_mirr; int ingress; int egress; int dyn_learn; int retag; int drpuntag; int drpdtag; int speed; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int,int const,int) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, void *VAR_2,
       enum packing_op VAR_3)
{
 const int VAR_4 = VAR_0;
 struct sja1105_mac_config_entry *VAR_5 = VAR_2;

 u8 *VAR_6 = VAR_1 + 4;
 u8 *VAR_7 = VAR_1;

 FUNC_0(VAR_6, &VAR_5->speed, 30, 29, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->drpdtag, 23, 23, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->drpuntag, 22, 22, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->retag, 21, 21, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->dyn_learn, 20, 20, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->egress, 19, 19, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->ingress, 18, 18, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->ing_mirr, 17, 17, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->egr_mirr, 16, 16, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->vlanprio, 14, 12, VAR_4, VAR_3);
 FUNC_0(VAR_6, &VAR_5->vlanid, 11, 0, VAR_4, VAR_3);
 FUNC_0(VAR_7, &VAR_5->tp_delin, 31, 16, VAR_4, VAR_3);
 FUNC_0(VAR_7, &VAR_5->tp_delout, 15, 0, VAR_4, VAR_3);




 return 0;
}
