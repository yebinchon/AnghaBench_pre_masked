
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
typedef enum mt76_qsel { ____Placeholder_mt76_qsel } mt76_qsel ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct sk_buff *VAR_3, enum mt76_qsel VAR_4, u32 VAR_5)
{
 VAR_5 |= FUNC_0(VAR_1, VAR_4);
 return FUNC_1(VAR_3, VAR_2, VAR_0, VAR_5);
}
