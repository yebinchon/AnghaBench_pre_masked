
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned char u32 ;
struct saa7134_dev {int dummy; } ;
struct IR_i2c {TYPE_2__* c; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_5__ {TYPE_1__* adapter; } ;
struct TYPE_4__ {struct saa7134_dev* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_2 (struct IR_i2c*,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct IR_i2c *VAR_5, enum rc_proto *VAR_6,
          u32 *VAR_7, u8 *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 unsigned char VAR_12;


 struct saa7134_dev *VAR_13 = VAR_5->c->adapter->algo_data;

 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_5, "get_key_flydvb_trio: ir->c->adapter->algo_data is NULL!\n");
  return -VAR_0;
 }


 FUNC_4(VAR_2, VAR_3);
 FUNC_6(VAR_2, VAR_3);

 VAR_9 = FUNC_5(VAR_4 >> 2);

 if (0x40000 & ~VAR_9)
  return 0;



 VAR_12 = 0;

 while (1 != FUNC_1(VAR_5->c, &VAR_12, 1)) {
  if ((VAR_11++) < 10) {




   FUNC_3(10);
   continue;
  }
  FUNC_2(VAR_5, "send wake up byte to pic16C505 (IR chip)failed %dx\n",
         VAR_11);
  return -VAR_0;
 }
 VAR_10 = FUNC_0(VAR_5->c, &VAR_12, 1);
 if (VAR_10 != 1) {
  FUNC_2(VAR_5, "read error\n");
  if (VAR_10 < 0)
   return VAR_10;
  return -VAR_0;
 }

 *VAR_6 = VAR_1;
 *VAR_7 = VAR_12;
 *VAR_8 = 0;
 return 1;
}
