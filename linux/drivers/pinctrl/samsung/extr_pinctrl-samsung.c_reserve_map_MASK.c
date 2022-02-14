
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_map {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pinctrl_map* FUNC_0 (struct pinctrl_map*,int,int ) ;
 int FUNC_1 (struct pinctrl_map*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct pinctrl_map **VAR_3,
         unsigned *VAR_4, unsigned *VAR_5,
         unsigned VAR_6)
{
 unsigned VAR_7 = *VAR_4;
 unsigned VAR_8 = *VAR_5 + VAR_6;
 struct pinctrl_map *VAR_9;

 if (VAR_7 >= VAR_8)
  return 0;

 VAR_9 = FUNC_0(*VAR_3, sizeof(*VAR_9) * VAR_8, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(VAR_9 + VAR_7, 0, (VAR_8 - VAR_7) * sizeof(*VAR_9));

 *VAR_3 = VAR_9;
 *VAR_4 = VAR_8;

 return 0;
}
