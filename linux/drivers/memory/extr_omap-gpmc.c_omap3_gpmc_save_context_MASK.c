
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cs_context; void* prefetch_control; void* prefetch_config2; void* prefetch_config1; void* config; void* timeout_ctrl; void* irqenable; void* sysconfig; } ;
struct TYPE_3__ {void* config7; void* config6; void* config5; void* config4; void* config3; void* config2; void* config1; scalar_t__ is_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_16 ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;

void FUNC_3(void)
{
 int VAR_17;

 if (!VAR_14)
  return;

 VAR_15.sysconfig = FUNC_2(VAR_12);
 VAR_15.irqenable = FUNC_2(VAR_8);
 VAR_15.timeout_ctrl = FUNC_2(VAR_13);
 VAR_15.config = FUNC_2(VAR_0);
 VAR_15.prefetch_config1 = FUNC_2(VAR_9);
 VAR_15.prefetch_config2 = FUNC_2(VAR_10);
 VAR_15.prefetch_control = FUNC_2(VAR_11);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_15.cs_context[VAR_17].is_valid = FUNC_0(VAR_17);
  if (VAR_15.cs_context[VAR_17].is_valid) {
   VAR_15.cs_context[VAR_17].config1 =
    FUNC_1(VAR_17, VAR_1);
   VAR_15.cs_context[VAR_17].config2 =
    FUNC_1(VAR_17, VAR_2);
   VAR_15.cs_context[VAR_17].config3 =
    FUNC_1(VAR_17, VAR_3);
   VAR_15.cs_context[VAR_17].config4 =
    FUNC_1(VAR_17, VAR_4);
   VAR_15.cs_context[VAR_17].config5 =
    FUNC_1(VAR_17, VAR_5);
   VAR_15.cs_context[VAR_17].config6 =
    FUNC_1(VAR_17, VAR_6);
   VAR_15.cs_context[VAR_17].config7 =
    FUNC_1(VAR_17, VAR_7);
  }
 }
}
