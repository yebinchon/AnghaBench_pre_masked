
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath5k_txq_info {int tqi_type; int tqi_cw_min; int tqi_cw_max; int tqi_aifs; int tqi_cbr_period; int tqi_cbr_overflow_limit; int tqi_ready_time; int tqi_burst_time; int tqi_flags; } ;
struct TYPE_3__ {int q_tx_num; } ;
struct TYPE_4__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_mac_version; int ah_txq_imr_txok; int ah_txq_imr_txerr; int ah_txq_imr_txurn; int ah_txq_imr_txdesc; int ah_txq_imr_txeol; int ah_txq_imr_cbrorn; int ah_txq_imr_cbrurn; int ah_txq_imr_qtrig; int ah_txq_imr_nofrm; int ah_txq_status; TYPE_2__ ah_capabilities; struct ath5k_txq_info* ah_txq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int,unsigned int) ;
 int FUNC_9 (struct ath5k_hw*,int ,int ) ;
 int FUNC_10 (struct ath5k_hw*,int ,int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct ath5k_hw*,int ,unsigned int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;



 int VAR_56 ;

 int FUNC_13 (struct ath5k_hw*,int,int ) ;
 int FUNC_14 (struct ath5k_hw*,unsigned int) ;

int
FUNC_15(struct ath5k_hw *VAR_57, unsigned int VAR_58)
{
 struct ath5k_txq_info *VAR_59 = &VAR_57->ah_txq[VAR_58];

 FUNC_0(VAR_58, VAR_57->ah_capabilities.cap_queues.q_tx_num);



 if ((VAR_57->ah_version == VAR_0) ||
 (VAR_59->tqi_type == VAR_56))
  return 0;





 FUNC_13(VAR_57,
  FUNC_11(VAR_59->tqi_cw_min, VAR_5) |
  FUNC_11(VAR_59->tqi_cw_max, VAR_4) |
  FUNC_11(VAR_59->tqi_aifs, VAR_3),
  FUNC_3(VAR_58));




 FUNC_14(VAR_57, VAR_58);







 FUNC_10(VAR_57, FUNC_4(VAR_58),
    VAR_11);


 if (VAR_57->ah_mac_version < VAR_38)
  FUNC_10(VAR_57, FUNC_4(VAR_58),
     VAR_13);


 if (VAR_59->tqi_cbr_period) {
  FUNC_13(VAR_57, FUNC_11(VAR_59->tqi_cbr_period,
     VAR_14) |
     FUNC_11(VAR_59->tqi_cbr_overflow_limit,
     VAR_15),
     FUNC_1(VAR_58));

  FUNC_10(VAR_57, FUNC_5(VAR_58),
     VAR_20);

  if (VAR_59->tqi_cbr_overflow_limit)
   FUNC_10(VAR_57, FUNC_5(VAR_58),
     VAR_19);
 }


 if (VAR_59->tqi_ready_time && (VAR_59->tqi_type != 130))
  FUNC_13(VAR_57, FUNC_11(VAR_59->tqi_ready_time,
     VAR_24) |
     VAR_23,
     FUNC_7(VAR_58));

 if (VAR_59->tqi_burst_time) {
  FUNC_13(VAR_57, FUNC_11(VAR_59->tqi_burst_time,
     VAR_1) |
     VAR_2,
     FUNC_2(VAR_58));

  if (VAR_59->tqi_flags & VAR_49)
   FUNC_10(VAR_57, FUNC_5(VAR_58),
     VAR_22);
 }


 if (VAR_59->tqi_flags & VAR_44)
  FUNC_13(VAR_57, VAR_12,
     FUNC_4(VAR_58));


 if (VAR_59->tqi_flags & VAR_47)
  FUNC_13(VAR_57, VAR_9,
     FUNC_4(VAR_58));




 switch (VAR_59->tqi_type) {
 case 131:
  FUNC_10(VAR_57, FUNC_5(VAR_58),
    VAR_21 |
    VAR_17 |
    VAR_16);

  FUNC_10(VAR_57, FUNC_4(VAR_58),
    (VAR_6 <<
    VAR_7) |
    VAR_8 |
    VAR_12 |
    VAR_10);
  break;

 case 130:

  FUNC_10(VAR_57, FUNC_5(VAR_58),
     VAR_21 |
     VAR_18 |
     VAR_17);

  FUNC_13(VAR_57, ((VAR_59->tqi_ready_time -
     (VAR_41 -
     VAR_40) -
    VAR_39) * 1024) |
     VAR_23,
     FUNC_7(VAR_58));

  FUNC_10(VAR_57, FUNC_4(VAR_58),
     (VAR_6 <<
     VAR_7));
  break;

 case 128:
  FUNC_10(VAR_57, FUNC_5(VAR_58),
     VAR_18);
  break;

 case 129:
 default:
   break;
 }







 if (VAR_59->tqi_flags & VAR_54)
  FUNC_8(VAR_57->ah_txq_imr_txok, VAR_58);

 if (VAR_59->tqi_flags & VAR_52)
  FUNC_8(VAR_57->ah_txq_imr_txerr, VAR_58);

 if (VAR_59->tqi_flags & VAR_55)
  FUNC_8(VAR_57->ah_txq_imr_txurn, VAR_58);

 if (VAR_59->tqi_flags & VAR_50)
  FUNC_8(VAR_57->ah_txq_imr_txdesc, VAR_58);

 if (VAR_59->tqi_flags & VAR_51)
  FUNC_8(VAR_57->ah_txq_imr_txeol, VAR_58);

 if (VAR_59->tqi_flags & VAR_45)
  FUNC_8(VAR_57->ah_txq_imr_cbrorn, VAR_58);

 if (VAR_59->tqi_flags & VAR_46)
  FUNC_8(VAR_57->ah_txq_imr_cbrurn, VAR_58);

 if (VAR_59->tqi_flags & VAR_48)
  FUNC_8(VAR_57->ah_txq_imr_qtrig, VAR_58);

 if (VAR_59->tqi_flags & VAR_53)
  FUNC_8(VAR_57->ah_txq_imr_nofrm, VAR_58);




 VAR_57->ah_txq_imr_txok &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_txerr &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_txurn &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_txdesc &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_txeol &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_cbrorn &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_cbrurn &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_qtrig &= VAR_57->ah_txq_status;
 VAR_57->ah_txq_imr_nofrm &= VAR_57->ah_txq_status;

 FUNC_13(VAR_57, FUNC_11(VAR_57->ah_txq_imr_txok,
     VAR_27) |
     FUNC_11(VAR_57->ah_txq_imr_txdesc,
     VAR_26),
     VAR_25);

 FUNC_13(VAR_57, FUNC_11(VAR_57->ah_txq_imr_txerr,
     VAR_30) |
     FUNC_11(VAR_57->ah_txq_imr_txeol,
     VAR_29),
     VAR_28);


 FUNC_9(VAR_57, VAR_31, VAR_32);
 FUNC_10(VAR_57, VAR_31,
    FUNC_11(VAR_57->ah_txq_imr_txurn,
    VAR_32));

 FUNC_13(VAR_57, FUNC_11(VAR_57->ah_txq_imr_cbrorn,
    VAR_34) |
    FUNC_11(VAR_57->ah_txq_imr_cbrurn,
    VAR_35),
    VAR_33);

 FUNC_13(VAR_57, FUNC_11(VAR_57->ah_txq_imr_qtrig,
    VAR_37), VAR_36);


 FUNC_13(VAR_57, FUNC_11(VAR_57->ah_txq_imr_nofrm,
    VAR_43), VAR_42);



 if (VAR_57->ah_txq_imr_nofrm == 0)
  FUNC_13(VAR_57, 0, VAR_42);


 FUNC_12(VAR_57, FUNC_6(VAR_58), VAR_58);

 return 0;
}
