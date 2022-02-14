
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ camera_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 if (!VAR_4) {
  FUNC_0("camera control not enabled\n");
  return -VAR_0;
 }

 FUNC_3(FUNC_2(0x90, VAR_3,
    VAR_2),
   VAR_1);

 if (VAR_5.camera_power) {
  FUNC_1(0x91, 0);
  VAR_5.camera_power = 0;
 }
 return 0;
}
