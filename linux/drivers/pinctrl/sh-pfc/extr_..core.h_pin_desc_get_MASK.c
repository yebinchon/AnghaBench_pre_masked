
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int pin_desc_tree; } ;
struct pin_desc {int dummy; } ;


 struct pin_desc* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static inline struct pin_desc *FUNC_1(struct pinctrl_dev *VAR_0,
         unsigned int VAR_1)
{
 return FUNC_0(&VAR_0->pin_desc_tree, VAR_1);
}
