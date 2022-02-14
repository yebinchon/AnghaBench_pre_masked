
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct ath_hw {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,int ,int ,size_t) ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_6,
    u32 VAR_7,
    int VAR_8,
    u8 *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;

 FUNC_0(VAR_6, VAR_1,
   VAR_4, 3);
 FUNC_0(VAR_6, VAR_2,
   VAR_4, 3);

 FUNC_0(VAR_6, VAR_3,
   VAR_5, VAR_7);

 VAR_11 = VAR_8;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  if (VAR_10 < VAR_11)
   VAR_9[VAR_10] = 0x0;
  else
   VAR_9[VAR_10] = 0xFF;
}
