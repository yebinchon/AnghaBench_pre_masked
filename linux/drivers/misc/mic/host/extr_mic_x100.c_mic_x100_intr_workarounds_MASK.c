
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_mw {int dummy; } ;
struct mic_device {scalar_t__ stepping; TYPE_1__* intr_ops; struct mic_mw mmio; } ;
struct TYPE_2__ {int (* enable_interrupts ) (struct mic_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mic_mw*,int,scalar_t__) ;
 int FUNC_1 (struct mic_device*) ;

__attribute__((used)) static void FUNC_2(struct mic_device *VAR_4)
{
 struct mic_mw *VAR_5 = &VAR_4->mmio;


 if (VAR_0 == VAR_4->stepping)
  FUNC_0(VAR_5, 1, VAR_2 +
   VAR_3);

 if (VAR_4->stepping >= VAR_1)
  VAR_4->intr_ops->enable_interrupts(VAR_4);
}
