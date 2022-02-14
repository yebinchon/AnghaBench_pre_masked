
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_dev {int dummy; } ;
struct rtw8822c_dpk_data {int pga; int limited_pga; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ,int ,int ,int) ;

__attribute__((used)) static u8 FUNC_1(struct rtw_dev *VAR_3,
        struct rtw8822c_dpk_data *VAR_4)
{
 u8 VAR_5 = VAR_4->pga;

 if (VAR_5 > 0xe)
  FUNC_0(VAR_3, VAR_4->path, VAR_1, VAR_0, 0xc);
 else if (VAR_5 > 0xb && VAR_5 < 0xf)
  FUNC_0(VAR_3, VAR_4->path, VAR_1, VAR_0, 0x0);
 else if (VAR_5 < 0xc)
  VAR_4->limited_pga = 1;

 return VAR_2;
}
