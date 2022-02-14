
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_mac_config_entry {int ingress; int egress; int dyn_learn; int retag; int drpuntag; int drpdtag; int drpnona664; int egr_mirr; int ing_mirr; int vlanid; int vlanprio; int maxage; int tp_delout; int tp_delin; int speed; int ifg; int * top; int * base; int * enabled; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, void *VAR_2,
       enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_mac_config_entry *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 for (VAR_7 = 0, VAR_6 = 72; VAR_7 < 8; VAR_7++, VAR_6 += 19) {
  FUNC_0(VAR_1, &VAR_5->enabled[VAR_7],
    VAR_6 + 0, VAR_6 + 0, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->base[VAR_7],
    VAR_6 + 9, VAR_6 + 1, VAR_4, VAR_3);
  FUNC_0(VAR_1, &VAR_5->top[VAR_7],
    VAR_6 + 18, VAR_6 + 10, VAR_4, VAR_3);
 }
 FUNC_0(VAR_1, &VAR_5->ifg, 71, 67, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->speed, 66, 65, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tp_delin, 64, 49, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->tp_delout, 48, 33, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->maxage, 32, 25, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlanprio, 24, 22, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlanid, 21, 10, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->ing_mirr, 9, 9, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->egr_mirr, 8, 8, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->drpnona664, 7, 7, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->drpdtag, 6, 6, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->drpuntag, 5, 5, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->retag, 4, 4, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->dyn_learn, 3, 3, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->egress, 2, 2, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->ingress, 1, 1, VAR_4, VAR_3);
 return VAR_4;
}
