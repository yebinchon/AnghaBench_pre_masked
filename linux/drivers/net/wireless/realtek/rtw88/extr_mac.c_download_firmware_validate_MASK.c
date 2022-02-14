
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtw_dev*,int ,int ,int ) ;
 int FUNC_1 (struct rtw_dev*,char*) ;
 int FUNC_2 (struct rtw_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct rtw_dev *VAR_7)
{
 u32 VAR_8;

 if (!FUNC_0(VAR_7, VAR_6, VAR_3, VAR_2)) {
  VAR_8 = FUNC_2(VAR_7, VAR_5) & VAR_1;
  if (VAR_8 == VAR_4)
   FUNC_1(VAR_7, "invalid fw key\n");
  return -VAR_0;
 }

 return 0;
}
