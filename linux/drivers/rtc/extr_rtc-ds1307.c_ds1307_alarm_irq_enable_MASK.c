
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1307 {int regmap; int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ds1307* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, unsigned int VAR_5)
{
 struct ds1307 *VAR_6 = FUNC_0(VAR_4);

 if (!FUNC_2(VAR_3, &VAR_6->flags))
  return -VAR_2;

 return FUNC_1(VAR_6->regmap, VAR_1,
      VAR_0,
      VAR_5 ? VAR_0 : 0);
}
