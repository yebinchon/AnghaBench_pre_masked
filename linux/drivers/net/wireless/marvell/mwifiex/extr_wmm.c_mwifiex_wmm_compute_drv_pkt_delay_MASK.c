
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {int tstamp; } ;
struct TYPE_2__ {int drv_pkt_delay_max; } ;
struct mwifiex_private {int adapter; TYPE_1__ wmm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;

u8
FUNC_4(struct mwifiex_private *VAR_1,
      const struct sk_buff *VAR_2)
{
 u32 VAR_3 = FUNC_0(FUNC_3(VAR_2->tstamp));
 u8 VAR_4;







 VAR_4 = (u8) (FUNC_1(VAR_3, VAR_1->wmm.drv_pkt_delay_max) >> 1);

 FUNC_2(VAR_1->adapter, VAR_0, "data: WMM: Pkt Delay: %d ms,\t"
      "%d ms sent to FW\n", VAR_3, VAR_4);

 return VAR_4;
}
