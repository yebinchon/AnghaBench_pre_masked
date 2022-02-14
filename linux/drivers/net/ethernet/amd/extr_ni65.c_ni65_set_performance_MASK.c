
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {size_t cardno; } ;
struct TYPE_2__ {int config; } ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (short,scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct priv *VAR_10)
{
 FUNC_2(VAR_2 | VAR_1,VAR_0);

 if( !(VAR_6[VAR_10->cardno].config & 0x02) )
  return;

 FUNC_1(80,VAR_5+VAR_3);
 if(FUNC_0(VAR_5+VAR_3) != 80)
  return;

 FUNC_2( (VAR_7 & 0x3fff) ,80);
 FUNC_1(0,VAR_5+VAR_3);
 FUNC_1((short)VAR_8,VAR_5+VAR_4);
 FUNC_1(1,VAR_5+VAR_3);
 FUNC_1((short)VAR_9,VAR_5+VAR_4);

 FUNC_1(VAR_0,VAR_5+VAR_3);
}
