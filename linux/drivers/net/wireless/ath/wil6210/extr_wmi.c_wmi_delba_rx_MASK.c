
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct wmi_rcp_delba_cmd {int cidxtid; scalar_t__ tid; scalar_t__ cid; int reason; } ;
struct wil6210_priv {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct wil6210_priv*,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct wil6210_priv*,int ,scalar_t__,struct wmi_rcp_delba_cmd*,int) ;

int FUNC_4(struct wil6210_priv *VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6, u16 VAR_7)
{
 struct wmi_rcp_delba_cmd VAR_8 = {
  .reason = FUNC_0(VAR_7),
 };

 if (VAR_5 >= VAR_1) {
  VAR_8.cidxtid = VAR_0;
  VAR_8.cid = VAR_5;
  VAR_8.tid = VAR_6;
 } else {
  VAR_8.cidxtid = FUNC_1(VAR_5, VAR_6);
 }

 FUNC_2(VAR_3, "delba_rx: (CID %d TID %d reason %d)\n", VAR_5,
      VAR_6, VAR_7);

 return FUNC_3(VAR_3, VAR_2, VAR_4, &VAR_8, sizeof(VAR_8));
}
