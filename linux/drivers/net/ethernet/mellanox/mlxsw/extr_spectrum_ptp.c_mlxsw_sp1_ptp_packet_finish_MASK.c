
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {scalar_t__ dev; } ;
struct mlxsw_sp_port {scalar_t__ dev; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,size_t,struct mlxsw_sp*) ;
 struct skb_shared_hwtstamps* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_0,
     struct sk_buff *VAR_1, u8 VAR_2,
     bool VAR_3,
     struct skb_shared_hwtstamps *VAR_4)
{
 struct mlxsw_sp_port *VAR_5;





 VAR_5 = VAR_0->ports[VAR_2];
 if (!(VAR_5 && (!VAR_1->dev || VAR_1->dev == VAR_5->dev))) {
  FUNC_0(VAR_1);
  return;
 }

 if (VAR_3) {
  if (VAR_4)
   *FUNC_2(VAR_1) = *VAR_4;
  FUNC_1(VAR_1, VAR_2, VAR_0);
 } else {

  FUNC_3(VAR_1, VAR_4);
  FUNC_0(VAR_1);
 }
}
