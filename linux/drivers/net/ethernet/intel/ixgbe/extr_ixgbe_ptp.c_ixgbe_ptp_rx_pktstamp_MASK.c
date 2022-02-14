
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct ixgbe_q_vector {int adapter; } ;
typedef int __le64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,int *,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct ixgbe_q_vector *VAR_1,
      struct sk_buff *VAR_2)
{
 __le64 VAR_3;


 FUNC_3(VAR_2, VAR_2->len - VAR_0, &VAR_3,
        VAR_0);
 FUNC_0(VAR_2, VAR_2->len - VAR_0);







 FUNC_1(VAR_1->adapter, FUNC_4(VAR_2),
          FUNC_2(VAR_3));
}
