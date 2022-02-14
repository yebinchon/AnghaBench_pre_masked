
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bq24735 {TYPE_1__* client; scalar_t__ status_gpio; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct bq24735 *VAR_2)
{
 if (VAR_2->status_gpio) {
  return !FUNC_2(VAR_2->status_gpio);
 } else {
  int VAR_3 = 0;

  VAR_3 = FUNC_0(VAR_2->client, VAR_0);
  if (VAR_3 < 0) {
   FUNC_1(&VAR_2->client->dev,
    "Failed to read charger options : %d\n",
    VAR_3);
   return 0;
  }
  return (VAR_3 & VAR_1) ? 1 : 0;
 }

 return 0;
}
