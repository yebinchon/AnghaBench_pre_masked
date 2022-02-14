
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_dev {int dummy; } ;
struct rtw8822c_dpk_data {int txbb; scalar_t__ limited_pga; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtw_dev*,int ,int ,int ,int) ;

__attribute__((used)) static u8 FUNC_1(struct rtw_dev *VAR_4,
       struct rtw8822c_dpk_data *VAR_5, u8 VAR_6)
{
 u8 VAR_7[] = {0x1f, 0};

 if (VAR_5->txbb == VAR_7[VAR_6])
  return VAR_2;

 if (VAR_6 == 1)
  VAR_5->txbb -= 2;
 else
  VAR_5->txbb += 3;

 FUNC_0(VAR_4, VAR_5->path, VAR_1, VAR_0, VAR_5->txbb);
 VAR_5->limited_pga = 0;

 return VAR_3;
}
