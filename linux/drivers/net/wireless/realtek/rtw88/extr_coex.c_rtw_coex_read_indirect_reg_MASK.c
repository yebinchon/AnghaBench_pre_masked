
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (struct rtw_dev*,int ,int *) ;
 int FUNC_1 (struct rtw_dev*,char*) ;

u32 FUNC_2(struct rtw_dev *VAR_0, u16 VAR_1)
{
 u32 VAR_2;

 if (!FUNC_0(VAR_0, VAR_1, &VAR_2)) {
  FUNC_1(VAR_0, "failed to read indirect register\n");
  return 0;
 }

 return VAR_2;
}
