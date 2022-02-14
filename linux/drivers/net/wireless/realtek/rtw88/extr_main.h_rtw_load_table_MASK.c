
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_table {int (* parse ) (struct rtw_dev*,struct rtw_table const*) ;} ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (struct rtw_dev*,struct rtw_table const*) ;

__attribute__((used)) static inline void FUNC_1(struct rtw_dev *VAR_0,
      const struct rtw_table *VAR_1)
{
 (*VAR_1->parse)(VAR_0, VAR_1);
}
