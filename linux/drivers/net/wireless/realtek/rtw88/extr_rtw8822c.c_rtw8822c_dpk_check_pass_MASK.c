
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct rtw_dev *VAR_0, bool VAR_1,
        u32 VAR_2, u8 VAR_3)
{
 bool VAR_4;

 if (!VAR_1) {
  if (FUNC_0(VAR_0, VAR_3))
   VAR_4 = 1;
  else
   VAR_4 = 0;
 } else {
  VAR_4 = 0;
 }

 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);

 return VAR_4;
}
