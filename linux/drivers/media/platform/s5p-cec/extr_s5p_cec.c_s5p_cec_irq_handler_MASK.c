
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int len; int msg; int rx_status; } ;
struct s5p_cec_dev {scalar_t__ rx; TYPE_1__ msg; int dev; void* tx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct s5p_cec_dev*) ;
 int FUNC_2 (struct s5p_cec_dev*,int,int ) ;
 int FUNC_3 (struct s5p_cec_dev*) ;
 int FUNC_4 (struct s5p_cec_dev*) ;
 int FUNC_5 (struct s5p_cec_dev*) ;
 int FUNC_6 (struct s5p_cec_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 struct s5p_cec_dev *VAR_14 = VAR_13;
 u32 VAR_15 = 0;

 VAR_15 = FUNC_3(VAR_14);

 FUNC_0(VAR_14->dev, "irq received\n");

 if (VAR_15 & VAR_3) {
  if (VAR_15 & VAR_5) {
   FUNC_0(VAR_14->dev, "CEC_STATUS_TX_NACK set\n");
   VAR_14->tx = VAR_11;
  } else if (VAR_15 & VAR_4) {
   FUNC_0(VAR_14->dev, "CEC_STATUS_TX_ERROR set\n");
   VAR_14->tx = VAR_9;
  } else {
   FUNC_0(VAR_14->dev, "CEC_STATUS_TX_DONE\n");
   VAR_14->tx = VAR_8;
  }
  FUNC_6(VAR_14);
 }

 if (VAR_15 & VAR_1) {
  if (VAR_15 & VAR_2) {
   FUNC_0(VAR_14->dev, "CEC_STATUS_RX_ERROR set\n");
   FUNC_4(VAR_14);
   FUNC_1(VAR_14);
  } else {
   FUNC_0(VAR_14->dev, "CEC_STATUS_RX_DONE set\n");
   if (VAR_14->rx != VAR_10)
    FUNC_0(VAR_14->dev, "Buffer overrun (worker did not process previous message)\n");
   VAR_14->rx = VAR_7;
   VAR_14->msg.len = VAR_15 >> 24;
   VAR_14->msg.rx_status = VAR_0;
   FUNC_2(VAR_14, VAR_14->msg.len,
     VAR_14->msg.msg);
   VAR_14->rx = VAR_8;
   FUNC_1(VAR_14);
  }

  FUNC_5(VAR_14);
 }
 return VAR_6;
}
