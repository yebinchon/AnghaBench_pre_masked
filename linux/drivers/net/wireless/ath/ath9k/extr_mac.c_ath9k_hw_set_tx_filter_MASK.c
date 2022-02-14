
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (int ,int ,char*,int,int,int,int ) ;

void FUNC_5(struct ath_hw *VAR_7, u8 VAR_8, bool VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  VAR_11 = FUNC_2(VAR_9, VAR_1);
  VAR_11 |= FUNC_2(VAR_10, VAR_2);
  VAR_11 |= FUNC_2((VAR_8 / VAR_5),
        VAR_3);
  VAR_11 |= FUNC_0(VAR_8 % VAR_4);
  FUNC_4(FUNC_3(VAR_7), VAR_6,
   "DCU%d staid %d set %d txfilter %08x\n",
   VAR_10, VAR_8, VAR_9, VAR_11);
  FUNC_1(VAR_7, VAR_0, VAR_11);
 }
}
