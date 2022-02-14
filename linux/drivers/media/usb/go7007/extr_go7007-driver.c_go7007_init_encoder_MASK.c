
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct go7007 {int board_id; TYPE_1__* board_info; } ;
struct TYPE_2__ {int audio_flags; } ;


 int VAR_0 ;



 int FUNC_0 (struct go7007*,int,int) ;

__attribute__((used)) static int FUNC_1(struct go7007 *VAR_1)
{
 if (VAR_1->board_info->audio_flags & VAR_0) {
  FUNC_0(VAR_1, 0x1000, 0x0811);
  FUNC_0(VAR_1, 0x1000, 0x0c11);
 }
 switch (VAR_1->board_id) {
 case 128:

  FUNC_0(VAR_1, 0x3c82, 0x0001);
  FUNC_0(VAR_1, 0x3c80, 0x00fe);
  break;
 case 130:

  FUNC_0(VAR_1, 0x3c82, 0x0000);
  FUNC_0(VAR_1, 0x3c80, 0x00df);
  break;
 case 129:



  FUNC_0(VAR_1, 0x3c82, 0x000d);
  FUNC_0(VAR_1, 0x3c80, 0x00f2);
  break;
 }
 return 0;
}
