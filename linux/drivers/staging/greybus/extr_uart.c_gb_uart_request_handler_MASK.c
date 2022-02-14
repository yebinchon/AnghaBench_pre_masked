
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_tty {TYPE_1__* gbphy_dev; } ;
struct gb_operation {int type; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int) ;
 struct gb_tty* FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (struct gb_operation*) ;

__attribute__((used)) static int FUNC_5(struct gb_operation *VAR_1)
{
 struct gb_connection *VAR_2 = VAR_1->connection;
 struct gb_tty *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = VAR_1->type;
 int VAR_5;

 switch (VAR_4) {
 case 129:
  VAR_5 = FUNC_3(VAR_1);
  break;
 case 128:
  VAR_5 = FUNC_4(VAR_1);
  break;
 case 130:
  VAR_5 = FUNC_2(VAR_1);
  break;
 default:
  FUNC_0(&VAR_3->gbphy_dev->dev,
   "unsupported unsolicited request: 0x%02x\n", VAR_4);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
