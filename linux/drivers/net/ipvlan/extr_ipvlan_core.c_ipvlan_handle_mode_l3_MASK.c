
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipvl_port {int dummy; } ;
struct ipvl_addr {int dummy; } ;
typedef int rx_handler_result_t ;


 int VAR_0 ;
 struct ipvl_addr* FUNC_0 (struct ipvl_port*,void*,int,int) ;
 void* FUNC_1 (struct ipvl_port*,struct sk_buff*,int*) ;
 int FUNC_2 (struct ipvl_addr*,struct sk_buff**,int) ;

__attribute__((used)) static rx_handler_result_t FUNC_3(struct sk_buff **VAR_1,
       struct ipvl_port *VAR_2)
{
 void *VAR_3;
 int VAR_4;
 struct ipvl_addr *VAR_5;
 struct sk_buff *VAR_6 = *VAR_1;
 rx_handler_result_t VAR_7 = VAR_0;

 VAR_3 = FUNC_1(VAR_2, VAR_6, &VAR_4);
 if (!VAR_3)
  goto out;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, 1);
 if (VAR_5)
  VAR_7 = FUNC_2(VAR_5, VAR_1, 0);

out:
 return VAR_7;
}
