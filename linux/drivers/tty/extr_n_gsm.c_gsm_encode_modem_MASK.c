
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gsm_dlci {int modem_tx; scalar_t__ throttled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static u8 FUNC_0(const struct gsm_dlci *VAR_9)
{
 u8 VAR_10 = 0;

 if (VAR_9->throttled)
  VAR_10 |= VAR_1;
 if (VAR_9->modem_tx & VAR_6)
  VAR_10 |= VAR_3;
 if (VAR_9->modem_tx & VAR_8)
  VAR_10 |= VAR_4;
 if (VAR_9->modem_tx & VAR_7)
  VAR_10 |= VAR_2;
 if (VAR_9->modem_tx & VAR_5)
  VAR_10 |= VAR_0;
 return VAR_10;
}
