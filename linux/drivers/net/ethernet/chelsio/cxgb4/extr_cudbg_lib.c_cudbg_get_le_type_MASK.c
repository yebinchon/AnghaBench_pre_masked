
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cudbg_tcam {scalar_t__ server_start; scalar_t__ filter_start; scalar_t__ clip_start; scalar_t__ routing_start; scalar_t__ tid_hash_base; scalar_t__ max_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(u32 VAR_8, struct cudbg_tcam VAR_9)
{
 int VAR_10 = VAR_7;

 if (VAR_8 < VAR_9.server_start)
  VAR_10 = VAR_3;
 else if (VAR_8 < VAR_9.filter_start)
  VAR_10 = VAR_6;
 else if (VAR_8 < VAR_9.clip_start)
  VAR_10 = VAR_4;
 else if (VAR_8 < VAR_9.routing_start)
  VAR_10 = VAR_2;
 else if (VAR_8 < VAR_9.tid_hash_base)
  VAR_10 = VAR_5;
 else if (VAR_8 < VAR_9.max_tid)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_1;

 return VAR_10;
}
