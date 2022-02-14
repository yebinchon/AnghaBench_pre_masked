
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ,int ,char*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct ath_hw *VAR_5, unsigned int VAR_6)
{
 u32 VAR_7, VAR_8;
 u8 VAR_9, VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (VAR_6 < 6)
   VAR_7 = FUNC_0(VAR_5, VAR_0);
  else
   VAR_7 = FUNC_0(VAR_5, VAR_1);

  VAR_8 = FUNC_0(VAR_5, VAR_2);

  VAR_9 = (VAR_7 >> (5 * VAR_6)) & 0x1f;
  VAR_10 = VAR_8 & 0x3;

  if ((VAR_9 != 0x6) || (VAR_10 != 0x1))
   return 0;
 }

 FUNC_2(FUNC_1(VAR_5), VAR_4,
  "MAC Hang signature found for queue: %d\n", VAR_6);

 return 1;
}
