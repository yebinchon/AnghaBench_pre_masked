
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_irq_data {int dummy; } ;
struct wm8350 {int irq_base; } ;


 struct wm8350_irq_data* VAR_0 ;

__attribute__((used)) static inline struct wm8350_irq_data *FUNC_0(struct wm8350 *VAR_1,
       int VAR_2)
{
 return &VAR_0[VAR_2 - VAR_1->irq_base];
}
