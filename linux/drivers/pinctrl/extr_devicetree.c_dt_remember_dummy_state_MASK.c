
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_map {int type; } ;
struct pinctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pinctrl*,char const*,int *,struct pinctrl_map*,int) ;
 struct pinctrl_map* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct pinctrl *VAR_3, const char *VAR_4)
{
 struct pinctrl_map *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_5->type = VAR_2;

 return FUNC_0(VAR_3, VAR_4, ((void*)0), VAR_5, 1);
}
