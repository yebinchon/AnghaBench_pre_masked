
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pucan_status_msg {int dummy; } ;
struct pucan_rx_msg {int size; int type; } ;
struct pucan_error_msg {int dummy; } ;
struct peak_canfd_priv {int dummy; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (struct peak_canfd_priv*) ;
 int FUNC_2 (struct peak_canfd_priv*,struct pucan_rx_msg*) ;
 int FUNC_3 (struct peak_canfd_priv*,struct pucan_error_msg*) ;
 int FUNC_4 (struct peak_canfd_priv*,struct pucan_status_msg*) ;

int FUNC_5(struct peak_canfd_priv *VAR_0,
     struct pucan_rx_msg *VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_1->type);
 int VAR_3 = FUNC_0(VAR_1->size);
 int VAR_4;

 if (!VAR_3 || !VAR_2) {

  goto exit;
 }

 switch (VAR_2) {
 case 130:
  VAR_4 = FUNC_2(VAR_0, (struct pucan_rx_msg *)VAR_1);
  break;
 case 129:
  VAR_4 = FUNC_3(VAR_0, (struct pucan_error_msg *)VAR_1);
  break;
 case 128:
  VAR_4 = FUNC_4(VAR_0, (struct pucan_status_msg *)VAR_1);
  break;
 case 131:
  VAR_4 = FUNC_1(VAR_0);
  break;
 default:
  VAR_4 = 0;
 }

 if (VAR_4 < 0)
  return VAR_4;

exit:
 return VAR_3;
}
