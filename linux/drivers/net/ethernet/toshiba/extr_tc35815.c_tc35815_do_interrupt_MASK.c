
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tx_ints; int rx_ints; } ;
struct tc35815_local {int lock; TYPE_2__ lstats; } ;
struct TYPE_3__ {int rx_length_errors; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 struct tc35815_local* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct tc35815_local*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_6, u32 VAR_7, int VAR_8)
{
 struct tc35815_local *VAR_9 = FUNC_1(VAR_6);
 int VAR_10 = -1;


 if (VAR_7 & VAR_0) {
  FUNC_5(VAR_6, VAR_7);
  return 0;
 }

 if (VAR_7 & VAR_3) {
  if (FUNC_2(VAR_9))
   FUNC_0(&VAR_6->dev,
     "Free Descriptor Area Exhausted (%#x).\n",
     VAR_7);
  VAR_6->stats.rx_dropped++;
  VAR_10 = 0;
 }
 if (VAR_7 & VAR_1) {
  if (FUNC_2(VAR_9))
   FUNC_0(&VAR_6->dev,
     "Buffer List Exhausted (%#x).\n",
     VAR_7);
  VAR_6->stats.rx_dropped++;
  VAR_10 = 0;
 }
 if (VAR_7 & VAR_2) {
  if (FUNC_2(VAR_9))
   FUNC_0(&VAR_6->dev,
     "Excessive Buffer Descriptors (%#x).\n",
     VAR_7);
  VAR_6->stats.rx_length_errors++;
  VAR_10 = 0;
 }


 if (VAR_7 & VAR_4) {

  VAR_10 = FUNC_6(VAR_6, VAR_8);
  VAR_9->lstats.rx_ints++;
 }
 if (VAR_7 & VAR_5) {

  VAR_9->lstats.tx_ints++;
  FUNC_3(&VAR_9->lock);
  FUNC_7(VAR_6);
  FUNC_4(&VAR_9->lock);
  if (VAR_10 < 0)
   VAR_10 = 0;
 }
 return VAR_10;
}
