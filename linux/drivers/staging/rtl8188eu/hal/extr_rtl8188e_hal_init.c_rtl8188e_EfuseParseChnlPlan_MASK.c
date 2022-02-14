
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


 int FUNC_0 (char*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,int) ;

void FUNC_2(struct adapter *VAR_2, u8 *VAR_3, bool VAR_4)
{
 VAR_2->mlmepriv.ChannelPlan =
   FUNC_1(VAR_3 ? VAR_3[VAR_0] : 0xFF,
       VAR_2->registrypriv.channel_plan,
       VAR_1, VAR_4);

 FUNC_0("mlmepriv.ChannelPlan = 0x%02x\n", VAR_2->mlmepriv.ChannelPlan);
}
