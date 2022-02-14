
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_state {int dummy; } ;
struct pinctrl {int dev; } ;


 int VAR_0 ;
 struct pinctrl_state* FUNC_0 (int ) ;
 struct pinctrl_state* FUNC_1 (struct pinctrl*,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 struct pinctrl_state* FUNC_3 (struct pinctrl*,char const*) ;
 scalar_t__ VAR_1 ;

struct pinctrl_state *FUNC_4(struct pinctrl *VAR_2,
       const char *VAR_3)
{
 struct pinctrl_state *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_4) {
  if (VAR_1) {

   FUNC_2(VAR_2->dev, "using pinctrl dummy state (%s)\n",
    VAR_3);
   VAR_4 = FUNC_1(VAR_2, VAR_3);
  } else
   VAR_4 = FUNC_0(-VAR_0);
 }

 return VAR_4;
}
