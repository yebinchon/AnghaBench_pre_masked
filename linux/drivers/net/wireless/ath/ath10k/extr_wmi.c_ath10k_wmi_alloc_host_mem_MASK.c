
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_0, u32 VAR_1,
         u32 VAR_2, u32 VAR_3)
{
 int VAR_4;

 while (VAR_2) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_2 -= VAR_4;
 }

 return 0;
}
