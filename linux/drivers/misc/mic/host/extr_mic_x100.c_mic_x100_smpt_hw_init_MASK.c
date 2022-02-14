
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_smpt_hw_info {int num_reg; int page_shift; unsigned long long page_size; int base; } ;
struct mic_device {TYPE_1__* smpt; } ;
struct TYPE_2__ {struct mic_smpt_hw_info info; } ;



__attribute__((used)) static void FUNC_0(struct mic_device *VAR_0)
{
 struct mic_smpt_hw_info *VAR_1 = &VAR_0->smpt->info;

 VAR_1->num_reg = 32;
 VAR_1->page_shift = 34;
 VAR_1->page_size = (1ULL << VAR_1->page_shift);
 VAR_1->base = 0x8000000000ULL;
}
