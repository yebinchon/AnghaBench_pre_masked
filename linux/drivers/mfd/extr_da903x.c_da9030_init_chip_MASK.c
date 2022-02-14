
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da903x_chip {int dev; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct da903x_chip *VAR_2)
{
 uint8_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->client, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2->client, VAR_1, 0xE8);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2->dev, "DA9030 (CHIP ID: 0x%02x) detected\n", VAR_3);
 return 0;
}
