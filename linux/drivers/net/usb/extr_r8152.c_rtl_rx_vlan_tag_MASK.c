
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rx_desc {int opts2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct rx_desc *VAR_2, struct sk_buff *VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_2->opts2);

 if (VAR_4 & VAR_1)
  FUNC_0(VAR_3, FUNC_1(VAR_0),
           FUNC_3(VAR_4 & 0xffff));
}
