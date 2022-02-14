
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int clock_speed; } ;
struct TYPE_11__ {int port_num; TYPE_2__ params; TYPE_1__** port_array; } ;
struct TYPE_9__ {int ctrlreg_value; } ;
typedef TYPE_3__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_4(SLMP_INFO *VAR_5, int VAR_6)
{
 if (VAR_6) {



  FUNC_3(VAR_5, VAR_2, (unsigned char)(FUNC_0(VAR_5, VAR_2) | (VAR_1 + VAR_0)));


  VAR_5->port_array[0]->ctrlreg_value |= (VAR_0 << (VAR_5->port_num * 2));
  FUNC_2(VAR_5);






  FUNC_3(VAR_5, VAR_3, 0x40);
  FUNC_3(VAR_5, VAR_4, 0x40);

 } else {



  FUNC_3(VAR_5, VAR_2, (unsigned char)(FUNC_0(VAR_5, VAR_2) & ~(VAR_1 + VAR_0)));






  FUNC_3(VAR_5, VAR_3, 0x00);
  FUNC_3(VAR_5, VAR_4, 0x00);
 }


 if (VAR_5->params.clock_speed)
  FUNC_1(VAR_5, VAR_5->params.clock_speed);
 else
  FUNC_1(VAR_5, 3686400);
}
