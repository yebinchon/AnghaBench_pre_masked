
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int dev; struct ath_hw* sc_ah; } ;
struct ath_hw {int eeprom_blob; } ;
struct ath9k_eeprom_ctx {int complete; struct ath_hw* ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,char const*,int ,int ,struct ath9k_eeprom_ctx*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ath_softc *VAR_4, const char *VAR_5)
{
 struct ath9k_eeprom_ctx VAR_6;
 struct ath_hw *VAR_7 = VAR_4->sc_ah;
 int VAR_8;


 FUNC_2(&VAR_6.complete);
 VAR_6.ah = VAR_4->sc_ah;

 VAR_8 = FUNC_3(VAR_2, 1, VAR_5, VAR_4->dev, VAR_1,
          &VAR_6, VAR_3);
 if (VAR_8 < 0) {
  FUNC_1(FUNC_0(VAR_7),
   "EEPROM request failed\n");
  return VAR_8;
 }

 FUNC_4(&VAR_6.complete);

 if (!VAR_7->eeprom_blob) {
  FUNC_1(FUNC_0(VAR_7),
   "Unable to load EEPROM file %s\n", VAR_5);
  return -VAR_0;
 }

 return 0;
}
