
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct cc2520_private {int amplified; int fifop_irqwork; int buffer_mutex; int tx_complete; int lock; void* buf; struct spi_device* spi; } ;
struct cc2520_platform_data {int sfd; int fifop; int reset; int vreg; int cca; int fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct spi_device*,struct cc2520_platform_data*) ;
 int FUNC_2 (struct cc2520_private*) ;
 int FUNC_3 (struct cc2520_private*) ;
 int VAR_11 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,char*) ;
 void* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ,struct cc2520_private*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct spi_device*,struct cc2520_private*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int,int) ;

__attribute__((used)) static int FUNC_19(struct spi_device *VAR_12)
{
 struct cc2520_private *VAR_13;
 struct cc2520_platform_data VAR_14;
 int VAR_15;

 VAR_13 = FUNC_7(&VAR_12->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_16(VAR_12, VAR_13);

 VAR_15 = FUNC_1(VAR_12, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_4(&VAR_12->dev, "no platform data\n");
  return -VAR_0;
 }

 VAR_13->spi = VAR_12;

 VAR_13->buf = FUNC_7(&VAR_12->dev,
     VAR_8, VAR_2);
 if (!VAR_13->buf)
  return -VAR_1;

 FUNC_15(&VAR_13->buffer_mutex);
 FUNC_0(&VAR_13->fifop_irqwork, VAR_9);
 FUNC_17(&VAR_13->lock);
 FUNC_13(&VAR_13->tx_complete);


 VAR_13->amplified = 0;


 if (!FUNC_10(VAR_14.fifo)) {
  FUNC_4(&VAR_12->dev, "fifo gpio is not valid\n");
  VAR_15 = -VAR_0;
  goto err_hw_init;
 }

 VAR_15 = FUNC_6(&VAR_12->dev, VAR_14.fifo,
        VAR_3, "fifo");
 if (VAR_15)
  goto err_hw_init;

 if (!FUNC_10(VAR_14.cca)) {
  FUNC_4(&VAR_12->dev, "cca gpio is not valid\n");
  VAR_15 = -VAR_0;
  goto err_hw_init;
 }

 VAR_15 = FUNC_6(&VAR_12->dev, VAR_14.cca,
        VAR_3, "cca");
 if (VAR_15)
  goto err_hw_init;

 if (!FUNC_10(VAR_14.fifop)) {
  FUNC_4(&VAR_12->dev, "fifop gpio is not valid\n");
  VAR_15 = -VAR_0;
  goto err_hw_init;
 }

 VAR_15 = FUNC_6(&VAR_12->dev, VAR_14.fifop,
        VAR_3, "fifop");
 if (VAR_15)
  goto err_hw_init;

 if (!FUNC_10(VAR_14.sfd)) {
  FUNC_4(&VAR_12->dev, "sfd gpio is not valid\n");
  VAR_15 = -VAR_0;
  goto err_hw_init;
 }

 VAR_15 = FUNC_6(&VAR_12->dev, VAR_14.sfd,
        VAR_3, "sfd");
 if (VAR_15)
  goto err_hw_init;

 if (!FUNC_10(VAR_14.reset)) {
  FUNC_4(&VAR_12->dev, "reset gpio is not valid\n");
  VAR_15 = -VAR_0;
  goto err_hw_init;
 }

 VAR_15 = FUNC_6(&VAR_12->dev, VAR_14.reset,
        VAR_4, "reset");
 if (VAR_15)
  goto err_hw_init;

 if (!FUNC_10(VAR_14.vreg)) {
  FUNC_4(&VAR_12->dev, "vreg gpio is not valid\n");
  VAR_15 = -VAR_0;
  goto err_hw_init;
 }

 VAR_15 = FUNC_6(&VAR_12->dev, VAR_14.vreg,
        VAR_4, "vreg");
 if (VAR_15)
  goto err_hw_init;

 FUNC_11(VAR_14.vreg, VAR_5);
 FUNC_18(100, 150);

 FUNC_11(VAR_14.reset, VAR_5);
 FUNC_18(200, 250);

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15)
  goto err_hw_init;


 VAR_15 = FUNC_8(&VAR_12->dev,
          FUNC_12(VAR_14.fifop),
          VAR_10,
          VAR_7,
          FUNC_5(&VAR_12->dev),
          VAR_13);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "could not get fifop irq\n");
  goto err_hw_init;
 }


 VAR_15 = FUNC_8(&VAR_12->dev,
          FUNC_12(VAR_14.sfd),
          VAR_11,
          VAR_6,
          FUNC_5(&VAR_12->dev),
          VAR_13);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "could not get sfd irq\n");
  goto err_hw_init;
 }

 VAR_15 = FUNC_3(VAR_13);
 if (VAR_15)
  goto err_hw_init;

 return 0;

err_hw_init:
 FUNC_14(&VAR_13->buffer_mutex);
 FUNC_9(&VAR_13->fifop_irqwork);
 return VAR_15;
}
