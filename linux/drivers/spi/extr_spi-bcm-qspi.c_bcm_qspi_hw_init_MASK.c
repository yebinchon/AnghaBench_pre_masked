
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_qspi_parms {int bits_per_word; int speed_hz; int mode; } ;
struct bcm_qspi {int max_speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcm_qspi*) ;
 int FUNC_1 (struct bcm_qspi*,struct bcm_qspi_parms*) ;
 int FUNC_2 (struct bcm_qspi*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct bcm_qspi*) ;

__attribute__((used)) static void FUNC_4(struct bcm_qspi *VAR_7)
{
 struct bcm_qspi_parms VAR_8;

 FUNC_2(VAR_7, VAR_0, VAR_3, 0);
 FUNC_2(VAR_7, VAR_0, VAR_4, 0);
 FUNC_2(VAR_7, VAR_0, VAR_2, 0);
 FUNC_2(VAR_7, VAR_0, VAR_1, 0);
 FUNC_2(VAR_7, VAR_0, VAR_5, 0x20);

 VAR_8.mode = VAR_6;
 VAR_8.bits_per_word = 8;
 VAR_8.speed_hz = VAR_7->max_speed_hz;
 FUNC_1(VAR_7, &VAR_8);

 if (FUNC_3(VAR_7))
  FUNC_0(VAR_7);
}
