
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int ,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct rtw_dev *VAR_2, u16 VAR_3,
           const u8 *VAR_4, u32 VAR_5)
{
 u8 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6, VAR_5);
 FUNC_0(VAR_6);
 return VAR_7;
}
