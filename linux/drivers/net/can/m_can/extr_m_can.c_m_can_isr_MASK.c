
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device_stats {int tx_packets; int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct m_can_classdev {int irqstatus; int version; int napi; int is_peripheral; TYPE_1__* ops; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* clear_interrupts ) (struct m_can_classdev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct m_can_classdev*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct m_can_classdev*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct m_can_classdev*) ;
 int FUNC_7 (struct m_can_classdev*,int ,int) ;
 int FUNC_8 (int *) ;
 struct m_can_classdev* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct m_can_classdev*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_9, void *VAR_10)
{
 struct net_device *VAR_11 = (struct net_device *)VAR_10;
 struct m_can_classdev *VAR_12 = FUNC_9(VAR_11);
 struct net_device_stats *VAR_13 = &VAR_11->stats;
 u32 VAR_14;

 VAR_14 = FUNC_4(VAR_12, VAR_8);
 if (!VAR_14)
  return VAR_2;


 if (VAR_14 & VAR_3)
  FUNC_7(VAR_12, VAR_8, VAR_14);

 if (VAR_12->ops->clear_interrupts)
  VAR_12->ops->clear_interrupts(VAR_12);






 if ((VAR_14 & VAR_5) || (VAR_14 & VAR_4)) {
  VAR_12->irqstatus = VAR_14;
  FUNC_2(VAR_12);
  if (!VAR_12->is_peripheral)
   FUNC_8(&VAR_12->napi);
  else
   FUNC_5(VAR_11);
 }

 if (VAR_12->version == 30) {
  if (VAR_14 & VAR_6) {

   VAR_13->tx_bytes += FUNC_0(VAR_11, 0);
   VAR_13->tx_packets++;
   FUNC_1(VAR_11, VAR_0);
   FUNC_11(VAR_11);
  }
 } else {
  if (VAR_14 & VAR_7) {

   FUNC_3(VAR_11);
   FUNC_1(VAR_11, VAR_0);
   if (FUNC_10(VAR_11) &&
       !FUNC_6(VAR_12))
    FUNC_11(VAR_11);
  }
 }

 return VAR_1;
}
