
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,int,int*) ;
 int FUNC_1 (struct ath10k*,char*,...) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_5)
{
 u32 VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9;


 VAR_6 = VAR_3 + VAR_0 * 4;
 VAR_8 = VAR_4 + VAR_1;
 VAR_7 = 0;

 while (FUNC_2(VAR_4, VAR_8) && !VAR_7) {





  VAR_9 = FUNC_0(VAR_5, VAR_6, &VAR_7);
  if (VAR_9) {
   FUNC_1(VAR_5,
        "unable to decrement the command credit count register: %d\n",
        VAR_9);
   return VAR_9;
  }




  VAR_7 &= 0xFF;
 }

 if (!VAR_7) {
  FUNC_1(VAR_5, "bmi communication timeout\n");
  return -VAR_2;
 }

 return 0;
}
