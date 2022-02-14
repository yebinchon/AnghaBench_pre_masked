
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_local {scalar_t__ cal_timeout; TYPE_1__* data; } ;
struct TYPE_2__ {int (* set_channel ) (struct at86rf230_local*,int ,int ) ;scalar_t__ t_channel_switch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct ieee802154_hw *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct at86rf230_local *VAR_5 = VAR_2->priv;
 int VAR_6;

 VAR_6 = VAR_5->data->set_channel(VAR_5, VAR_3, VAR_4);

 FUNC_1(VAR_5->data->t_channel_switch,
       VAR_5->data->t_channel_switch + 10);

 VAR_5->cal_timeout = VAR_1 + VAR_0;
 return VAR_6;
}
