
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cas {struct sk_buff_head* rx_flows; } ;


 int FUNC_0 (int ,int const) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_4(struct cas *VAR_3, const u64 *VAR_4,
       struct sk_buff *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_2, VAR_4[2]) & (VAR_0 - 1);
 struct sk_buff_head *VAR_7 = &VAR_3->rx_flows[VAR_6];





 FUNC_2(VAR_7, VAR_5);
 if (VAR_4[0] & VAR_1) {
  while ((VAR_5 = FUNC_1(VAR_7))) {
   FUNC_3(VAR_5);
  }
 }
}
