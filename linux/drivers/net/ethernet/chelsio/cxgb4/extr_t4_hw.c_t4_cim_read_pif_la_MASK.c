
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int) ;

void FUNC_6(struct adapter *VAR_8, u32 *VAR_9, u32 *VAR_10,
   unsigned int *VAR_11,
   unsigned int *VAR_12)
{
 int VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_15 = FUNC_4(VAR_8, VAR_0);
 if (VAR_15 & VAR_5)
  FUNC_5(VAR_8, VAR_0, VAR_15 ^ VAR_5);

 VAR_16 = FUNC_4(VAR_8, VAR_1);
 VAR_17 = FUNC_3(VAR_16);
 VAR_18 = FUNC_1(VAR_16);
 if (VAR_11)
  *VAR_11 = VAR_17;
 if (VAR_12)
  *VAR_12 = VAR_18;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
   FUNC_5(VAR_8, VAR_0, FUNC_2(VAR_17) |
         FUNC_0(VAR_18));
   *VAR_9++ = FUNC_4(VAR_8, VAR_4);
   *VAR_10++ = FUNC_4(VAR_8, VAR_3);
   VAR_17++;
   VAR_18++;
  }
  VAR_17 = (VAR_17 + 2) & VAR_7;
  VAR_18 = (VAR_18 + 2) & VAR_6;
 }
 FUNC_5(VAR_8, VAR_0, VAR_15);
}
