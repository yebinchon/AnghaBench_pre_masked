
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gb_operation {int type; TYPE_2__* connection; } ;
struct TYPE_4__ {TYPE_1__* bundle; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct gb_operation*) ;
 int FUNC_2 (struct gb_operation*) ;
 int FUNC_3 (struct gb_operation*) ;

__attribute__((used)) static int FUNC_4(struct gb_operation *VAR_1)
{
 u8 VAR_2 = VAR_1->type;

 switch (VAR_2) {
 case 130:
  return FUNC_1(VAR_1);
 case 129:
  return FUNC_2(VAR_1);
 case 128:
  return FUNC_3(VAR_1);
 default:
  FUNC_0(&VAR_1->connection->bundle->dev,
   "unsupported request: %u\n", VAR_2);
  return -VAR_0;
 }
}
