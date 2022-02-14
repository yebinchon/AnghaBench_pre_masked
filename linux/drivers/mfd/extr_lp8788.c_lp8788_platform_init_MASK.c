
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_platform_data {int (* init_func ) (struct lp8788*) ;} ;
struct lp8788 {struct lp8788_platform_data* pdata; } ;


 int FUNC_0 (struct lp8788*) ;

__attribute__((used)) static int FUNC_1(struct lp8788 *VAR_0)
{
 struct lp8788_platform_data *VAR_1 = VAR_0->pdata;

 return (VAR_1 && VAR_1->init_func) ? VAR_1->init_func(VAR_0) : 0;
}
