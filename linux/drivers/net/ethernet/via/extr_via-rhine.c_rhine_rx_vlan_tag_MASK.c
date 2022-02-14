
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct rx_desc {int desc_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(struct sk_buff *VAR_2, struct rx_desc *VAR_3,
         int VAR_4)
{
 FUNC_2();
 if (FUNC_5(VAR_3->desc_length & FUNC_1(VAR_0))) {
  u16 VAR_5;

  VAR_5 = FUNC_4(VAR_2, VAR_4);
  FUNC_0(VAR_2, FUNC_3(VAR_1), VAR_5);
 }
}
