
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
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static u32 FUNC_4(struct ath_hw *VAR_4,
      struct ath9k_channel *VAR_5)
{
 u32 VAR_6;

 VAR_6 = VAR_3 | VAR_2;

 if (VAR_5 && FUNC_1(VAR_5))
  VAR_6 |= FUNC_3(0x1, VAR_0);
 else if (VAR_5 && FUNC_2(VAR_5))
  VAR_6 |= FUNC_3(0x2, VAR_0);

 if (VAR_5 && FUNC_0(VAR_5))
  VAR_6 |= FUNC_3(0xa, VAR_1);
 else
  VAR_6 |= FUNC_3(0xb, VAR_1);

 return VAR_6;
}
