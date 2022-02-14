
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
 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int*,int,int,int) ;

__attribute__((used)) static bool FUNC_2(struct ath_hw *VAR_5, bool VAR_6,
       u8 VAR_7, u32 VAR_8)
{
 u32 VAR_9[4] = {0, 0, 0, 0};

 FUNC_0(VAR_9, VAR_1,
    VAR_2);

 *(((u8 *)VAR_9) + VAR_3) = VAR_7;
 *(((u8 *)VAR_9) + VAR_4 + 0) = VAR_8 & 0xFF;
 *(((u8 *)VAR_9) + VAR_4 + 1) = (VAR_8 >> 8) & 0xFF;
 *(((u8 *)VAR_9) + VAR_4 + 2) = (VAR_8 >> 16) & 0xFF;
 *(((u8 *)VAR_9) + VAR_4 + 3) = (VAR_8 >> 24) & 0xFF;

 return FUNC_1(VAR_5, VAR_0, 0, VAR_9, 16,
           VAR_6, 1);
}
