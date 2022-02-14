
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtw_sec_desc {int default_key_search; } ;
struct rtw_dev {struct rtw_sec_desc sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ,int) ;

void FUNC_2(struct rtw_dev *VAR_9)
{
 struct rtw_sec_desc *VAR_10 = &VAR_9->sec;
 u16 VAR_11;
 u16 VAR_12;


 VAR_10->default_key_search = 1;

 VAR_11 = FUNC_0(VAR_9, VAR_0);
 VAR_11 |= VAR_2;
 FUNC_1(VAR_9, VAR_0, VAR_11);

 VAR_12 = FUNC_0(VAR_9, VAR_1);

 VAR_12 |= VAR_7 | VAR_4;
 if (VAR_10->default_key_search)
  VAR_12 |= VAR_8 | VAR_5 |
         VAR_6 | VAR_3;

 FUNC_1(VAR_9, VAR_1, VAR_12);
}
