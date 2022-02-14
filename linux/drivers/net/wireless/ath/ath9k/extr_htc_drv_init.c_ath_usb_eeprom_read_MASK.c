
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ ah; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,scalar_t__) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,int,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct ath_common *VAR_7, u32 VAR_8, u16 *VAR_9)
{
 struct ath_hw *VAR_10 = (struct ath_hw *) VAR_7->ah;

 (void)FUNC_1(VAR_10, VAR_1 + (VAR_8 << VAR_2));

 if (!FUNC_2(VAR_10,
      VAR_3,
      VAR_4 |
      VAR_5, 0,
      VAR_0))
  return 0;

 *VAR_9 = FUNC_0(FUNC_1(VAR_10, VAR_3),
     VAR_6);

 return 1;
}
