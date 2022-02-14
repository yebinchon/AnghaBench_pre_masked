
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,int ,scalar_t__*) ;
 int FUNC_2 (char*,int,unsigned long) ;

__attribute__((used)) static void FUNC_3(char *VAR_3, char *VAR_4, int VAR_5,
      unsigned long VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = VAR_0;
 int VAR_10[4] = {1, 3, 5, 7};
 u32 VAR_11;
 int VAR_12, VAR_13;

 VAR_7 = FUNC_1((u64)VAR_5 * VAR_6, VAR_1,
       &VAR_11);
 if (VAR_11)
  VAR_7++;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10); VAR_12++)
  for (VAR_13 = 0; VAR_13 <= VAR_2; VAR_13++) {
   VAR_8 = VAR_10[VAR_12] * (2 << VAR_13);
   if (VAR_8 >= VAR_7) {
    if (VAR_8 < VAR_9) {
     VAR_9 = VAR_8;
     *VAR_3 = VAR_12;
     *VAR_4 = VAR_13;
    }
    break;
   }
  }

 if (VAR_9 == VAR_0) {
  FUNC_2("Cannot find correct scale values for %dns delay at clkrate %ld, using max prescaler value",
   VAR_5, VAR_6);
  *VAR_3 = FUNC_0(VAR_10) - 1;
  *VAR_4 = VAR_2;
 }
}
