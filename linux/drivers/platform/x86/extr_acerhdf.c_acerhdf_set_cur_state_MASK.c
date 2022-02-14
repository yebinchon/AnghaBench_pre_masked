
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct thermal_cooling_device *VAR_4,
     unsigned long VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;

 if (!VAR_3)
  return 0;

 VAR_8 = FUNC_2(&VAR_6);
 if (VAR_8) {
  FUNC_4("error reading temperature, hand off control to BIOS\n");
  goto err_out;
 }

 VAR_8 = FUNC_1(&VAR_7);
 if (VAR_8) {
  FUNC_4("error reading fan state, hand off control to BIOS\n");
  goto err_out;
 }

 if (VAR_5 == 0) {
  if (VAR_7 == VAR_0)
   FUNC_0(VAR_1);
 } else {
  if (VAR_7 == VAR_1)
   FUNC_0(VAR_0);
 }
 return 0;

err_out:
 FUNC_3();
 return -VAR_2;
}
