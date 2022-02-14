
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipvl_port {int dummy; } ;
struct ethhdr {int h_dest; } ;
typedef int rx_handler_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ethhdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct ipvl_port*) ;
 int FUNC_2 (struct sk_buff**,struct ipvl_port*) ;
 int FUNC_3 (struct ipvl_port*,struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static rx_handler_result_t FUNC_7(struct sk_buff **VAR_2,
       struct ipvl_port *VAR_3)
{
 struct sk_buff *VAR_4 = *VAR_2;
 struct ethhdr *VAR_5 = FUNC_0(VAR_4);
 rx_handler_result_t VAR_6 = VAR_1;

 if (FUNC_5(VAR_5->h_dest)) {
  if (FUNC_1(VAR_4, VAR_3)) {
   struct sk_buff *VAR_7 = FUNC_6(VAR_4, VAR_0);







   if (VAR_7) {
    FUNC_4(VAR_7, ((void*)0));
    FUNC_3(VAR_3, VAR_7, 0);
   }
  }
 } else {

  VAR_6 = FUNC_2(VAR_2, VAR_3);
 }

 return VAR_6;
}
