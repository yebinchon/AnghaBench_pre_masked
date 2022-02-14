
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sd*,int,int) ;
 int FUNC_1 (struct sd*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_9, s32 VAR_10)
{
 if (VAR_9->sensor == VAR_7
  || VAR_9->sensor == VAR_8) {
  switch (VAR_10) {
  case 0:
   FUNC_1(VAR_9, VAR_2, 0, VAR_1);
   break;
  case 1:
   FUNC_1(VAR_9, VAR_2, VAR_1,
       VAR_1);
   FUNC_1(VAR_9, VAR_3, 0x08, 0x18);
   break;
  case 2:
   FUNC_1(VAR_9, VAR_2, VAR_1,
       VAR_1);
   FUNC_1(VAR_9, VAR_3, 0x00, 0x18);
   break;
  case 3:
   FUNC_1(VAR_9, VAR_2, VAR_1,
       VAR_1);
   FUNC_1(VAR_9, VAR_3, VAR_0,
       0x18);
   break;
  }
 } else {
  switch (VAR_10) {
  case 0:
   FUNC_1(VAR_9, 0x2d, 0x00, 0x04);
   FUNC_1(VAR_9, 0x2a, 0x00, 0x80);
   break;
  case 1:
   FUNC_1(VAR_9, 0x2d, 0x04, 0x04);
   FUNC_1(VAR_9, 0x2a, 0x80, 0x80);

   if (VAR_9->sensor == VAR_4 ||
       VAR_9->sensor == VAR_5 ||
       VAR_9->sensor == VAR_6)
    FUNC_0(VAR_9, 0x2b, 0x5e);
   else
    FUNC_0(VAR_9, 0x2b, 0xac);
   break;
  case 2:
   FUNC_1(VAR_9, 0x2d, 0x04, 0x04);
   if (VAR_9->sensor == VAR_4 ||
       VAR_9->sensor == VAR_5 ||
       VAR_9->sensor == VAR_6) {

    FUNC_1(VAR_9, 0x2a, 0x80, 0x80);
    FUNC_0(VAR_9, 0x2b, 0xa8);
   } else {

    FUNC_1(VAR_9, 0x2a, 0x00, 0x80);
   }
   break;
  }
 }
}
