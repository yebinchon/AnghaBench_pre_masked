
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ahd_softc {size_t msgout_len; size_t* msgout_buf; size_t msgout_index; } ;
typedef scalar_t__ ahd_msgtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_0(struct ahd_softc *VAR_8, ahd_msgtype VAR_9, u_int VAR_10, int VAR_11)
{
 int VAR_12;
 u_int VAR_13;

 VAR_12 = VAR_2;
 VAR_13 = 0;

 while (VAR_13 < VAR_8->msgout_len) {
  if (VAR_8->msgout_buf[VAR_13] == VAR_3) {
   u_int VAR_14;

   VAR_14 = VAR_13 + 1 + VAR_8->msgout_buf[VAR_13 + 1];
   if (VAR_8->msgout_buf[VAR_13+2] == VAR_10
    && VAR_9 == VAR_1) {

    if (VAR_11) {
     if (VAR_8->msgout_index > VAR_14)
      VAR_12 = VAR_7;
    } else if (VAR_8->msgout_index > VAR_13)
     VAR_12 = VAR_7;
   }
   VAR_13 = VAR_14;
  } else if (VAR_8->msgout_buf[VAR_13] >= VAR_6
   && VAR_8->msgout_buf[VAR_13] <= VAR_5) {


   VAR_13 += 2;
  } else {

   if (VAR_9 == VAR_0
    && VAR_8->msgout_index > VAR_13
    && (VAR_8->msgout_buf[VAR_13] == VAR_10
     || ((VAR_8->msgout_buf[VAR_13] & VAR_4) != 0
      && VAR_10 == VAR_4)))
    VAR_12 = VAR_7;
   VAR_13++;
  }

  if (VAR_12)
   break;
 }
 return (VAR_12);
}
