
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct msdc_host {scalar_t__ base; scalar_t__ top_base; TYPE_1__* dev_comp; } ;
struct TYPE_2__ {scalar_t__ pad_tune_reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct msdc_host *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_3->dev_comp->pad_tune_reg;

 if (VAR_3->top_base)
  FUNC_0(VAR_3->top_base + VAR_0, VAR_2,
         VAR_4);
 else
  FUNC_0(VAR_3->base + VAR_5, VAR_1,
         VAR_4);
}
