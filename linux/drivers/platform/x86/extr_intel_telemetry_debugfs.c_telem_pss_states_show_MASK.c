
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct telemetry_evtlog {int telem_evtlog; scalar_t__ telem_evtid; } ;
struct telemetry_debugfs_conf {scalar_t__ pss_idle_id; int pss_idle_evts; scalar_t__ pcs_idle_blkd_id; int pcs_idle_blkd_evts; scalar_t__ pcs_s0ix_blkd_id; int pcs_s0ix_blkd_evts; scalar_t__ pss_wakeup_id; int pss_wakeup_evts; scalar_t__ pss_ltr_blocking_id; int pss_ltr_evts; scalar_t__ pstates_id; TYPE_1__* pss_wakeup; TYPE_1__* pss_ltr_data; TYPE_1__* pcs_s0ix_blkd_data; TYPE_1__* pcs_idle_blkd_data; TYPE_1__* pss_idle_data; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int bit_pos; int name; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,int*,int,TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct telemetry_debugfs_conf* VAR_10 ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (int ,char const**,int) ;
 int FUNC_4 (int ,struct telemetry_evtlog*,int) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_11, void *VAR_12)
{
 struct telemetry_evtlog VAR_13[VAR_3];
 struct telemetry_debugfs_conf *VAR_14 = VAR_10;
 const char *VAR_15[VAR_3];
 u32 VAR_16[VAR_5],
     VAR_17[VAR_8],
     VAR_18[VAR_9],
     VAR_19[VAR_7],
     VAR_20[VAR_6];
 int VAR_21, VAR_22, VAR_23, VAR_24 = 0;
 u64 VAR_25 = 0;

 VAR_23 = FUNC_4(VAR_4, VAR_13,
          VAR_3);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_24 = FUNC_3(VAR_4, VAR_15,
        VAR_3);
 if (VAR_24 < 0)
  return VAR_24;

 FUNC_2(VAR_11, "\n----------------------------------------------------\n");
 FUNC_2(VAR_11, "\tPSS TELEM EVENTLOG (Residency = field/19.2 us\n");
 FUNC_2(VAR_11, "----------------------------------------------------\n");
 for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
  FUNC_1(VAR_11, "%-32s %llu\n",
      VAR_15[VAR_21], VAR_13[VAR_21].telem_evtlog);


  if (VAR_13[VAR_21].telem_evtid == VAR_14->pss_idle_id) {
   VAR_20[VAR_14->pss_idle_evts - 1] =
   (VAR_13[VAR_21].telem_evtlog >>
   VAR_14->pss_idle_data[VAR_14->pss_idle_evts - 1].bit_pos) &
   VAR_0;
  }

  FUNC_0(VAR_14->pss_idle_id,
        VAR_14->pss_idle_evts - 1,
        VAR_20, VAR_13[VAR_21].telem_evtlog,
        VAR_14->pss_idle_data, VAR_1);

  FUNC_0(VAR_14->pcs_idle_blkd_id,
        VAR_14->pcs_idle_blkd_evts,
        VAR_16,
        VAR_13[VAR_21].telem_evtlog,
        VAR_14->pcs_idle_blkd_data,
        VAR_2);

  FUNC_0(VAR_14->pcs_s0ix_blkd_id,
        VAR_14->pcs_s0ix_blkd_evts,
        VAR_17,
        VAR_13[VAR_21].telem_evtlog,
        VAR_14->pcs_s0ix_blkd_data,
        VAR_2);

  FUNC_0(VAR_14->pss_wakeup_id,
        VAR_14->pss_wakeup_evts,
        VAR_18,
        VAR_13[VAR_21].telem_evtlog,
        VAR_14->pss_wakeup, VAR_2);

  FUNC_0(VAR_14->pss_ltr_blocking_id,
        VAR_14->pss_ltr_evts, VAR_19,
        VAR_13[VAR_21].telem_evtlog,
        VAR_14->pss_ltr_data, VAR_2);

  if (VAR_13[VAR_21].telem_evtid == VAR_10->pstates_id)
   VAR_25 = VAR_13[VAR_21].telem_evtlog;
 }

 FUNC_2(VAR_11, "\n--------------------------------------\n");
 FUNC_2(VAR_11, "PStates\n");
 FUNC_2(VAR_11, "--------------------------------------\n");
 FUNC_2(VAR_11, "Domain\t\t\t\tFreq(Mhz)\n");
 FUNC_1(VAR_11, " IA\t\t\t\t %llu\n GT\t\t\t\t %llu\n",
     (VAR_25 & VAR_2)*100,
     ((VAR_25 >> 8) & VAR_2)*50/3);

 FUNC_1(VAR_11, " IUNIT\t\t\t\t %llu\n SA\t\t\t\t %llu\n",
     ((VAR_25 >> 16) & VAR_2)*25,
     ((VAR_25 >> 24) & VAR_2)*50/3);

 FUNC_2(VAR_11, "\n--------------------------------------\n");
 FUNC_2(VAR_11, "PSS IDLE Status\n");
 FUNC_2(VAR_11, "--------------------------------------\n");
 FUNC_2(VAR_11, "Device\t\t\t\t\tIDLE\n");
 for (VAR_21 = 0; VAR_21 < VAR_10->pss_idle_evts; VAR_21++) {
  FUNC_1(VAR_11, "%-32s\t%u\n",
      VAR_10->pss_idle_data[VAR_21].name,
      VAR_20[VAR_21]);
 }

 FUNC_2(VAR_11, "\n--------------------------------------\n");
 FUNC_2(VAR_11, "PSS Idle blkd Status (~1ms saturating bucket)\n");
 FUNC_2(VAR_11, "--------------------------------------\n");
 FUNC_2(VAR_11, "Blocker\t\t\t\t\tCount\n");
 for (VAR_21 = 0; VAR_21 < VAR_10->pcs_idle_blkd_evts; VAR_21++) {
  FUNC_1(VAR_11, "%-32s\t%u\n",
      VAR_10->pcs_idle_blkd_data[VAR_21].name,
      VAR_16[VAR_21]);
 }

 FUNC_2(VAR_11, "\n--------------------------------------\n");
 FUNC_2(VAR_11, "PSS S0ix blkd Status (~1ms saturating bucket)\n");
 FUNC_2(VAR_11, "--------------------------------------\n");
 FUNC_2(VAR_11, "Blocker\t\t\t\t\tCount\n");
 for (VAR_21 = 0; VAR_21 < VAR_10->pcs_s0ix_blkd_evts; VAR_21++) {
  FUNC_1(VAR_11, "%-32s\t%u\n",
      VAR_10->pcs_s0ix_blkd_data[VAR_21].name,
      VAR_17[VAR_21]);
 }

 FUNC_2(VAR_11, "\n--------------------------------------\n");
 FUNC_2(VAR_11, "LTR Blocking Status (~1ms saturating bucket)\n");
 FUNC_2(VAR_11, "--------------------------------------\n");
 FUNC_2(VAR_11, "Blocker\t\t\t\t\tCount\n");
 for (VAR_21 = 0; VAR_21 < VAR_10->pss_ltr_evts; VAR_21++) {
  FUNC_1(VAR_11, "%-32s\t%u\n",
      VAR_10->pss_ltr_data[VAR_21].name,
      VAR_18[VAR_21]);
 }

 FUNC_2(VAR_11, "\n--------------------------------------\n");
 FUNC_2(VAR_11, "Wakes Status (~1ms saturating bucket)\n");
 FUNC_2(VAR_11, "--------------------------------------\n");
 FUNC_2(VAR_11, "Wakes\t\t\t\t\tCount\n");
 for (VAR_21 = 0; VAR_21 < VAR_10->pss_wakeup_evts; VAR_21++) {
  FUNC_1(VAR_11, "%-32s\t%u\n",
      VAR_10->pss_wakeup[VAR_21].name,
      VAR_19[VAR_21]);
 }

 return 0;
}
