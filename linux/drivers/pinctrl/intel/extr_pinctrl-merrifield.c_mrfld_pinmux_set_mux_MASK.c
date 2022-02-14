
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct mrfld_pinctrl {int lock; struct intel_pingroup* groups; } ;
struct intel_pingroup {int mode; unsigned int npins; int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mrfld_pinctrl*,int ) ;
 int FUNC_1 (struct mrfld_pinctrl*,int ,int,int) ;
 struct mrfld_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5)
{
 struct mrfld_pinctrl *VAR_6 = FUNC_2(VAR_3);
 const struct intel_pingroup *VAR_7 = &VAR_6->groups[VAR_5];
 u32 VAR_8 = VAR_7->mode << VAR_1;
 u32 VAR_9 = VAR_0;
 unsigned long VAR_10;
 unsigned int VAR_11;





 for (VAR_11 = 0; VAR_11 < VAR_7->npins; VAR_11++) {
  if (!FUNC_0(VAR_6, VAR_7->pins[VAR_11]))
   return -VAR_2;
 }


 FUNC_3(&VAR_6->lock, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_7->npins; VAR_11++)
  FUNC_1(VAR_6, VAR_7->pins[VAR_11], VAR_8, VAR_9);
 FUNC_4(&VAR_6->lock, VAR_10);

 return 0;
}
