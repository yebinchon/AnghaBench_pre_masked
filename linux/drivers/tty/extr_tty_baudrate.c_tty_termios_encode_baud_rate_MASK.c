
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {int c_ispeed; int c_ospeed; int c_cflag; } ;
typedef int speed_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

void FUNC_1(struct ktermios *VAR_6,
      speed_t VAR_7, speed_t VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = -1, VAR_11 = -1;
 int VAR_12 = VAR_7/50, VAR_13 = VAR_8/50;
 int VAR_14 = 0;

 if (VAR_8 == 0)
  VAR_7 = 0;

 VAR_6->c_ispeed = VAR_7;
 VAR_6->c_ospeed = VAR_8;
 VAR_6->c_cflag &= ~VAR_1;
 do {
  if (VAR_8 - VAR_13 <= VAR_4[VAR_9] &&
      VAR_8 + VAR_13 >= VAR_4[VAR_9]) {
   VAR_6->c_cflag |= VAR_3[VAR_9];
   VAR_11 = VAR_9;
  }
  if (VAR_7 - VAR_12 <= VAR_4[VAR_9] &&
      VAR_7 + VAR_12 >= VAR_4[VAR_9]) {


   if (VAR_11 == VAR_9 && !VAR_14)
    VAR_10 = VAR_9;






  }
 } while (++VAR_9 < VAR_5);
 if (VAR_10 == -1 || VAR_11 == -1)
  FUNC_0("tty: Unable to return correct speed data as your architecture needs updating.\n");

}
