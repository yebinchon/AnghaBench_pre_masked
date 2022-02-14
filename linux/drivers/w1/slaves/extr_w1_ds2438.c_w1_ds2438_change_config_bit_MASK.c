
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_slave {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct w1_slave*) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_5, u8 VAR_6, u8 VAR_7)
{
 unsigned int VAR_8 = VAR_3;
 u8 VAR_9[3];
 u8 VAR_10;
 int VAR_11 = 0;

 while (VAR_8--) {
  if (FUNC_1(VAR_5))
   continue;
  VAR_9[0] = VAR_2;
  VAR_9[1] = 0x00;
  FUNC_2(VAR_5->master, VAR_9, 2);

  if (FUNC_1(VAR_5))
   continue;
  VAR_9[0] = VAR_1;
  VAR_9[1] = 0x00;
  FUNC_2(VAR_5->master, VAR_9, 2);


  VAR_10 = FUNC_0(VAR_5->master);


  if (VAR_7)
   VAR_7 = VAR_6;

  if ((VAR_10 & VAR_6) == VAR_7)
   return 0;
  else {

   VAR_10 ^= VAR_6;
   VAR_11 = 1;
  }
  break;
 }

 if (VAR_11) {
  VAR_8 = VAR_3;
  while (VAR_8--) {
   if (FUNC_1(VAR_5))
    continue;
   VAR_9[0] = VAR_4;
   VAR_9[1] = 0x00;
   VAR_9[2] = VAR_10;
   FUNC_2(VAR_5->master, VAR_9, 3);

   if (FUNC_1(VAR_5))
    continue;
   VAR_9[0] = VAR_0;
   VAR_9[1] = 0x00;
   FUNC_2(VAR_5->master, VAR_9, 2);

   return 0;
  }
 }
 return -1;
}
