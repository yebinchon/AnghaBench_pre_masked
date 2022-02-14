
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct aat2870_data {int dev; int client; TYPE_1__* reg_cache; } ;
struct TYPE_2__ {size_t value; int readable; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,size_t*,int) ;
 int FUNC_3 (int ,size_t*,int) ;

__attribute__((used)) static int FUNC_4(struct aat2870_data *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 int VAR_6;

 if (VAR_4 >= VAR_0) {
  FUNC_1(VAR_3->dev, "Invalid address, 0x%02x\n", VAR_4);
  return -VAR_1;
 }

 if (!VAR_3->reg_cache[VAR_4].readable) {
  *VAR_5 = VAR_3->reg_cache[VAR_4].value;
  goto out;
 }

 VAR_6 = FUNC_3(VAR_3->client, &VAR_4, 1);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != 1)
  return -VAR_2;

 VAR_6 = FUNC_2(VAR_3->client, VAR_5, 1);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != 1)
  return -VAR_2;

out:
 FUNC_0(VAR_3->dev, "read: addr=0x%02x, val=0x%02x\n", VAR_4, *VAR_5);
 return 0;
}
