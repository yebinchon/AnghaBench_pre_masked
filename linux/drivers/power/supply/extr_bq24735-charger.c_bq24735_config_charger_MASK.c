
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bq24735_platform {int charge_current; int charge_voltage; int input_current; scalar_t__ ext_control; } ;
struct bq24735 {TYPE_1__* client; struct bq24735_platform* pdata; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct bq24735 *VAR_6)
{
 struct bq24735_platform *VAR_7 = VAR_6->pdata;
 int VAR_8;
 u16 VAR_9;

 if (VAR_7->ext_control)
  return 0;

 if (VAR_7->charge_current) {
  VAR_9 = VAR_7->charge_current & VAR_1;

  VAR_8 = FUNC_0(VAR_6->client,
      VAR_0, VAR_9);
  if (VAR_8 < 0) {
   FUNC_1(&VAR_6->client->dev,
    "Failed to write charger current : %d\n",
    VAR_8);
   return VAR_8;
  }
 }

 if (VAR_7->charge_voltage) {
  VAR_9 = VAR_7->charge_voltage & VAR_3;

  VAR_8 = FUNC_0(VAR_6->client,
      VAR_2, VAR_9);
  if (VAR_8 < 0) {
   FUNC_1(&VAR_6->client->dev,
    "Failed to write charger voltage : %d\n",
    VAR_8);
   return VAR_8;
  }
 }

 if (VAR_7->input_current) {
  VAR_9 = VAR_7->input_current & VAR_5;

  VAR_8 = FUNC_0(VAR_6->client,
      VAR_4, VAR_9);
  if (VAR_8 < 0) {
   FUNC_1(&VAR_6->client->dev,
    "Failed to write input current : %d\n",
    VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
