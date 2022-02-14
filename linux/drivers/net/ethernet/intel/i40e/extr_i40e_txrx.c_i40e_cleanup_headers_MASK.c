
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i40e_rx_desc {int dummy; } i40e_rx_desc ;
struct sk_buff {int dummy; } ;
struct i40e_ring {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (union i40e_rx_desc*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct i40e_ring *VAR_1, struct sk_buff *VAR_2,
     union i40e_rx_desc *VAR_3)

{

 if (FUNC_1(VAR_2))
  return 1;






 if (FUNC_5(FUNC_4(VAR_3,
           FUNC_0(VAR_0)))) {
  FUNC_2(VAR_2);
  return 1;
 }


 if (FUNC_3(VAR_2))
  return 1;

 return 0;
}
