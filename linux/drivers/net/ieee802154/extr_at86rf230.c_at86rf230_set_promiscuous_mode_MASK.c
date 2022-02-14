
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_2, const bool VAR_3)
{
 struct at86rf230_local *VAR_4 = VAR_2->priv;
 int VAR_5;

 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_4, VAR_0, 1);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_4, VAR_1, 1);
  if (VAR_5 < 0)
   return VAR_5;
 } else {
  VAR_5 = FUNC_0(VAR_4, VAR_1, 0);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_4, VAR_0, 0);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
