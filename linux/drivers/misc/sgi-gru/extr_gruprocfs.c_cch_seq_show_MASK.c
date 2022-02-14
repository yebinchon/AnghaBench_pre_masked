
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct gru_thread_state {int ts_cbr_au_count; size_t ts_user_options; int ts_tgid_owner; TYPE_2__* ts_gms; } ;
struct gru_state {int gs_blade_id; int gs_gid; struct gru_thread_state** gs_gts; } ;
struct TYPE_4__ {TYPE_1__* ms_asids; } ;
struct TYPE_3__ {int mt_asid; } ;


 struct gru_state* FUNC_0 (long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (struct gru_thread_state*) ;
 int FUNC_2 (struct seq_file*,char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_4, void *VAR_5)
{
 long VAR_6 = *(long *)VAR_5;
 int VAR_7;
 struct gru_state *VAR_8 = FUNC_0(VAR_6);
 struct gru_thread_state *VAR_9;
 const char *VAR_10[] = { "??", "UPM", "INTR", "OS_POLL" };

 if (VAR_6 == 0)
  FUNC_2(VAR_4, "#%5s%5s%6s%7s%9s%6s%8s%8s\n", "gid", "bid",
      "ctx#", "asid", "pid", "cbrs", "dsbytes", "mode");
 if (VAR_8)
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   VAR_9 = VAR_8->gs_gts[VAR_7];
   if (!VAR_9)
    continue;
   FUNC_2(VAR_4, " %5d%5d%6d%7d%9d%6d%8d%8s\n",
       VAR_8->gs_gid, VAR_8->gs_blade_id, VAR_7,
       FUNC_1(VAR_9) ? 0 : VAR_9->ts_gms->ms_asids[VAR_6].mt_asid,
       FUNC_1(VAR_9) ? 0 : VAR_9->ts_tgid_owner,
       VAR_9->ts_cbr_au_count * VAR_0,
       VAR_9->ts_cbr_au_count * VAR_1,
       VAR_10[VAR_9->ts_user_options &
     VAR_3]);
  }

 return 0;
}
