
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_state {char const* name; int node; int settings; } ;
struct pinctrl {int states; } ;


 int VAR_0 ;
 struct pinctrl_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct pinctrl_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct pinctrl_state *FUNC_4(struct pinctrl *VAR_2,
       const char *VAR_3)
{
 struct pinctrl_state *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->name = VAR_3;
 FUNC_1(&VAR_4->settings);

 FUNC_3(&VAR_4->node, &VAR_2->states);

 return VAR_4;
}
