
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ieee802154_hw {struct cc2520_private* priv; } ;
struct cc2520_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct cc2520_private*,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_5, u8 *VAR_6)
{
 struct cc2520_private *VAR_7 = VAR_5->priv;
 u8 VAR_8 = 0xff;
 u8 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_1, &VAR_8);
 if (VAR_10)
  return VAR_10;

 if (VAR_8 != VAR_4)
  return -VAR_2;

 VAR_10 = FUNC_0(VAR_7, VAR_0, &VAR_9);
 if (VAR_10)
  return VAR_10;


 *VAR_6 = VAR_9 - VAR_3;

 return 0;
}
