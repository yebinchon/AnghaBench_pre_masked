
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int ,char*) ;

__attribute__((used)) static bool FUNC_1(struct rtw_dev *VAR_1, u32 VAR_2)
{
 bool VAR_3 = 1;

 if ((VAR_2 >= 0x200 && (0x400 - VAR_2) > 0x64) ||
     (VAR_2 < 0x200 && VAR_2 > 0x64)) {
  VAR_3 = 0;
  FUNC_0(VAR_1, VAR_0, "[DACK] Error overflow\n");
 }

 return VAR_3;
}
