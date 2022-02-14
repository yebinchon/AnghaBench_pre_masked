
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ sd_io; scalar_t__ chip_insert_with_sdio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtsx_chip*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtsx_chip *VAR_5)
{
 if (VAR_5->sd_io) {
  FUNC_1(VAR_5, VAR_0, VAR_4 | VAR_3,
        VAR_4 | VAR_3);

  if (VAR_5->chip_insert_with_sdio) {
   VAR_5->chip_insert_with_sdio = 0;

   if (FUNC_0(VAR_5, 0x5288))
    FUNC_1(VAR_5, 0xFE5A, 0x08, 0x00);
   else
    FUNC_1(VAR_5, 0xFE70, 0x80, 0x00);
  }

  FUNC_1(VAR_5, VAR_2, VAR_1, 0);
  VAR_5->sd_io = 0;
 }
}
