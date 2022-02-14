
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rs_rate {scalar_t__ index; int ant; int sgi; int ldpc; int stbc; int bfer; int bw; int type; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 int const VAR_21 ;
 int const VAR_22 ;
 int const VAR_23 ;
 int const VAR_24 ;
 int const VAR_25 ;
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (struct rs_rate*) ;
 int FUNC_4 (struct rs_rate*) ;
 scalar_t__ FUNC_5 (int const) ;
 int FUNC_6 (struct rs_rate*,int ,int) ;

__attribute__((used)) static int FUNC_7(const u32 VAR_26,
       enum nl80211_band VAR_27,
       struct rs_rate *VAR_28)
{
 u32 VAR_29 = VAR_26 & VAR_13;
 u8 VAR_30 = FUNC_2(VAR_26);
 u8 VAR_31;

 FUNC_6(VAR_28, 0, sizeof(*VAR_28));
 VAR_28->index = FUNC_5(VAR_26);

 if (VAR_28->index == VAR_1)
  return -VAR_0;

 VAR_28->ant = (VAR_29 >> VAR_14);


 if (!(VAR_26 & VAR_19) &&
     !(VAR_26 & VAR_23) &&
     !(VAR_26 & VAR_18)) {
  if (VAR_30 == 1) {
   if (VAR_27 == VAR_10)
    VAR_28->type = VAR_6;
   else
    VAR_28->type = VAR_7;
  }

  return 0;
 }


 if (VAR_26 & VAR_21)
  VAR_28->sgi = 1;
 if (VAR_26 & VAR_20)
  VAR_28->ldpc = 1;
 if (VAR_26 & VAR_22)
  VAR_28->stbc = 1;
 if (VAR_26 & VAR_15)
  VAR_28->bfer = 1;

 VAR_28->bw = VAR_26 & VAR_17;

 if (VAR_26 & VAR_19) {
  VAR_31 = ((VAR_26 & VAR_11) >>
         VAR_12) + 1;

  if (VAR_31 == 1) {
   VAR_28->type = VAR_5;
   FUNC_0(!VAR_28->stbc && !VAR_28->bfer && VAR_30 != 1,
      "stbc %d bfer %d",
      VAR_28->stbc, VAR_28->bfer);
  } else if (VAR_31 == 2) {
   VAR_28->type = VAR_4;
   FUNC_1(VAR_30 != 2);
  } else {
   FUNC_1(1);
  }
 } else if (VAR_26 & VAR_23) {
  VAR_31 = ((VAR_26 & VAR_24) >>
         VAR_25) + 1;

  if (VAR_31 == 1) {
   VAR_28->type = VAR_9;
   FUNC_0(!VAR_28->stbc && !VAR_28->bfer && VAR_30 != 1,
      "stbc %d bfer %d",
      VAR_28->stbc, VAR_28->bfer);
  } else if (VAR_31 == 2) {
   VAR_28->type = VAR_8;
   FUNC_1(VAR_30 != 2);
  } else {
   FUNC_1(1);
  }
 } else if (VAR_26 & VAR_18) {
  VAR_31 = ((VAR_26 & VAR_24) >>
        VAR_25) + 1;

  if (VAR_31 == 1) {
   VAR_28->type = VAR_3;
   FUNC_0(!VAR_28->stbc && !VAR_28->bfer && VAR_30 != 1,
      "stbc %d bfer %d", VAR_28->stbc, VAR_28->bfer);
  } else if (VAR_31 == 2) {
   VAR_28->type = VAR_2;
   FUNC_1(VAR_30 != 2);
  } else {
   FUNC_1(1);
  }
 }

 FUNC_1(VAR_28->bw == VAR_16 &&
       !FUNC_3(VAR_28) && !FUNC_4(VAR_28));

 return 0;
}
