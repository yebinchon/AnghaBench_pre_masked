
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct atmel_private {int preamble; int channel; scalar_t__ operating_mode; scalar_t__ station_is_associated; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (struct atmel_private*,int ,int ,int) ;
 int FUNC_2 (struct atmel_private*,int ) ;

__attribute__((used)) static void FUNC_3(struct atmel_private *VAR_11, u16 VAR_12,
    u8 VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = VAR_12 & VAR_10 ?
  VAR_8 : VAR_4;

 if (VAR_11->preamble != VAR_15) {
  VAR_11->preamble = VAR_15;
  VAR_14 = 1;
  FUNC_1(VAR_11, VAR_5, VAR_3, VAR_15);
 }

 if (VAR_11->channel != VAR_13) {
  VAR_11->channel = VAR_13;
  VAR_14 = 1;
  FUNC_1(VAR_11, VAR_7, VAR_6, VAR_13);
 }

 if (VAR_14) {
  VAR_11->station_is_associated = 0;
  FUNC_0(VAR_11, VAR_9);

  if (VAR_11->operating_mode == VAR_2)
   FUNC_2(VAR_11, VAR_1);
  else
   FUNC_2(VAR_11, VAR_0);
 }
}
