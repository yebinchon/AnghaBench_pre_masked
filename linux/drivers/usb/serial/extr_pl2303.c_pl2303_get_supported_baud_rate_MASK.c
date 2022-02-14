
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int speed_t ;


 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static speed_t FUNC_1(speed_t VAR_0)
{
 static const speed_t VAR_1[] = {
  75, 150, 300, 600, 1200, 1800, 2400, 3600, 4800, 7200, 9600,
  14400, 19200, 28800, 38400, 57600, 115200, 230400, 460800,
  614400, 921600, 1228800, 2457600, 3000000, 6000000
 };

 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
  if (VAR_1[VAR_2] > VAR_0)
   break;
 }

 if (VAR_2 == FUNC_0(VAR_1))
  VAR_0 = VAR_1[VAR_2 - 1];
 else if (VAR_2 > 0 && (VAR_1[VAR_2] - VAR_0) > (VAR_0 - VAR_1[VAR_2 - 1]))
  VAR_0 = VAR_1[VAR_2 - 1];
 else
  VAR_0 = VAR_1[VAR_2];

 return VAR_0;
}
