
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int max_speed_hz; int bits_per_word; int dev; int mode; int chip_select; } ;
struct hwbus_priv {struct cw1200_platform_data_spi const* pdata; int core; int wq; int lock; struct spi_device* func; } ;
struct cw1200_platform_data_spi {int spi_bits_per_word; int have_5ghz; int sdd_file; int macaddr; int ref_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct hwbus_priv*,int *,int *,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct hwbus_priv*) ;
 int FUNC_2 (struct hwbus_priv*) ;
 int FUNC_3 (struct cw1200_platform_data_spi const*) ;
 scalar_t__ FUNC_4 (struct cw1200_platform_data_spi const*) ;
 struct cw1200_platform_data_spi* FUNC_5 (int *) ;
 struct hwbus_priv* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int ,int,int) ;
 int FUNC_10 (struct spi_device*,struct hwbus_priv*) ;
 scalar_t__ FUNC_11 (struct spi_device*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_4)
{
 const struct cw1200_platform_data_spi *VAR_5 =
  FUNC_5(&VAR_4->dev);
 struct hwbus_priv *VAR_6;
 int VAR_7;


 if (VAR_4->max_speed_hz > 52000000)
  VAR_4->max_speed_hz = 52000000;
 if (VAR_4->max_speed_hz < 1000000)
  VAR_4->max_speed_hz = 1000000;


 if (VAR_5->spi_bits_per_word)
  VAR_4->bits_per_word = VAR_5->spi_bits_per_word;
 if (!VAR_4->bits_per_word)
  VAR_4->bits_per_word = 16;


 VAR_4->mode = VAR_2;

 FUNC_9("cw1200_wlan_spi: Probe called (CS %d M %d BPW %d CLK %d)\n",
  VAR_4->chip_select, VAR_4->mode, VAR_4->bits_per_word,
  VAR_4->max_speed_hz);

 if (FUNC_4(VAR_5)) {
  FUNC_8("spi_on() failed!\n");
  return -1;
 }

 if (FUNC_11(VAR_4)) {
  FUNC_8("spi_setup() failed!\n");
  return -1;
 }

 VAR_6 = FUNC_6(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_8("Can't allocate SPI hwbus_priv.");
  return -VAR_0;
 }

 VAR_6->pdata = VAR_5;
 VAR_6->func = VAR_4;
 FUNC_12(&VAR_6->lock);

 FUNC_10(VAR_4, VAR_6);

 FUNC_7(&VAR_6->wq);

 VAR_7 = FUNC_1(VAR_6);

 VAR_7 = FUNC_0(&VAR_3,
       VAR_6, &VAR_4->dev, &VAR_6->core,
       VAR_6->pdata->ref_clk,
       VAR_6->pdata->macaddr,
       VAR_6->pdata->sdd_file,
       VAR_6->pdata->have_5ghz);

 if (VAR_7) {
  FUNC_2(VAR_6);
  FUNC_3(VAR_5);
 }

 return VAR_7;
}
