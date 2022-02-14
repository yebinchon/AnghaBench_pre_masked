
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_desc {int opts2; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct tx_desc *VAR_1, struct sk_buff *VAR_2)
{
 if (FUNC_2(VAR_2)) {
  u32 VAR_3;

  VAR_3 = VAR_0 | FUNC_3(FUNC_1(VAR_2));
  VAR_1->opts2 |= FUNC_0(VAR_3);
 }
}
