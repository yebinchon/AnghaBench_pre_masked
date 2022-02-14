
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spi_master {int bus_num; } ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int member_0; } ;
struct spi_board_info {int max_speed_hz; scalar_t__ chip_select; int bus_num; int mode; int modalias; TYPE_1__ member_0; } ;
struct gb_spilib {int connection; } ;
struct gb_spi_device_config_response {scalar_t__ device_type; int max_speed_hz; int mode; int name; } ;
struct gb_spi_device_config_request {scalar_t__ chip_select; } ;
typedef int response ;
typedef int request ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct gb_spi_device_config_request*,int,struct gb_spi_device_config_response*,int) ;
 struct spi_master* FUNC_1 (struct gb_spilib*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct spi_device* FUNC_5 (struct spi_master*,struct spi_board_info*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct gb_spilib *VAR_5, u8 VAR_6)
{
 struct spi_master *VAR_7 = FUNC_1(VAR_5);
 struct gb_spi_device_config_request VAR_8;
 struct gb_spi_device_config_response VAR_9;
 struct spi_board_info VAR_10 = { 0 };
 struct spi_device *VAR_11;
 int VAR_12;
 u8 VAR_13;

 VAR_8.chip_select = VAR_6;

 VAR_12 = FUNC_0(VAR_5->connection, VAR_4,
    &VAR_8, sizeof(VAR_8),
    &VAR_9, sizeof(VAR_9));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = VAR_9.device_type;

 if (VAR_13 == VAR_1)
  FUNC_6(VAR_10.modalias, "spidev",
   sizeof(VAR_10.modalias));
 else if (VAR_13 == VAR_3)
  FUNC_6(VAR_10.modalias, "spi-nor",
   sizeof(VAR_10.modalias));
 else if (VAR_13 == VAR_2)
  FUNC_4(VAR_10.modalias, VAR_9.name,
         sizeof(VAR_10.modalias));
 else
  return -VAR_0;

 VAR_10.mode = FUNC_2(VAR_9.mode);
 VAR_10.bus_num = VAR_7->bus_num;
 VAR_10.chip_select = VAR_6;
 VAR_10.max_speed_hz = FUNC_3(VAR_9.max_speed_hz);

 VAR_11 = FUNC_5(VAR_7, &VAR_10);
 if (!VAR_11)
  return -VAR_0;

 return 0;
}
