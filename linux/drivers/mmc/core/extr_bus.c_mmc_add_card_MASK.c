
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct mmc_card {int type; size_t sd_bus_speed; TYPE_1__ dev; int host; int rca; } ;


 size_t FUNC_0 (char const* const*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct mmc_card*) ;
 int FUNC_5 (struct mmc_card*) ;
 scalar_t__ FUNC_6 (struct mmc_card*) ;
 int FUNC_7 (struct mmc_card*) ;
 scalar_t__ FUNC_8 (struct mmc_card*) ;
 scalar_t__ FUNC_9 (struct mmc_card*) ;
 scalar_t__ FUNC_10 (struct mmc_card*) ;
 scalar_t__ FUNC_11 (struct mmc_card*) ;
 int FUNC_12 (struct mmc_card*) ;
 scalar_t__ FUNC_13 (struct mmc_card*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*,int ,char*,char*,char const*,...) ;

int FUNC_18(struct mmc_card *VAR_0)
{
 int VAR_1;
 const char *VAR_2;
 const char *VAR_3 = "";
 static const char *const VAR_4[] = {
  [130] = "SDR12 ",
  [129] = "SDR25 ",
  [128] = "SDR50 ",
  [131] = "SDR104 ",
  [132] = "DDR50 ",
 };


 FUNC_1(&VAR_0->dev, "%s:%04x", FUNC_15(VAR_0->host), VAR_0->rca);

 switch (VAR_0->type) {
 case 136:
  VAR_2 = "MMC";
  break;
 case 135:
  VAR_2 = "SD";
  if (FUNC_5(VAR_0)) {
   if (FUNC_7(VAR_0))
    VAR_2 = "SDXC";
   else
    VAR_2 = "SDHC";
  }
  break;
 case 134:
  VAR_2 = "SDIO";
  break;
 case 133:
  VAR_2 = "SD-combo";
  if (FUNC_5(VAR_0))
   VAR_2 = "SDHC-combo";
  break;
 default:
  VAR_2 = "?";
  break;
 }

 if (FUNC_13(VAR_0) &&
  (VAR_0->sd_bus_speed < FUNC_0(VAR_4)))
  VAR_3 = VAR_4[VAR_0->sd_bus_speed];

 if (FUNC_14(VAR_0->host)) {
  FUNC_17("%s: new %s%s%s card on SPI\n",
   FUNC_15(VAR_0->host),
   FUNC_8(VAR_0) ? "high speed " : "",
   FUNC_6(VAR_0) ? "DDR " : "",
   VAR_2);
 } else {
  FUNC_17("%s: new %s%s%s%s%s%s card at address %04x\n",
   FUNC_15(VAR_0->host),
   FUNC_13(VAR_0) ? "ultra high speed " :
   (FUNC_8(VAR_0) ? "high speed " : ""),
   FUNC_10(VAR_0) ? "HS400 " :
   (FUNC_9(VAR_0) ? "HS200 " : ""),
   FUNC_11(VAR_0) ? "Enhanced strobe " : "",
   FUNC_6(VAR_0) ? "DDR " : "",
   VAR_3, VAR_2, VAR_0->rca);
 }




 VAR_0->dev.of_node = FUNC_16(VAR_0->host, 0);

 FUNC_3(&VAR_0->dev);

 VAR_1 = FUNC_2(&VAR_0->dev);
 if (VAR_1)
  return VAR_1;

 FUNC_12(VAR_0);

 return 0;
}
