
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath10k {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ath10k*,char*,int) ;

__attribute__((used)) static inline s8 FUNC_2(struct ath10k *VAR_1, u8 VAR_2)
{
 static const u8 VAR_3[] = {1, 2, 5, 11, 6, 9, 12,
       18, 24, 36, 48, 54};
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  if (VAR_2 == VAR_3[VAR_4])
   return VAR_4;
 }

 FUNC_1(VAR_1, "Invalid legacy rate %hhd peer stats", VAR_2);
 return -VAR_0;
}
