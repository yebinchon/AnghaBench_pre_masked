
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_rx_status_extended {int dummy; } ;
struct wil6210_priv {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wil_rx_status_extended*) ;
 int FUNC_2 (struct wil_rx_status_extended*) ;
 int FUNC_3 (struct wil_rx_status_extended*) ;
 int FUNC_4 (struct wil_rx_status_extended*) ;
 int FUNC_5 (struct wil6210_priv*,struct wil_rx_status_extended*) ;
 int FUNC_6 (struct wil_rx_status_extended*) ;
 struct wil_rx_status_extended* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct wil6210_priv *VAR_0,
     struct sk_buff *VAR_1, int *VAR_2,
     int *VAR_3, int *VAR_4, u16 *VAR_5,
     int *VAR_6, int *VAR_7)
{
 struct wil_rx_status_extended *VAR_8 = FUNC_7(VAR_1);

 *VAR_2 = FUNC_6(VAR_8);
 *VAR_3 = FUNC_1(VAR_8);
 *VAR_4 = FUNC_3(VAR_8);
 *VAR_5 = FUNC_0(FUNC_5(VAR_0, VAR_8));
 *VAR_6 = FUNC_2(VAR_8);
 *VAR_7 = FUNC_4(VAR_8);
}
