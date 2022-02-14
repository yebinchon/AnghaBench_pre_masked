
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cudbg_tcam {int tid_hash_base; int routing_start; int clip_start; int filter_start; int server_start; int max_tid; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ) ;

void FUNC_4(struct adapter *VAR_15,
        struct cudbg_tcam *VAR_16)
{
 u32 VAR_17;


 VAR_17 = FUNC_3(VAR_15, VAR_14);
 VAR_16->tid_hash_base = VAR_17;


 VAR_17 = FUNC_3(VAR_15, VAR_12);
 VAR_16->routing_start = VAR_17;


 if (FUNC_2(VAR_15->params.chip))
  VAR_17 = FUNC_3(VAR_15, VAR_7);
 else
  VAR_17 = FUNC_3(VAR_15, VAR_8);
 VAR_16->clip_start = VAR_17;


 VAR_17 = FUNC_3(VAR_15, VAR_10);
 VAR_16->filter_start = VAR_17;


 VAR_17 = FUNC_3(VAR_15, VAR_13);
 VAR_16->server_start = VAR_17;


 VAR_17 = FUNC_3(VAR_15, VAR_9);
 if ((VAR_17 >> VAR_6) & 1) {
  VAR_17 = FUNC_3(VAR_15, VAR_11);
  if (FUNC_0(VAR_15->params.chip) > VAR_1) {
   VAR_16->max_tid = (VAR_17 & 0xFFFFF) +
            VAR_16->tid_hash_base;
  } else {
   VAR_17 = FUNC_1(VAR_17);
   VAR_17 = 1 << VAR_17;
   VAR_16->max_tid = VAR_17 +
            VAR_16->tid_hash_base;
  }
 } else {
  if (FUNC_2(VAR_15->params.chip))
   VAR_16->max_tid = (VAR_17 & VAR_0) ?
            VAR_4 :
            VAR_3;
  else
   VAR_16->max_tid = VAR_2;
 }

 if (FUNC_2(VAR_15->params.chip))
  VAR_16->max_tid += VAR_5;
}
