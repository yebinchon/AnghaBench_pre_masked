
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spi_device {int dev; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ u8param; } ;
struct mac_message {scalar_t__ command_id; int length; TYPE_1__ pdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int,scalar_t__*,void*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,void*) ;

__attribute__((used)) static u8 FUNC_3(
 u8 VAR_5,
 void *VAR_6
)
{
 u8 VAR_7;
 struct mac_message VAR_8, VAR_9;
 struct spi_device *VAR_10 = VAR_6;

 VAR_8.command_id = VAR_4;
 VAR_8.length = 1;
 VAR_8.pdata.u8param = VAR_5;

 if (FUNC_0(
  &VAR_8.command_id,
  VAR_8.length + 2,
  &VAR_9.command_id,
  VAR_6)) {
  FUNC_1(&VAR_10->dev, "cascoda_api_downstream failed\n");
  return VAR_2;
 }

 if (VAR_9.command_id != VAR_3)
  return VAR_2;

 VAR_7 = VAR_9.pdata.status;


 if (VAR_0 && VAR_5 && !VAR_7) {
  VAR_7 = FUNC_2(
   0,
   VAR_1,
   0,
   VAR_6
  );
 }

 return VAR_7;
}
