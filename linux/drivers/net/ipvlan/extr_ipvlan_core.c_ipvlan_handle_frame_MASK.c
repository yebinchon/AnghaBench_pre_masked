
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct ipvl_port {int mode; } ;
typedef int rx_handler_result_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct sk_buff**,struct ipvl_port*) ;
 int FUNC_2 (struct sk_buff**,struct ipvl_port*) ;
 struct ipvl_port* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;

rx_handler_result_t FUNC_5(struct sk_buff **VAR_2)
{
 struct sk_buff *VAR_3 = *VAR_2;
 struct ipvl_port *VAR_4 = FUNC_3(VAR_3->dev);

 if (!VAR_4)
  return VAR_1;

 switch (VAR_4->mode) {
 case 130:
  return FUNC_1(VAR_2, VAR_4);
 case 129:
  return FUNC_2(VAR_2, VAR_4);




 }


 FUNC_0(1, "ipvlan_handle_frame() called for mode = [%hx]\n",
     VAR_4->mode);
 FUNC_4(VAR_3);
 return VAR_0;
}
