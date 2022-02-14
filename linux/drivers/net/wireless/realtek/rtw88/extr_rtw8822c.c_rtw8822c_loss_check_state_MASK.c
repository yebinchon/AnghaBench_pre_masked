
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_dev {int dummy; } ;
struct rtw8822c_dpk_data {int path; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct rtw_dev *VAR_1,
        struct rtw8822c_dpk_data *VAR_2)
{
 u8 VAR_3 = VAR_2->path;
 u8 VAR_4;

 FUNC_1(VAR_1, VAR_3, VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_3);

 return VAR_4;
}
