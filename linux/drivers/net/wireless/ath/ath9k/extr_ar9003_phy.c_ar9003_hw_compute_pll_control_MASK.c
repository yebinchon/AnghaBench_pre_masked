
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static u32 FUNC_3(struct ath_hw *VAR_3,
      struct ath9k_channel *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_2(0x5, VAR_2);

 if (VAR_4 && FUNC_0(VAR_4))
  VAR_5 |= FUNC_2(0x1, VAR_0);
 else if (VAR_4 && FUNC_1(VAR_4))
  VAR_5 |= FUNC_2(0x2, VAR_0);

 VAR_5 |= FUNC_2(0x2c, VAR_1);

 return VAR_5;
}
