
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int sd_ctl; scalar_t__ mmc_ddr_tx_phase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_4)
{
 int VAR_5;

 if (!(VAR_4->sd_ctl & VAR_0)) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 != VAR_2)
   return VAR_1;
 } else {
  VAR_5 = FUNC_0(VAR_4, (u8)VAR_4->mmc_ddr_tx_phase,
      VAR_3);
  if (VAR_5 != VAR_2)
   return VAR_1;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 != VAR_2)
  return VAR_1;

 if (!(VAR_4->sd_ctl & VAR_0)) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 != VAR_2)
   return VAR_1;
 }

 return VAR_2;
}
