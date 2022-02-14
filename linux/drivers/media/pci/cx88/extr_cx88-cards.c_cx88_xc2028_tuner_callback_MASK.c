
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx88_core {int boardnr; int input; } ;
struct TYPE_2__ {int type; } ;
 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (struct cx88_core*,int,int) ;
 int FUNC_2 (struct cx88_core*,int,int) ;
 int FUNC_3 (struct cx88_core*,int,int) ;
 int FUNC_4 (struct cx88_core*,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct cx88_core *VAR_4,
          int VAR_5, int VAR_6)
{

 switch (VAR_4->boardnr) {
 case 135:
 case 137:
 case 136:
  return FUNC_3(VAR_4,
       VAR_5, VAR_6);
 case 134:
 case 133:
  return FUNC_2(VAR_4, VAR_5, VAR_6);
 case 138:
 case 139:
  return FUNC_1(VAR_4, VAR_5, VAR_6);
 case 131:
 case 132:
  return FUNC_4(VAR_4, VAR_5, VAR_6);
 }

 switch (VAR_5) {
 case 128:
  switch (FUNC_0(VAR_4->input).type) {
  case 130:
   FUNC_6(1, "setting GPIO to radio!\n");
   FUNC_5(VAR_1, 0x4ff);
   FUNC_7(250);
   FUNC_5(VAR_3, 0xff);
   FUNC_7(250);
   break;
  case 129:
  default:
   FUNC_6(1, "setting GPIO to TV!\n");
   break;
  }
  FUNC_5(VAR_2, 0x101010);
  FUNC_7(250);
  FUNC_5(VAR_2, 0x101000);
  FUNC_7(250);
  FUNC_5(VAR_2, 0x101010);
  FUNC_7(250);
  return 0;
 }
 return -VAR_0;
}
