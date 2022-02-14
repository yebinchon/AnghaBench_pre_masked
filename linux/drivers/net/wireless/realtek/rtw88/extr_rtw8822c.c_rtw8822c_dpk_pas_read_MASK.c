
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtw_dev*,int ,int ) ;
 int FUNC_2 (struct rtw_dev*,int,int) ;
 int FUNC_3 (struct rtw_dev*,int,int,int) ;

__attribute__((used)) static u32 FUNC_4(struct rtw_dev *VAR_5, u8 VAR_6)
{
 u32 VAR_7, VAR_8;

 FUNC_2(VAR_5, VAR_2, 0x8 | (VAR_6 << 1));
 FUNC_3(VAR_5, 0x1b48, FUNC_0(14), 0x0);
 FUNC_2(VAR_5, VAR_3, 0x00060001);
 FUNC_2(VAR_5, 0x1b4c, 0x00000000);
 FUNC_2(VAR_5, 0x1b4c, 0x00080000);

 VAR_8 = FUNC_1(VAR_5, VAR_4, VAR_0);
 VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_1);

 if (VAR_7 & FUNC_0(15))
  VAR_7 = 0x10000 - VAR_7;
 if (VAR_8 & FUNC_0(15))
  VAR_8 = 0x10000 - VAR_8;

 FUNC_2(VAR_5, 0x1b4c, 0x00000000);

 return VAR_7 * VAR_7 + VAR_8 * VAR_8;
}
