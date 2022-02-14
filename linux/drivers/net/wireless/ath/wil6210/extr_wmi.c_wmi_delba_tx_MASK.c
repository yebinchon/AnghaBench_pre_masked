
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_ring_ba_dis_cmd {int reason; int ring_id; } ;
struct wil6210_priv {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wil6210_priv*,char*,int ,int ) ;
 int FUNC_2 (struct wil6210_priv*,int ,int ,struct wmi_ring_ba_dis_cmd*,int) ;

int FUNC_3(struct wil6210_priv *VAR_1, u8 VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct wmi_ring_ba_dis_cmd VAR_5 = {
  .ring_id = VAR_3,
  .reason = FUNC_0(VAR_4),
 };

 FUNC_1(VAR_1, "delba_tx: (ring %d reason %d)\n", VAR_3, VAR_4);

 return FUNC_2(VAR_1, VAR_0, VAR_2, &VAR_5, sizeof(VAR_5));
}
