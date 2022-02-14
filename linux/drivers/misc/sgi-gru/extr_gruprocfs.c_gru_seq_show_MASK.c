
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct gru_state {int gs_active_contexts; int gs_blade_id; int gs_gid; int gs_dsr_map; int gs_cbr_map; } ;


 struct gru_state* FUNC_0 (long) ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_5, void *VAR_6)
{
 long VAR_7 = *(long *)VAR_6, VAR_8, VAR_9, VAR_10;
 struct gru_state *VAR_11 = FUNC_0(VAR_7);

 if (VAR_7 == 0) {
  FUNC_2(VAR_5, "#%5s%5s%7s%6s%6s%8s%6s%6s\n", "gid", "nid",
      "ctx", "cbr", "dsr", "ctx", "cbr", "dsr");
  FUNC_2(VAR_5, "#%5s%5s%7s%6s%6s%8s%6s%6s\n", "", "", "busy",
      "busy", "busy", "free", "free", "free");
 }
 if (VAR_11) {
  VAR_8 = VAR_3 - VAR_11->gs_active_contexts;
  VAR_9 = FUNC_1(VAR_11->gs_cbr_map) * VAR_0;
  VAR_10 = FUNC_1(VAR_11->gs_dsr_map) * VAR_1;
  FUNC_2(VAR_5, " %5d%5d%7ld%6ld%6ld%8ld%6ld%6ld\n",
      VAR_11->gs_gid, VAR_11->gs_blade_id, VAR_3 - VAR_8,
      VAR_2 - VAR_9, VAR_4 - VAR_10,
      VAR_8, VAR_9, VAR_10);
 }

 return 0;
}
