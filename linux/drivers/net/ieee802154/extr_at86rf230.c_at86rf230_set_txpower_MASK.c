
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_local {TYPE_1__* data; } ;
typedef int s32 ;
struct TYPE_2__ {int (* set_txpower ) (struct at86rf230_local*,int ) ;} ;


 int FUNC_0 (struct at86rf230_local*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_0, s32 VAR_1)
{
 struct at86rf230_local *VAR_2 = VAR_0->priv;

 return VAR_2->data->set_txpower(VAR_2, VAR_1);
}
