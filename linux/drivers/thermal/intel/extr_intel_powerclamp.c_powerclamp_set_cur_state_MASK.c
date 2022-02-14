
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 unsigned long VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct thermal_cooling_device *VAR_2,
     unsigned long VAR_3)
{
 int VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_3, 0UL,
    (unsigned long) (VAR_0-1));
 if (VAR_1 == 0 && VAR_3 > 0) {
  FUNC_2("Start idle injection to reduce power\n");
  VAR_1 = VAR_3;
  VAR_4 = FUNC_4();
  goto exit_set;
 } else if (VAR_1 > 0 && VAR_3 == 0) {
  FUNC_2("Stop forced idle injection\n");
  FUNC_1();
  VAR_1 = 0;
 } else {
  VAR_1 = VAR_3;

  FUNC_3();
 }

exit_set:
 return VAR_4;
}
