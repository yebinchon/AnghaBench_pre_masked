
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil6210_priv {int dummy; } ;
struct vring_rx_desc {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct vring_rx_desc*) ;
 int FUNC_1 (struct vring_rx_desc*) ;
 int FUNC_2 (struct vring_rx_desc*) ;
 int FUNC_3 (struct vring_rx_desc*) ;
 int FUNC_4 (struct vring_rx_desc*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct vring_rx_desc* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct wil6210_priv *VAR_0,
       struct sk_buff *VAR_1, int *VAR_2, int *VAR_3,
       int *VAR_4, u16 *VAR_5, int *VAR_6, int *VAR_7)
{
 struct vring_rx_desc *VAR_8 = FUNC_6(VAR_1);

 *VAR_2 = FUNC_4(VAR_8);
 *VAR_3 = FUNC_5(VAR_1);
 *VAR_4 = FUNC_1(VAR_8);
 *VAR_5 = FUNC_3(VAR_8);
 *VAR_6 = FUNC_0(VAR_8);
 *VAR_7 = FUNC_2(VAR_8);
}
