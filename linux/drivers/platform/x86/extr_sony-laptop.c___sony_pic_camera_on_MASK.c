
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int camera_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int,int ,int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_5, VAR_6, VAR_7;

 if (!VAR_3) {
  FUNC_2("camera control not enabled\n");
  return -VAR_0;
 }

 if (VAR_4.camera_power)
  return 0;

 for (VAR_6 = 5; VAR_6 > 0; VAR_6--) {

  for (VAR_7 = 0; VAR_7 < 100 && FUNC_4(0x91, 0x1); VAR_7++)
   FUNC_1(10);
  FUNC_3(0x93);

  for (VAR_5 = 400; VAR_5 > 0; VAR_5--) {
   if (FUNC_0())
    break;
   FUNC_1(10);
  }
  if (VAR_5)
   break;
 }

 if (VAR_6 == 0) {
  FUNC_2("failed to power on camera\n");
  return -VAR_0;
 }

 FUNC_6(FUNC_5(0x90, VAR_2,
    0x5a),
   VAR_1);

 VAR_4.camera_power = 1;
 return 0;
}
