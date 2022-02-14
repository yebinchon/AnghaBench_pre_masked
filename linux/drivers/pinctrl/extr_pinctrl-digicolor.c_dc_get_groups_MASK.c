
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct dc_pinmap {char** pin_names; } ;


 unsigned int VAR_0 ;
 struct dc_pinmap* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1, unsigned VAR_2,
    const char * const **VAR_3,
    unsigned * const VAR_4)
{
 struct dc_pinmap *VAR_5 = FUNC_0(VAR_1);

 *VAR_3 = VAR_5->pin_names;
 *VAR_4 = VAR_0;

 return 0;
}
