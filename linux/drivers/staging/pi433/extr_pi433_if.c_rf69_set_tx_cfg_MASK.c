
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi433_tx_cfg {scalar_t__ enable_preamble; scalar_t__ enable_sync; scalar_t__ enable_length_byte; scalar_t__ enable_crc; int sync_pattern; int sync_length; int preamble_length; int tx_start_condition; int mod_shaping; int pa_ramp; int dev_frequency; int modulation; int bit_rate; int frequency; } ;
struct pi433_device {int spi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int
FUNC_15(struct pi433_device *VAR_3, struct pi433_tx_cfg *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_6(VAR_3->spi, VAR_4->frequency);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_4(VAR_3->spi, VAR_4->bit_rate);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_7(VAR_3->spi, VAR_4->modulation);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_5(VAR_3->spi, VAR_4->dev_frequency);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_9(VAR_3->spi, VAR_4->pa_ramp);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_8(VAR_3->spi, VAR_4->mod_shaping);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_14(VAR_3->spi, VAR_4->tx_start_condition);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_4->enable_preamble == VAR_0) {
  VAR_5 = FUNC_11(VAR_3->spi,
            VAR_4->preamble_length);
  if (VAR_5 < 0)
   return VAR_5;
 } else {
  VAR_5 = FUNC_11(VAR_3->spi, 0);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_4->enable_sync == VAR_0) {
  VAR_5 = FUNC_12(VAR_3->spi, VAR_4->sync_length);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_5 = FUNC_13(VAR_3->spi, VAR_4->sync_pattern);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_5 = FUNC_3(VAR_3->spi);
  if (VAR_5 < 0)
   return VAR_5;
 } else {
  VAR_5 = FUNC_1(VAR_3->spi);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_4->enable_length_byte == VAR_0) {
  VAR_5 = FUNC_10(VAR_3->spi, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
 } else {
  VAR_5 = FUNC_10(VAR_3->spi, VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_4->enable_crc == VAR_0) {
  VAR_5 = FUNC_2(VAR_3->spi);
  if (VAR_5 < 0)
   return VAR_5;
 } else {
  VAR_5 = FUNC_0(VAR_3->spi);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
