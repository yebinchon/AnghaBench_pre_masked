
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rc_dev {struct em28xx_IR* priv; } ;
struct em28xx_IR {struct em28xx* dev; } ;
struct em28xx {int chip_id; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;
 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rc_dev*,int *) ;
 int FUNC_2 (struct rc_dev*,int *) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_1, u64 *VAR_2)
{
 struct em28xx_IR *VAR_3 = VAR_1->priv;
 struct em28xx *VAR_4 = VAR_3->dev;


 switch (VAR_4->chip_id) {
 case 131:
 case 129:
  return FUNC_1(VAR_1, VAR_2);
 case 128:
 case 130:
 case 133:
 case 132:
  return FUNC_2(VAR_1, VAR_2);
 default:
  FUNC_0(&VAR_3->dev->intf->dev,
   "Unrecognized em28xx chip id 0x%02x: IR not supported\n",
   VAR_4->chip_id);
  return -VAR_0;
 }
}
