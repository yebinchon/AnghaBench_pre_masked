
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct spi_device {int dev; } ;
struct TYPE_5__ {void* status; } ;
struct TYPE_4__ {void* sfr_value; void* sfr_address; void* sfr_page; } ;
struct TYPE_6__ {TYPE_2__ tdme_set_sfr_cnf; TYPE_1__ tdme_set_sfr_req; } ;
struct mac_message {int command_id; int length; TYPE_3__ pdata; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int,int*,void*) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static u8 FUNC_2(
 u8 VAR_4,
 u8 VAR_5,
 u8 VAR_6,
 void *VAR_7
)
{
 int VAR_8;
 struct mac_message VAR_9, VAR_10;
 struct spi_device *VAR_11 = VAR_7;

 VAR_9.command_id = VAR_3;
 VAR_9.length = 3;
 VAR_9.pdata.tdme_set_sfr_req.sfr_page = VAR_4;
 VAR_9.pdata.tdme_set_sfr_req.sfr_address = VAR_5;
 VAR_9.pdata.tdme_set_sfr_req.sfr_value = VAR_6;
 VAR_10.command_id = VAR_1;
 VAR_8 = FUNC_0(
  &VAR_9.command_id,
  VAR_9.length + 2,
  &VAR_10.command_id,
  VAR_7
 );
 if (VAR_8) {
  FUNC_1(&VAR_11->dev, "cascoda_api_downstream returned %d", VAR_8);
  return VAR_0;
 }

 if (VAR_10.command_id != VAR_2) {
  FUNC_1(
   &VAR_11->dev,
   "sync response to SPI_TDME_SETSFR_REQUEST was not SPI_TDME_SETSFR_CONFIRM, it was %d\n",
   VAR_10.command_id
  );
  return VAR_0;
 }

 return VAR_10.pdata.tdme_set_sfr_cnf.status;
}
