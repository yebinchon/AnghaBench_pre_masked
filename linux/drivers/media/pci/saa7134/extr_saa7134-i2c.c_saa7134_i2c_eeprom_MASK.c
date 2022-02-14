
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct saa7134_dev {scalar_t__ board; int name; TYPE_1__ i2c_client; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct saa7134_dev*) ;

__attribute__((used)) static int
FUNC_5(struct saa7134_dev *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 unsigned char VAR_4;
 int VAR_5,VAR_6;

 if (VAR_1->board == VAR_0)
  FUNC_4(VAR_1);

 VAR_1->i2c_client.addr = 0xa0 >> 1;
 VAR_4 = 0;
 if (1 != (VAR_6 = FUNC_1(&VAR_1->i2c_client,&VAR_4,1))) {
  FUNC_2("%s: Huh, no eeprom present (err=%d)?\n",
         VAR_1->name,VAR_6);
  return -1;
 }
 if (VAR_3 != (VAR_6 = FUNC_0(&VAR_1->i2c_client,VAR_2,VAR_3))) {
  FUNC_3("%s: i2c eeprom read error (err=%d)\n",
         VAR_1->name,VAR_6);
  return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 16) {
  int VAR_7 = (VAR_3 - VAR_5) > 16 ? 16 : VAR_3 - VAR_5;

  FUNC_2("i2c eeprom %02x: %*ph\n", VAR_5, VAR_7, &VAR_2[VAR_5]);
 }

 return 0;
}
