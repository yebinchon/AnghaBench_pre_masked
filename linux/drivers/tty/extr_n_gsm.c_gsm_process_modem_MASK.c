
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tty_struct {int dummy; } ;
struct gsm_dlci {int constipated; int modem_rx; int port; } ;


 int FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct gsm_dlci*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_12, struct gsm_dlci *VAR_13,
       u32 VAR_14, int VAR_15)
{
 int VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18;






 if (VAR_15 == 2)
  VAR_14 = VAR_14 & 0x7f;
 else {
  VAR_17 = VAR_14 & 0x7f;
  VAR_14 = (VAR_14 >> 7) & 0x7f;
 }


 VAR_18 = (VAR_14 & VAR_1) || !(VAR_14 & VAR_4);
 if (VAR_18 && !VAR_13->constipated) {

  VAR_13->constipated = 1;
 } else if (!VAR_18 && VAR_13->constipated) {
  VAR_13->constipated = 0;
  FUNC_1(VAR_13);
 }


 if (VAR_14 & VAR_3)
  VAR_16 |= VAR_7 | VAR_8;
 if (VAR_14 & VAR_4)
  VAR_16 |= VAR_10 | VAR_6;
 if (VAR_14 & VAR_2)
  VAR_16 |= VAR_9;
 if (VAR_14 & VAR_0)
  VAR_16 |= VAR_5;


 if (VAR_12) {
  if ((VAR_16 & VAR_5) == 0 && (VAR_13->modem_rx & VAR_5))
   if (!FUNC_0(VAR_12))
    FUNC_2(VAR_12);
 }
 if (VAR_17 & 0x01)
  FUNC_3(&VAR_13->port, 0, VAR_11);
 VAR_13->modem_rx = VAR_16;
}
