
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct aat2870_data {int dev; TYPE_1__* reg_cache; int client; } ;
struct TYPE_2__ {size_t value; int writeable; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,size_t*,int) ;

__attribute__((used)) static int FUNC_3(struct aat2870_data *VAR_3, u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6[2];
 int VAR_7;

 if (VAR_4 >= VAR_0) {
  FUNC_1(VAR_3->dev, "Invalid address, 0x%02x\n", VAR_4);
  return -VAR_1;
 }

 if (!VAR_3->reg_cache[VAR_4].writeable) {
  FUNC_1(VAR_3->dev, "Address 0x%02x is not writeable\n",
   VAR_4);
  return -VAR_1;
 }

 VAR_6[0] = VAR_4;
 VAR_6[1] = VAR_5;
 VAR_7 = FUNC_2(VAR_3->client, VAR_6, 2);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 != 2)
  return -VAR_2;

 VAR_3->reg_cache[VAR_4].value = VAR_5;

 FUNC_0(VAR_3->dev, "write: addr=0x%02x, val=0x%02x\n", VAR_4, VAR_5);
 return 0;
}
