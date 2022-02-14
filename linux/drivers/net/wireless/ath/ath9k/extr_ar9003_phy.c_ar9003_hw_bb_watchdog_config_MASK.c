
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int bb_watchdog_timeout_ms; scalar_t__ curchan; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int VAR_9 ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,...) ;

void FUNC_5(struct ath_hw *VAR_10)
{
 struct ath_common *VAR_11 = FUNC_3(VAR_10);
 u32 VAR_12 = VAR_10->bb_watchdog_timeout_ms;
 u32 VAR_13, VAR_14;

 if (!VAR_12) {

  FUNC_2(VAR_10, VAR_2,
     FUNC_1(VAR_10, VAR_2) &
     ~(VAR_8 |
       VAR_5));


  FUNC_2(VAR_10, VAR_1,
     FUNC_1(VAR_10, VAR_1) &
     ~(VAR_6 |
       VAR_3));

  FUNC_4(VAR_11, VAR_9, "Disabled BB Watchdog\n");
  return;
 }


 VAR_13 = FUNC_1(VAR_10, VAR_2) & VAR_0;
 FUNC_2(VAR_10, VAR_2,
    (VAR_13 | VAR_5) &
    ~VAR_8);


 if (VAR_12 > 10000)
  VAR_12 = 10000;
 VAR_14 = (100 * VAR_12) / 74;
 if (VAR_10->curchan && FUNC_0(VAR_10->curchan))
  VAR_14 = (100 * VAR_12) / 37;





 FUNC_2(VAR_10, VAR_1,
    VAR_6 |
    VAR_4 |
    (VAR_7 & (VAR_14 << 2)));

 FUNC_4(VAR_11, VAR_9, "Enabled BB Watchdog timeout (%u ms)\n",
  VAR_12);
}
