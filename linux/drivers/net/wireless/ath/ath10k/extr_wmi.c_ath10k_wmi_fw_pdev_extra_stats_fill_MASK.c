
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_stats_pdev {int mib_int_count; int no_beacons; int fcs_bad; int rts_good; int rts_bad; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct ath10k_fw_stats_pdev *VAR_1,
        char *VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = *VAR_3;
 u32 VAR_5 = VAR_0;

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "RTS bad count", VAR_1->rts_bad);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "RTS good count", VAR_1->rts_good);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "FCS bad count", VAR_1->fcs_bad);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "No beacon count", VAR_1->no_beacons);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %10u\n",
   "MIB int count", VAR_1->mib_int_count);

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "\n");
 *VAR_3 = VAR_4;
}
