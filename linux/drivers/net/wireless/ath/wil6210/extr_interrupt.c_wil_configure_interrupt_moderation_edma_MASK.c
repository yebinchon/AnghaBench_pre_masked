
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil6210_priv {int rx_max_burst_duration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wil6210_priv*,int ,int) ;
 int FUNC_1 (struct wil6210_priv*,int ,int) ;
 int FUNC_2 (struct wil6210_priv*,int ,int) ;

void FUNC_3(struct wil6210_priv *VAR_9)
{
 u32 VAR_10;

 FUNC_1(VAR_9, VAR_3, VAR_7);

 FUNC_1(VAR_9, VAR_4, VAR_8);


 VAR_10 = VAR_9->rx_max_burst_duration |
  (VAR_5 << VAR_6);
 FUNC_2(VAR_9, VAR_1, VAR_10);
 FUNC_2(VAR_9, VAR_2, VAR_10);




 FUNC_0(VAR_9, VAR_0, 0x1FE);
 FUNC_1(VAR_9, VAR_0, 0x1);
}
