
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 5;

 while (VAR_4 < VAR_2) {
  if (FUNC_0(VAR_3)) {
   if (VAR_4 > VAR_1)
    FUNC_1(VAR_3, "device wakeup took %d ms which is unusually long, otherwise it works normally.\n",
         VAR_4 / 1000);
   return 0;
  }

  FUNC_2(VAR_5);
  VAR_4 += VAR_5;

  if (VAR_5 < 50)
   VAR_5 += 5;
 }

 return -VAR_0;
}
