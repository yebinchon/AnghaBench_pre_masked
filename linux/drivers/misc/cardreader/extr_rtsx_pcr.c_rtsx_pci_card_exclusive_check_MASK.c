
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int flags; unsigned int const card_exist; } ;


 int VAR_0 ;

 int VAR_1 ;




int FUNC_0(struct rtsx_pcr *VAR_2, int VAR_3)
{
 static const unsigned int VAR_4[] = {
  [129] = 128,
  [130] = 131
 };

 if (!(VAR_2->flags & VAR_1)) {



  if (VAR_2->card_exist & (~VAR_4[VAR_3]))
   return -VAR_0;
 }

 return 0;
}
