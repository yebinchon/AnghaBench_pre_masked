
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtw_dev*,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct rtw_dev *VAR_6, u32 VAR_7, u32 VAR_8,
       u32 VAR_9, u8 VAR_10)
{
 u32 VAR_11 = VAR_1 | VAR_2;

 if (!FUNC_0(VAR_6, VAR_5, VAR_2, 0))
  return -VAR_4;

 VAR_11 |= VAR_9 & VAR_3;
 if (!VAR_10)
  VAR_11 |= VAR_0;

 if (FUNC_1(VAR_6, VAR_7, VAR_8, VAR_11))
  return -VAR_4;

 return 0;
}
