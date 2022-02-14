
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int inactivity_timeout; void* q_low_mark; void* q_high_mark; void* tail_align; void* head_align; void* aggregation_timeout; } ;
struct cfhsi {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct nlattr *VAR_8[], struct cfhsi *VAR_9)
{
 int VAR_10;

 if (!VAR_8) {
  FUNC_1("no params data found\n");
  return;
 }

 VAR_10 = VAR_4;




 if (VAR_8[VAR_10]) {
  u32 VAR_11 = FUNC_0(VAR_8[VAR_10]);

  VAR_9->cfg.inactivity_timeout = VAR_11 * VAR_0 / 1000;
  if (VAR_9->cfg.inactivity_timeout == 0)
   VAR_9->cfg.inactivity_timeout = 1;
  else if (VAR_9->cfg.inactivity_timeout > VAR_1)
   VAR_9->cfg.inactivity_timeout = VAR_1;
 }

 VAR_10 = VAR_2;
 if (VAR_8[VAR_10])
  VAR_9->cfg.aggregation_timeout = FUNC_0(VAR_8[VAR_10]);

 VAR_10 = VAR_3;
 if (VAR_8[VAR_10])
  VAR_9->cfg.head_align = FUNC_0(VAR_8[VAR_10]);

 VAR_10 = VAR_7;
 if (VAR_8[VAR_10])
  VAR_9->cfg.tail_align = FUNC_0(VAR_8[VAR_10]);

 VAR_10 = VAR_5;
 if (VAR_8[VAR_10])
  VAR_9->cfg.q_high_mark = FUNC_0(VAR_8[VAR_10]);

 VAR_10 = VAR_6;
 if (VAR_8[VAR_10])
  VAR_9->cfg.q_low_mark = FUNC_0(VAR_8[VAR_10]);
}
