
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da903x_chip {int dev; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct da903x_chip *VAR_3)
{
 uint8_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->client, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3->client, VAR_1, 0xE8);
 if (VAR_5)
  return VAR_5;


 FUNC_1(VAR_3->client, 0x10, 0x07);
 FUNC_1(VAR_3->client, 0x11, 0xff);
 FUNC_1(VAR_3->client, 0x12, 0xff);


 FUNC_1(VAR_3->client, VAR_2, 0x20);
 FUNC_1(VAR_3->client, VAR_1, 0x60);


 FUNC_1(VAR_3->client, 0x90, 0x01);
 FUNC_1(VAR_3->client, 0xB0, 0x08);


 FUNC_1(VAR_3->client, 0x20, 0x00);

 FUNC_2(VAR_3->dev, "DA9034 (CHIP ID: 0x%02x) detected\n", VAR_4);
 return 0;
}
