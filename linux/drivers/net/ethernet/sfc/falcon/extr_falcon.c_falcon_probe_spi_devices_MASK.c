
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int spi_eeprom; int spi_flash; int spi_lock; } ;
struct ef4_nic {int net_dev; struct falcon_nic_data* nic_data; } ;
typedef int ef4_oword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,int) ;
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
 int FUNC_2 (struct ef4_nic*,int *,int ) ;
 int FUNC_3 (struct ef4_nic*,int *,int ) ;
 int FUNC_4 (struct ef4_nic*,int *,int,int ) ;
 int VAR_11 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ef4_nic*,int ,int ,char*,...) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_7(struct ef4_nic *VAR_13)
{
 struct falcon_nic_data *VAR_14 = VAR_13->nic_data;
 ef4_oword_t VAR_15, VAR_16, VAR_17;
 int VAR_18;

 FUNC_2(VAR_13, &VAR_16, VAR_8);
 FUNC_2(VAR_13, &VAR_15, VAR_9);
 FUNC_2(VAR_13, &VAR_17, VAR_7);

 if (FUNC_0(VAR_16, VAR_5)) {
  VAR_18 = (FUNC_0(VAR_15, VAR_6) ?
       VAR_1 : VAR_0);
  FUNC_6(VAR_13, VAR_12, VAR_13->net_dev, "Booted from %s\n",
     VAR_18 == VAR_1 ?
     "flash" : "EEPROM");
 } else {


  VAR_18 = -1;
  FUNC_6(VAR_13, VAR_12, VAR_13->net_dev,
     "Booted from internal ASIC settings;"
     " setting SPI config\n");
  FUNC_1(VAR_17, VAR_4, 0,

         VAR_3, 7,

         VAR_2, 63);
  FUNC_3(VAR_13, &VAR_17, VAR_7);
 }

 FUNC_5(&VAR_14->spi_lock);

 if (VAR_18 == VAR_1)
  FUNC_4(VAR_13, &VAR_14->spi_flash,
           VAR_1,
           VAR_10);
 if (VAR_18 == VAR_0)
  FUNC_4(VAR_13, &VAR_14->spi_eeprom,
           VAR_0,
           VAR_11);
}
