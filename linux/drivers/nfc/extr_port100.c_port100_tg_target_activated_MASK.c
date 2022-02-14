
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct port100 {int cmd_type; TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static bool FUNC_1(struct port100 *VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 switch (VAR_2->cmd_type) {
 case 129:
  VAR_4 = VAR_0;
  break;
 case 128:
  VAR_4 = VAR_0 |
         VAR_1;
  break;
 default:
  FUNC_0(&VAR_2->interface->dev, "Unknown command type\n");
  return 0;
 }

 return ((VAR_3 & VAR_4) == VAR_4);
}
