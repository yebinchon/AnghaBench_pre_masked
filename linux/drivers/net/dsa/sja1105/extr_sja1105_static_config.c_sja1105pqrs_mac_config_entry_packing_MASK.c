
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_mac_config_entry {int ingress; int egress; int dyn_learn; int retag; int drpuntag; int drpdtag; int drpnona664; int egr_mirr; int ing_mirr; int vlanid; int vlanprio; int maxage; int tp_delout; int tp_delin; int speed; int ifg; int * top; int * base; int * enabled; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

size_t FUNC_1(void *VAR_1, void *VAR_2,
         enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_mac_config_entry *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 for (VAR_7 = 0, VAR_6 = 104; VAR_7 < 8; VAR_7++, VAR_6 += 19) {
  FUNC_0(VAR_1, &VAR_5->enabled[VAR_7],
    VAR_6 + 0, VAR_6 + 0, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->base[VAR_7],
    VAR_6 + 9, VAR_6 + 1, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->top[VAR_7],
    VAR_6 + 18, VAR_6 + 10, VAR_4, VAR_3);
 }
 FUNC_0(VAR_1, &VAR_5->ifg, 103, 99, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->speed, 98, 97, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tp_delin, 96, 81, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tp_delout, 80, 65, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->maxage, 64, 57, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlanprio, 56, 54, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlanid, 53, 42, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->ing_mirr, 41, 41, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->egr_mirr, 40, 40, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->drpnona664, 39, 39, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->drpdtag, 38, 38, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->drpuntag, 35, 35, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->retag, 34, 34, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->dyn_learn, 33, 33, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->egress, 32, 32, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->ingress, 31, 31, VAR_4, VAR_3);
 return VAR_4;
}
