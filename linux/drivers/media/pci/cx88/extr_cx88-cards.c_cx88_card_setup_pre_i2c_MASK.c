
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* input; } ;
struct cx88_core {int boardnr; TYPE_2__ board; } ;
struct TYPE_3__ {int gpio0; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx88_core*,int ,int ) ;
 int FUNC_1 (struct cx88_core*,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct cx88_core *VAR_4)
{
 switch (VAR_4->boardnr) {
 case 140:
  FUNC_4(VAR_0, 0x0000ef88);
  FUNC_6(1000);
  FUNC_2(VAR_0, 0x00000088);
  FUNC_6(50);
  FUNC_3(VAR_0, 0x00000088);
  FUNC_6(1000);
  break;

 case 136:
 case 137:
  FUNC_4(VAR_1, 0xcf7);
  FUNC_5(50);
  FUNC_4(VAR_1, 0xef5);
  FUNC_5(50);
  FUNC_4(VAR_1, 0xcf7);
  FUNC_7(10000, 20000);
  break;

 case 141:

  FUNC_3(VAR_0, 0x00001010);
  break;

 case 132:
 case 139:
 case 138:

  FUNC_4(VAR_0, VAR_4->board.input[0].gpio0);
  FUNC_6(1000);
  FUNC_2(VAR_0, 0x00000080);
  FUNC_6(50);
  FUNC_3(VAR_0, 0x00000080);
  FUNC_6(1000);
  break;

 case 130:
 case 134:
  FUNC_0(VAR_4, VAR_2, 0);
  break;

 case 133:
 case 131:
 case 129:
 case 128:
  FUNC_1(VAR_4,
             VAR_3, 0);
  break;

 case 135:
  FUNC_4(VAR_0, 0x00003230);
  FUNC_4(VAR_0, 0x00003210);
  FUNC_7(10000, 20000);
  FUNC_4(VAR_0, 0x00001230);
  break;
 }
}
