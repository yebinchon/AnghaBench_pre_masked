
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_priv {int dummy; } ;
struct sta_info {int qos_info; int state; int uapsd_bk; int uapsd_vi; int uapsd_vo; int uapsd_be; scalar_t__ sleepq_ac_len; int hwaddr; int qos_option; } ;
struct rx_pkt_attrib {int priority; int src; } ;
struct recv_frame {struct rx_pkt_attrib attrib; } ;
struct adapter {struct sta_priv stapriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,int ,int ,int ,int ) ;
 struct sta_info* FUNC_2 (struct sta_priv*,int ) ;
 int FUNC_3 (struct adapter*,struct sta_info*) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_1,
          struct recv_frame *VAR_2)
{
}
