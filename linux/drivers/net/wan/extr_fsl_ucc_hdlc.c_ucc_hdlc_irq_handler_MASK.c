
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ucc_tdm_info {int dummy; } ;
struct ucc_hdlc_private {int napi; struct ucc_fast_private* uccf; struct ucc_tdm_info* ut_info; struct net_device* ndev; } ;
struct ucc_fast_private {int p_uccm; int p_ucce; } ;
struct TYPE_2__ {int tx_errors; int rx_missed_errors; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct ucc_hdlc_private *VAR_8 = (struct ucc_hdlc_private *)VAR_7;
 struct net_device *VAR_9 = VAR_8->ndev;
 struct ucc_fast_private *VAR_10;
 struct ucc_tdm_info *VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_11 = VAR_8->ut_info;
 VAR_10 = VAR_8->uccf;

 VAR_12 = FUNC_1(VAR_10->p_ucce);
 VAR_13 = FUNC_1(VAR_10->p_uccm);
 VAR_12 &= VAR_13;
 FUNC_2(VAR_12, VAR_10->p_ucce);
 if (!VAR_12)
  return VAR_1;

 if ((VAR_12 >> 16) & (VAR_2 | VAR_3)) {
  if (FUNC_3(&VAR_8->napi)) {
   VAR_13 &= ~((VAR_2 | VAR_3)
      << 16);
   FUNC_2(VAR_13, VAR_10->p_uccm);
   FUNC_0(&VAR_8->napi);
  }
 }


 if (VAR_12 >> 16 & VAR_4)
  VAR_9->stats.rx_missed_errors++;
 if (VAR_12 >> 16 & VAR_5)
  VAR_9->stats.tx_errors++;

 return VAR_0;
}
