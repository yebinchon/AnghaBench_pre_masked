
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int,int ,int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(int VAR_11, u8 VAR_12)
{
 if (!VAR_9)
  return -VAR_0;

 FUNC_2(&VAR_10.lock);

 switch (VAR_11) {
 case 135:
  if (VAR_12)
   FUNC_1();
  else
   FUNC_0();
  break;
 case 133:
  FUNC_6(FUNC_5(0x90, VAR_3, VAR_12),
    VAR_1);
  break;
 case 131:
  FUNC_6(FUNC_5(0x90, VAR_5, VAR_12),
    VAR_1);
  break;
 case 130:
  FUNC_6(FUNC_5(0x90, VAR_6, VAR_12),
    VAR_1);
  break;
 case 132:
  FUNC_6(FUNC_5(0x90, VAR_4, VAR_12),
    VAR_1);
  break;
 case 128:
  FUNC_6(FUNC_5(0x90, VAR_8, VAR_12),
    VAR_1);
  break;
 case 129:
  FUNC_6(FUNC_5(0x90, VAR_7, VAR_12),
    VAR_1);
  break;
 case 134:
  FUNC_6(FUNC_5(0x90, VAR_2, VAR_12),
    VAR_1);
  break;
 default:
  FUNC_4("sony_pic_camera_command invalid: %d\n", VAR_11);
  break;
 }
 FUNC_3(&VAR_10.lock);
 return 0;
}
