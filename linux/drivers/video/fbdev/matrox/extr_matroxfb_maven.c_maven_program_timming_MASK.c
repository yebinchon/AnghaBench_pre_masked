
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mavenregs {scalar_t__ mode; } ;
struct maven_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct i2c_client*,struct mavenregs const*) ;

__attribute__((used)) static int FUNC_3(struct maven_data* VAR_1,
  const struct mavenregs* VAR_2) {
 struct i2c_client *VAR_3 = VAR_1->client;

 if (VAR_2->mode == VAR_0) {
  FUNC_0(0x80);
  FUNC_0(0x81);
  FUNC_0(0x82);

  FUNC_0(0xB3);
  FUNC_0(0x94);

  FUNC_1(0x96);
  FUNC_1(0x98);
  FUNC_1(0x9A);
  FUNC_1(0x9C);
  FUNC_1(0x9E);
  FUNC_1(0xA0);
  FUNC_1(0xA2);
  FUNC_1(0xA4);
  FUNC_1(0xA6);
  FUNC_1(0xA8);
  FUNC_1(0xAA);
  FUNC_1(0xAC);
  FUNC_1(0xAE);

  FUNC_0(0xB0);
  FUNC_0(0xB1);
  FUNC_0(0x8C);
  FUNC_0(0x8D);
  FUNC_0(0xB9);
  FUNC_0(0xBF);
 } else {
  FUNC_2(VAR_3, VAR_2);
 }
 return 0;
}
