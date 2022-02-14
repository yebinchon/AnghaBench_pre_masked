
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u64 ;
typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; } ;
struct TYPE_4__ {int mask; } ;
struct fec_enet_private {scalar_t__ pps_enable; int reload_period; int next_counter; int tmreg_lock; int pps_channel; scalar_t__ hwp; TYPE_2__ cc; int tc; TYPE_1__* pdev; scalar_t__ hwts_rx_en; scalar_t__ hwts_tx_en; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
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
 int FUNC_2 (int *,char*) ;
 struct timespec64 FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct fec_enet_private *VAR_15, uint VAR_16)
{
 unsigned long VAR_17;
 u32 VAR_18, VAR_19;
 struct timespec64 VAR_20;
 u64 VAR_21;
 VAR_18 = 0;

 if (!(VAR_15->hwts_tx_en || VAR_15->hwts_rx_en)) {
  FUNC_2(&VAR_15->pdev->dev, "No ptp stack is running\n");
  return -VAR_1;
 }

 if (VAR_15->pps_enable == VAR_16)
  return 0;

 VAR_15->pps_channel = VAR_0;
 VAR_15->reload_period = VAR_14;

 FUNC_5(&VAR_15->tmreg_lock, VAR_17);

 if (VAR_16) {


  FUNC_9(VAR_8, VAR_15->hwp + FUNC_1(VAR_15->pps_channel));





  VAR_18 = FUNC_4(VAR_15->hwp + FUNC_1(VAR_15->pps_channel));
  do {
   VAR_18 &= ~(VAR_11);
   FUNC_9(VAR_18, VAR_15->hwp + FUNC_1(VAR_15->pps_channel));
   VAR_18 = FUNC_4(VAR_15->hwp + FUNC_1(VAR_15->pps_channel));
  } while (VAR_18 & VAR_11);


  FUNC_8(&VAR_15->tc);







  VAR_19 = FUNC_4(VAR_15->hwp + VAR_3);
  VAR_19 |= VAR_5;
  FUNC_9(VAR_19, VAR_15->hwp + VAR_3);

  VAR_19 = FUNC_4(VAR_15->hwp + VAR_2);

  VAR_21 = FUNC_7(&VAR_15->tc, VAR_19);
  VAR_20 = FUNC_3(VAR_21);




  VAR_18 = VAR_13 - (u32)VAR_20.tv_nsec + VAR_19;
  VAR_18 += VAR_13;







  VAR_18 &= VAR_15->cc.mask;
  FUNC_9(VAR_18, VAR_15->hwp + FUNC_0(VAR_15->pps_channel));


  VAR_15->next_counter = (VAR_18 + VAR_15->reload_period) & VAR_15->cc.mask;


  VAR_18 = FUNC_4(VAR_15->hwp + VAR_3);
  VAR_18 |= VAR_6;
  FUNC_9(VAR_18, VAR_15->hwp + VAR_3);


  VAR_18 = FUNC_4(VAR_15->hwp + FUNC_1(VAR_15->pps_channel));
  VAR_18 |= (1 << VAR_9 | 1 << VAR_10);
  VAR_18 &= ~(1 << VAR_7);
  VAR_18 &= ~(VAR_11);
  VAR_18 |= (VAR_4 << VAR_12);
  FUNC_9(VAR_18, VAR_15->hwp + FUNC_1(VAR_15->pps_channel));




  FUNC_9(VAR_15->next_counter, VAR_15->hwp + FUNC_0(VAR_15->pps_channel));
  VAR_15->next_counter = (VAR_15->next_counter + VAR_15->reload_period) & VAR_15->cc.mask;
 } else {
  FUNC_9(0, VAR_15->hwp + FUNC_1(VAR_15->pps_channel));
 }

 VAR_15->pps_enable = VAR_16;
 FUNC_6(&VAR_15->tmreg_lock, VAR_17);

 return 0;
}
