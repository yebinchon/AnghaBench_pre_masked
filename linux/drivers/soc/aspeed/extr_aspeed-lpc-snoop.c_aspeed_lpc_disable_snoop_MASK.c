
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aspeed_lpc_snoop {TYPE_1__* chan; int regmap; } ;
struct TYPE_2__ {int miscdev; int fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct aspeed_lpc_snoop *VAR_5,
         int VAR_6)
{
 switch (VAR_6) {
 case 0:
  FUNC_2(VAR_5->regmap, VAR_0,
       VAR_3 | VAR_1,
       0);
  break;
 case 1:
  FUNC_2(VAR_5->regmap, VAR_0,
       VAR_4 | VAR_2,
       0);
  break;
 default:
  return;
 }

 FUNC_0(&VAR_5->chan[VAR_6].fifo);
 FUNC_1(&VAR_5->chan[VAR_6].miscdev);
}
