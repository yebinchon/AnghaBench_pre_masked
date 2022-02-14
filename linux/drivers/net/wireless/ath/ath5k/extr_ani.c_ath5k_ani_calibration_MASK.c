
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_ani_state {int listen_time; scalar_t__ ani_mode; int ofdm_errors; int cck_errors; } ;
struct ath5k_hw {struct ath5k_ani_state ani_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,int,int,...) ;
 int VAR_6 ;
 int FUNC_1 (struct ath5k_hw*,struct ath5k_ani_state*) ;
 int FUNC_2 (struct ath5k_ani_state*) ;
 int FUNC_3 (struct ath5k_hw*,struct ath5k_ani_state*,int) ;
 int FUNC_4 (struct ath5k_hw*,struct ath5k_ani_state*) ;
 int FUNC_5 (struct ath5k_hw*,struct ath5k_ani_state*) ;

void
FUNC_6(struct ath5k_hw *VAR_7)
{
 struct ath5k_ani_state *VAR_8 = &VAR_7->ani_state;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;




 VAR_9 = FUNC_5(VAR_7, VAR_8);
 VAR_8->listen_time += VAR_9;

 if (VAR_8->ani_mode != VAR_3)
  return;

 FUNC_4(VAR_7, VAR_8);

 VAR_10 = VAR_8->listen_time * VAR_4 / 1000;
 VAR_12 = VAR_8->listen_time * VAR_0 / 1000;
 VAR_11 = VAR_8->listen_time * VAR_5 / 1000;
 VAR_13 = VAR_8->listen_time * VAR_1 / 1000;

 FUNC_0(VAR_7, VAR_6,
  "listen %d (now %d)", VAR_8->listen_time, VAR_9);
 FUNC_0(VAR_7, VAR_6,
  "check high ofdm %d/%d cck %d/%d",
  VAR_8->ofdm_errors, VAR_10, VAR_8->cck_errors, VAR_12);

 if (VAR_8->ofdm_errors > VAR_10 || VAR_8->cck_errors > VAR_12) {

  bool VAR_14 = VAR_8->ofdm_errors > VAR_10 ? 1 : 0;
  FUNC_3(VAR_7, VAR_8, VAR_14);
  FUNC_2(VAR_8);

 } else if (VAR_8->listen_time > 5 * VAR_2) {


  FUNC_0(VAR_7, VAR_6,
   "check low ofdm %d/%d cck %d/%d",
   VAR_8->ofdm_errors, VAR_11, VAR_8->cck_errors, VAR_13);

  if (VAR_8->ofdm_errors <= VAR_11 && VAR_8->cck_errors <= VAR_13)
   FUNC_1(VAR_7, VAR_8);

  FUNC_2(VAR_8);
 }
}
