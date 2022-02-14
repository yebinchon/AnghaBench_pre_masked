
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {scalar_t__ rx_buf_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct wil6210_priv*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct wil6210_priv *VAR_5)
{
 VAR_5->rx_buf_len = VAR_4 ?
  VAR_1 : VAR_0 - VAR_2;
 if (VAR_3 > VAR_5->rx_buf_len) {




  FUNC_0(VAR_5, "Override RX buffer to mtu_max(%d)\n", VAR_3);
  VAR_5->rx_buf_len = VAR_3;
 }
}
