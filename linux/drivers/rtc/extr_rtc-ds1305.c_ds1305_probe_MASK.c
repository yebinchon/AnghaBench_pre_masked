
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int value ;
typedef int u8 ;
struct spi_device {int bits_per_word; int max_speed_hz; int mode; int dev; scalar_t__ irq; } ;
struct nvmem_config {char* name; int word_size; int stride; struct ds1305* priv; int reg_write; int reg_read; int size; } ;
struct ds1305_platform_data {int trickle; scalar_t__ en_1hz; scalar_t__ is_ds1306; } ;
struct ds1305 {int* ctrl; int hr12; TYPE_1__* rtc; int work; struct spi_device* spi; } ;
typedef int buf ;
typedef int addr ;
struct TYPE_6__ {int nvram_old_abi; int dev; int * ops; } ;


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
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,scalar_t__,int) ;
 struct ds1305_platform_data* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int) ;
 struct ds1305* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,scalar_t__,int ,int ,int ,struct ds1305*) ;
 TYPE_1__* FUNC_11 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct spi_device*,struct ds1305*) ;
 int FUNC_15 (struct spi_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_19)
{
 struct ds1305 *VAR_20;
 int VAR_21;
 u8 VAR_22, VAR_23;
 struct ds1305_platform_data *VAR_24 = FUNC_5(&VAR_19->dev);
 bool VAR_25 = 0;
 struct nvmem_config VAR_26 = {
  .name = "ds1305_nvram",
  .word_size = 1,
  .stride = 1,
  .size = VAR_3,
  .reg_read = VAR_15,
  .reg_write = VAR_16,
 };





 if ((VAR_19->bits_per_word && VAR_19->bits_per_word != 8)
   || (VAR_19->max_speed_hz > 2000000)
   || !(VAR_19->mode & VAR_13))
  return -VAR_9;


 VAR_20 = FUNC_9(&VAR_19->dev, sizeof(*VAR_20), VAR_12);
 if (!VAR_20)
  return -VAR_11;
 VAR_20->spi = VAR_19;
 FUNC_14(VAR_19, VAR_20);


 VAR_22 = VAR_0;
 VAR_21 = FUNC_15(VAR_19, &VAR_22, sizeof(VAR_22),
   VAR_20->ctrl, sizeof(VAR_20->ctrl));
 if (VAR_21 < 0) {
  FUNC_3(&VAR_19->dev, "can't %s, %d\n",
    "read", VAR_21);
  return VAR_21;
 }

 FUNC_3(&VAR_19->dev, "ctrl %s: %3ph\n", "read", VAR_20->ctrl);






 if ((VAR_20->ctrl[0] & 0x38) != 0 || (VAR_20->ctrl[1] & 0xfc) != 0) {
  FUNC_3(&VAR_19->dev, "RTC chip is not present\n");
  return -VAR_10;
 }
 if (VAR_20->ctrl[2] == 0)
  FUNC_3(&VAR_19->dev, "chip may not be present\n");




 if (VAR_20->ctrl[0] & VAR_5) {
  u8 VAR_27[2];

  VAR_20->ctrl[0] &= ~VAR_5;

  VAR_27[0] = VAR_6 | VAR_0;
  VAR_27[1] = VAR_20->ctrl[0];
  VAR_21 = FUNC_15(VAR_19, VAR_27, sizeof(VAR_27), ((void*)0), 0);

  FUNC_3(&VAR_19->dev, "clear WP --> %d\n", VAR_21);
  if (VAR_21 < 0)
   return VAR_21;
 }




 if (VAR_20->ctrl[0] & VAR_7) {
  VAR_20->ctrl[0] &= ~VAR_7;
  VAR_25 = 1;
  FUNC_7(&VAR_19->dev, "SET TIME!\n");
 }


 if (VAR_20->ctrl[1]) {
  VAR_20->ctrl[1] = 0;
  VAR_25 = 1;
 }


 if (VAR_24) {

  if (((VAR_20->ctrl[2] & 0xf0) != VAR_4)) {
   VAR_20->ctrl[2] = VAR_4
      | VAR_24->trickle;
   VAR_25 = 1;
  }


  if (VAR_24->is_ds1306) {
   if (VAR_24->en_1hz) {
    if (!(VAR_20->ctrl[0] & VAR_8)) {
     VAR_20->ctrl[0] |= VAR_8;
     VAR_25 = 1;
    }
   } else {
    if (VAR_20->ctrl[0] & VAR_8) {
     VAR_20->ctrl[0] &= ~VAR_8;
     VAR_25 = 1;
    }
   }
  }
 }

 if (VAR_25) {
  u8 VAR_28[4];

  VAR_28[0] = VAR_6 | VAR_0;
  VAR_28[1] = VAR_20->ctrl[0];
  VAR_28[2] = VAR_20->ctrl[1];
  VAR_28[3] = VAR_20->ctrl[2];
  VAR_21 = FUNC_15(VAR_19, VAR_28, sizeof(VAR_28), ((void*)0), 0);
  if (VAR_21 < 0) {
   FUNC_3(&VAR_19->dev, "can't %s, %d\n",
     "write", VAR_21);
   return VAR_21;
  }

  FUNC_3(&VAR_19->dev, "ctrl %s: %3ph\n", "write", VAR_20->ctrl);
 }


 VAR_22 = VAR_1;
 VAR_21 = FUNC_15(VAR_19, &VAR_22, sizeof(VAR_22),
    &VAR_23, sizeof(VAR_23));
 if (VAR_21 < 0) {
  FUNC_3(&VAR_19->dev, "read HOUR --> %d\n", VAR_21);
  return VAR_21;
 }

 VAR_20->hr12 = (VAR_2 & VAR_23) != 0;
 if (VAR_20->hr12)
  FUNC_3(&VAR_19->dev, "AM/PM\n");


 VAR_20->rtc = FUNC_11(&VAR_19->dev);
 if (FUNC_1(VAR_20->rtc))
  return FUNC_2(VAR_20->rtc);

 VAR_20->rtc->ops = &VAR_17;

 VAR_26.priv = VAR_20;
 VAR_20->rtc->nvram_old_abi = 1;
 VAR_21 = FUNC_13(VAR_20->rtc);
 if (VAR_21)
  return VAR_21;

 FUNC_12(VAR_20->rtc, &VAR_26);







 if (VAR_19->irq) {
  FUNC_0(&VAR_20->work, VAR_18);
  VAR_21 = FUNC_10(&VAR_19->dev, VAR_19->irq, VAR_14,
    0, FUNC_6(&VAR_20->rtc->dev), VAR_20);
  if (VAR_21 < 0) {
   FUNC_4(&VAR_19->dev, "request_irq %d --> %d\n",
     VAR_19->irq, VAR_21);
  } else {
   FUNC_8(&VAR_19->dev, 1);
  }
 }

 return 0;
}
