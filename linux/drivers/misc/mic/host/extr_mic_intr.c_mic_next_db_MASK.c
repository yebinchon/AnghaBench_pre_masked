
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int next_avail_src; } ;
struct mic_device {TYPE_2__ irq_info; TYPE_1__* intr_info; } ;
struct TYPE_3__ {int* intr_len; } ;


 size_t VAR_0 ;

int FUNC_0(struct mic_device *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->irq_info.next_avail_src %
  VAR_1->intr_info->intr_len[VAR_0];
 VAR_1->irq_info.next_avail_src++;
 return VAR_2;
}
