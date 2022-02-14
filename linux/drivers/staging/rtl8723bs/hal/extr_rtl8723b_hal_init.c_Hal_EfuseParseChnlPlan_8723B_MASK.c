
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ChannelPlan; } ;
struct TYPE_3__ {int channel_plan; } ;
struct adapter {TYPE_2__ mlmepriv; TYPE_1__ registrypriv; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct adapter*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct adapter*,int,int ,int ,int) ;

void FUNC_3(
 struct adapter *VAR_4, u8 *VAR_5, bool VAR_6
)
{
 VAR_4->mlmepriv.ChannelPlan = FUNC_2(
  VAR_4,
  VAR_5 ? VAR_5[VAR_0] : 0xFF,
  VAR_4->registrypriv.channel_plan,
  VAR_1,
  VAR_6
 );

 FUNC_0(VAR_4, VAR_4->mlmepriv.ChannelPlan);

 FUNC_1(VAR_3, VAR_2, ("EEPROM ChannelPlan = 0x%02x\n", VAR_4->mlmepriv.ChannelPlan));
}
