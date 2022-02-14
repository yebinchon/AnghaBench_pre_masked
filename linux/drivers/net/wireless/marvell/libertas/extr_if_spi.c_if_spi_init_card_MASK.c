
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct lbs_private {int dev; } ;
struct if_spi_card {scalar_t__ card_id; TYPE_3__* spi; int card_rev; TYPE_1__* pdata; struct lbs_private* priv; } ;
struct firmware {int dummy; } ;
struct TYPE_10__ {scalar_t__ model; } ;
struct TYPE_9__ {int max_speed_hz; int chip_select; TYPE_2__* master; int dev; } ;
struct TYPE_8__ {int bus_num; } ;
struct TYPE_7__ {int use_dummy_writes; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (struct if_spi_card*,struct firmware const*) ;
 int FUNC_2 (struct if_spi_card*,struct firmware const*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int,TYPE_4__*,struct firmware const**,struct firmware const**) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct if_spi_card*,scalar_t__*,int *) ;
 int FUNC_7 (struct if_spi_card*,int ) ;
 int FUNC_8 (struct if_spi_card*,int ,scalar_t__*) ;
 int FUNC_9 (struct if_spi_card*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct if_spi_card *VAR_4)
{
 struct lbs_private *VAR_5 = VAR_4->priv;
 int VAR_6, VAR_7;
 u32 VAR_8;
 const struct firmware *VAR_9 = ((void*)0);
 const struct firmware *VAR_10 = ((void*)0);

 VAR_6 = FUNC_7(VAR_4, VAR_4->pdata->use_dummy_writes);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_6(VAR_4, &VAR_4->card_id, &VAR_4->card_rev);
 if (VAR_6)
  goto out;

 VAR_6 = FUNC_8(VAR_4, VAR_1, &VAR_8);
 if (VAR_6)
  goto out;
 if (VAR_8 == VAR_2)
  FUNC_3("Firmware is already loaded for "
       "Marvell WLAN 802.11 adapter\n");
 else {

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
   if (VAR_4->card_id == VAR_3[VAR_7].model)
    break;
  }
  if (VAR_7 == FUNC_0(VAR_3)) {
   FUNC_5(VAR_5->dev, "Unsupported chip_id: 0x%02x\n",
       VAR_4->card_id);
   VAR_6 = -VAR_0;
   goto out;
  }

  VAR_6 = FUNC_4(&VAR_4->spi->dev, VAR_4->card_id,
     &VAR_3[0], &VAR_9, &VAR_10);
  if (VAR_6) {
   FUNC_5(VAR_5->dev, "failed to find firmware (%d)\n",
       VAR_6);
   goto out;
  }

  FUNC_3("Initializing FW for Marvell WLAN 802.11 adapter "
    "(chip_id = 0x%04x, chip_rev = 0x%02x) "
    "attached to SPI bus_num %d, chip_select %d. "
    "spi->max_speed_hz=%d\n",
    VAR_4->card_id, VAR_4->card_rev,
    VAR_4->spi->master->bus_num,
    VAR_4->spi->chip_select,
    VAR_4->spi->max_speed_hz);
  VAR_6 = FUNC_1(VAR_4, VAR_9);
  if (VAR_6)
   goto out;
  VAR_6 = FUNC_2(VAR_4, VAR_10);
  if (VAR_6)
   goto out;
  FUNC_3("loaded FW for Marvell WLAN 802.11 adapter\n");
 }

 VAR_6 = FUNC_9(VAR_4, 0, 1);
 if (VAR_6)
  goto out;

out:
 return VAR_6;
}
