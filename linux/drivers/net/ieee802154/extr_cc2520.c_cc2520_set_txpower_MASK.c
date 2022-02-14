
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_hw {struct cc2520_private* priv; } ;
struct cc2520_private {int amplified; } ;
typedef int s32 ;


 int FUNC_0 (struct cc2520_private*,int ) ;
 int FUNC_1 (struct cc2520_private*,int ) ;

__attribute__((used)) static int
FUNC_2(struct ieee802154_hw *VAR_0, s32 VAR_1)
{
 struct cc2520_private *VAR_2 = VAR_0->priv;

 if (!VAR_2->amplified)
  return FUNC_1(VAR_2, VAR_1);

 return FUNC_0(VAR_2, VAR_1);
}
