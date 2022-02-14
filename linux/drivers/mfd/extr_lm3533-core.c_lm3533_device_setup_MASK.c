
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3533_platform_data {int boost_ovp; int boost_freq; } ;
struct lm3533 {int dummy; } ;


 int FUNC_0 (struct lm3533*,int ) ;
 int FUNC_1 (struct lm3533*,int ) ;

__attribute__((used)) static int FUNC_2(struct lm3533 *VAR_0,
     struct lm3533_platform_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->boost_freq);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1->boost_ovp);
}
