
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct code_block {int length; int * pulse; } ;
struct IR_i2c {TYPE_1__* c; int tx_c; } ;
typedef int code_block ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct IR_i2c*,int ,struct code_block*) ;

__attribute__((used)) static int FUNC_5(struct IR_i2c *VAR_2)
{
 struct code_block VAR_3 = { .length = sizeof(VAR_3) };
 u8 VAR_4[4];
 int VAR_5;

 FUNC_3(0x1000, &VAR_3.pulse[3]);

 VAR_5 = FUNC_4(VAR_2, VAR_1, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_2->tx_c, VAR_4, 4);
 if (VAR_5 != 4) {
  FUNC_0(&VAR_2->c->dev, "failed to retrieve firmware version: %d\n",
   VAR_5);
  return VAR_5 < 0 ? VAR_5 : -VAR_0;
 }

 FUNC_1(&VAR_2->c->dev, "Zilog/Hauppauge IR blaster firmware version %d.%d.%d\n",
   VAR_4[1], VAR_4[2], VAR_4[3]);

 return 0;
}
