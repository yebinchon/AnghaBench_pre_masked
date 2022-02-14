
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;

__attribute__((used)) static inline void
FUNC_3(struct rtw_dev *VAR_0, u32 VAR_1, u32 VAR_2, u8 VAR_3)
{
 u32 VAR_4;
 u8 VAR_5, VAR_6;

 VAR_2 &= 0xff;
 VAR_4 = FUNC_0(VAR_2);

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 VAR_6 = (VAR_5 & ~VAR_2) | ((VAR_3 << VAR_4) & VAR_2);
 FUNC_2(VAR_0, VAR_1, VAR_6);
}
