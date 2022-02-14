
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_3(struct sk_buff *VAR_1, __le16 *VAR_2, u8 *VAR_3)
{
 if (FUNC_2(VAR_1)) {
  *VAR_3 |= VAR_0;
  *VAR_2 = FUNC_0(FUNC_1(VAR_1));
 }
}
