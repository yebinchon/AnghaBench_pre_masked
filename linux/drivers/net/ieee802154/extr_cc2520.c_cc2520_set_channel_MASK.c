
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee802154_hw {struct cc2520_private* priv; } ;
struct cc2520_private {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cc2520_private*,int ,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int
FUNC_3(struct ieee802154_hw *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct cc2520_private *VAR_6 = VAR_3->priv;
 int VAR_7;

 FUNC_2(&VAR_6->spi->dev, "trying to set channel\n");

 FUNC_0(VAR_4 != 0);
 FUNC_0(VAR_5 < VAR_2);
 FUNC_0(VAR_5 > VAR_1);

 VAR_7 = FUNC_1(VAR_6, VAR_0,
        11 + 5 * (VAR_5 - 11));

 return VAR_7;
}
