
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi433_rx_cfg {scalar_t__ enable_sync; scalar_t__ enable_length_byte; scalar_t__ enable_address_filtering; scalar_t__ enable_crc; int fixed_message_length; int broadcast_address; int node_address; int sync_pattern; int sync_length; int bytes_to_drop; int dagc; int bw_exponent; int bw_mantisse; int threshold_decrement; int rssi_threshold; int antenna_impedance; int modulation; int bit_rate; int frequency; } ;
struct pi433_device {int spi; int rx_bytes_to_drop; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static int
FUNC_21(struct pi433_device *VAR_6, struct pi433_rx_cfg *VAR_7)
{
 int VAR_8;
 int VAR_9;


 VAR_8 = FUNC_12(VAR_6->spi, VAR_7->frequency);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_8(VAR_6->spi, VAR_7->bit_rate);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_13(VAR_6->spi, VAR_7->modulation);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_6->spi, VAR_7->antenna_impedance);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_18(VAR_6->spi, VAR_7->rssi_threshold);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_15(VAR_6->spi, VAR_7->threshold_decrement);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_6(VAR_6->spi, VAR_7->bw_mantisse,
     VAR_7->bw_exponent);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_7(VAR_6->spi, VAR_7->bw_mantisse,
         VAR_7->bw_exponent);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_10(VAR_6->spi, VAR_7->dagc);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->rx_bytes_to_drop = VAR_7->bytes_to_drop;



 if (VAR_7->enable_sync == VAR_0) {
  VAR_8 = FUNC_3(VAR_6->spi);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_11(VAR_6->spi,
         VAR_1);
  if (VAR_8 < 0)
   return VAR_8;
 } else {
  VAR_8 = FUNC_1(VAR_6->spi);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_11(VAR_6->spi, VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
 }
 if (VAR_7->enable_length_byte == VAR_0) {
  VAR_8 = FUNC_16(VAR_6->spi, VAR_5);
  if (VAR_8 < 0)
   return VAR_8;
 } else {
  VAR_8 = FUNC_16(VAR_6->spi, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;
 }
 VAR_8 = FUNC_4(VAR_6->spi,
      VAR_7->enable_address_filtering);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7->enable_crc == VAR_0) {
  VAR_8 = FUNC_2(VAR_6->spi);
  if (VAR_8 < 0)
   return VAR_8;
 } else {
  VAR_8 = FUNC_0(VAR_6->spi);
  if (VAR_8 < 0)
   return VAR_8;
 }


 VAR_8 = FUNC_19(VAR_6->spi, VAR_7->sync_length);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_7->enable_length_byte == VAR_0) {
  VAR_8 = FUNC_17(VAR_6->spi, 0xff);
  if (VAR_8 < 0)
   return VAR_8;
 } else if (VAR_7->fixed_message_length != 0) {
  VAR_9 = VAR_7->fixed_message_length;
  if (VAR_7->enable_length_byte == VAR_0)
   VAR_9++;
  if (VAR_7->enable_address_filtering != VAR_3)
   VAR_9++;
  VAR_8 = FUNC_17(VAR_6->spi, VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
 } else {
  VAR_8 = FUNC_17(VAR_6->spi, 0);
  if (VAR_8 < 0)
   return VAR_8;
 }


 if (VAR_7->enable_sync == VAR_0) {
  VAR_8 = FUNC_20(VAR_6->spi, VAR_7->sync_pattern);
  if (VAR_8 < 0)
   return VAR_8;
 }
 if (VAR_7->enable_address_filtering != VAR_3) {
  VAR_8 = FUNC_14(VAR_6->spi, VAR_7->node_address);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_8 = FUNC_9(VAR_6->spi,
       VAR_7->broadcast_address);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
