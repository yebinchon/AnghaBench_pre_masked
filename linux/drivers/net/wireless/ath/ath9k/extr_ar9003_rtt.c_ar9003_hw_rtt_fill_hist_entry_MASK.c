
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ath_hw *VAR_6, u8 VAR_7, u32 VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_5(0, VAR_0) |
       FUNC_5(0, VAR_3) |
       FUNC_5(VAR_8, VAR_1);

 FUNC_4(VAR_6, FUNC_1(VAR_7), VAR_9);
 FUNC_7(1);

 VAR_9 |= FUNC_5(1, VAR_0);
 FUNC_4(VAR_6, FUNC_1(VAR_7), VAR_9);
 FUNC_7(1);

 if (!FUNC_6(VAR_6, FUNC_1(VAR_7),
      VAR_0, 0,
      VAR_4))
  return VAR_5;

 VAR_9 = FUNC_2(FUNC_3(VAR_6, FUNC_0(VAR_7)),
   VAR_2);


 return VAR_9;
}
