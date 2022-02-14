
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_sdio {int sr_enabled; int sdiodev; int ci; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct brcmf_sdio*) ;
 int FUNC_4 (int ,int ,int,int*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int,int*) ;

__attribute__((used)) static void FUNC_7(struct brcmf_sdio *VAR_12)
{
 int VAR_13 = 0;
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u8 VAR_17;

 FUNC_1(VAR_11, "Enter\n");

 if (FUNC_0(VAR_12->ci)) {
  VAR_15 = VAR_4;
  VAR_17 = VAR_6;
 } else {
  VAR_15 = VAR_5;
  VAR_17 = VAR_1;
 }

 if (FUNC_3(VAR_12)) {
  VAR_16 = VAR_10;
 } else {
  VAR_16 = (VAR_9 |
      VAR_8);
 }

 VAR_14 = FUNC_5(VAR_12->sdiodev, VAR_3, &VAR_13);
 if (VAR_13) {
  FUNC_2("error reading SBSDIO_FUNC1_WAKEUPCTRL\n");
  return;
 }
 VAR_14 |= 1 << VAR_15;
 FUNC_6(VAR_12->sdiodev, VAR_3, VAR_14, &VAR_13);
 if (VAR_13) {
  FUNC_2("error writing SBSDIO_FUNC1_WAKEUPCTRL\n");
  return;
 }


 FUNC_4(VAR_12->sdiodev, VAR_7,
        VAR_16,
        &VAR_13);
 if (VAR_13) {
  FUNC_2("error writing SDIO_CCCR_BRCM_CARDCAP\n");
  return;
 }

 FUNC_6(VAR_12->sdiodev, VAR_2,
      VAR_17, &VAR_13);
 if (VAR_13) {
  FUNC_2("error writing SBSDIO_FUNC1_CHIPCLKCSR\n");
  return;
 }


 VAR_12->sr_enabled = 1;
 FUNC_1(VAR_0, "SR enabled\n");
}
