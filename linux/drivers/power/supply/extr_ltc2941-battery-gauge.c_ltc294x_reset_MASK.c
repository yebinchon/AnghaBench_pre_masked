
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ltc294x_info {int id; TYPE_1__* client; } ;
struct TYPE_3__ {int dev; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(const struct ltc294x_info *VAR_4, int VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 u8 VAR_8;


 VAR_6 = FUNC_2(VAR_4->client, VAR_2, &VAR_7, 1);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->client->dev,
   "Could not read registers from device\n");
  goto error_exit;
 }

 VAR_8 = FUNC_0(VAR_5) |
    VAR_3;

 switch (VAR_4->id) {
 case 130:
  VAR_8 |= VAR_0;
  break;
 case 129:
 case 128:
  VAR_8 |= VAR_1;
  break;
 default:
  break;
 }

 if (VAR_7 != VAR_8) {
  VAR_6 = FUNC_3(VAR_4->client,
   VAR_2, &VAR_8, 1);
  if (VAR_6 < 0) {
   FUNC_1(&VAR_4->client->dev,
    "Could not write register\n");
   goto error_exit;
  }
 }

 return 0;

error_exit:
 return VAR_6;
}
