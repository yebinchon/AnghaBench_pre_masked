
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ath_hw {int dummy; } ;
struct ath_common {int op_flags; } ;
struct ath_beacon_config {int intval; int beacon_interval; int dtim_period; int bmiss_timeout; void* nexttbtt; } ;
struct ath9k_beacon_state {int bs_intval; int bs_dtimperiod; int bs_bmissthreshold; int bs_sleepduration; int bs_tsfoor_threshold; void* bs_nextdtim; void* bs_nexttbtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*,...) ;
 int FUNC_7 (struct ath9k_beacon_state*,int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct ath_hw *VAR_4,
     struct ath_beacon_config *VAR_5,
     struct ath9k_beacon_state *VAR_6)
{
 struct ath_common *VAR_7 = FUNC_4(VAR_4);
 int VAR_8;
 u64 VAR_9;


 if (!FUNC_9(VAR_1, &VAR_7->op_flags)) {
  FUNC_6(VAR_7, VAR_2,
   "STA is not yet associated..skipping beacon config\n");
  return -VAR_3;
 }

 FUNC_7(VAR_6, 0, sizeof(*VAR_6));
 VAR_5->intval = VAR_5->beacon_interval;





 VAR_8 = VAR_5->intval * VAR_5->dtim_period;





 VAR_9 = FUNC_5(VAR_4);
 VAR_5->nexttbtt = FUNC_3(VAR_4, VAR_9, VAR_5->intval);

 VAR_6->bs_intval = FUNC_2(VAR_5->intval);
 VAR_6->bs_dtimperiod = VAR_5->dtim_period * VAR_6->bs_intval;
 VAR_6->bs_nexttbtt = VAR_5->nexttbtt;
 VAR_6->bs_nextdtim = VAR_5->nexttbtt;
 if (VAR_5->dtim_period > 1)
  VAR_6->bs_nextdtim = FUNC_3(VAR_4, VAR_9, VAR_8);







 VAR_6->bs_bmissthreshold = FUNC_0(VAR_5->bmiss_timeout, VAR_5->intval);
 if (VAR_6->bs_bmissthreshold > 15)
  VAR_6->bs_bmissthreshold = 15;
 else if (VAR_6->bs_bmissthreshold <= 0)
  VAR_6->bs_bmissthreshold = 1;
 VAR_6->bs_sleepduration = FUNC_2(FUNC_8(FUNC_1(100),
        VAR_5->intval));
 if (VAR_6->bs_sleepduration > VAR_6->bs_dtimperiod)
  VAR_6->bs_sleepduration = VAR_6->bs_dtimperiod;


 VAR_6->bs_tsfoor_threshold = VAR_0;

 FUNC_6(VAR_7, VAR_2, "bmiss: %u sleep: %u\n",
  VAR_6->bs_bmissthreshold, VAR_6->bs_sleepduration);
 return 0;
}
