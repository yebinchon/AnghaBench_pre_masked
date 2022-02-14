
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct whcrc {int irq_lock; scalar_t__ rc_base; int cmd_dma_buf; int cmd_buf; int cmd_wq; TYPE_1__* umc_dev; } ;
struct uwb_rccb {int dummy; } ;
struct uwb_rc {struct whcrc* priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,char*) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (size_t,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,struct uwb_rccb const*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct uwb_rc*) ;
 int FUNC_8 (int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct uwb_rc *VAR_12,
       const struct uwb_rccb *VAR_13, size_t VAR_14)
{
 int VAR_15 = 0;
 struct whcrc *VAR_16 = VAR_12->priv;
 struct device *VAR_17 = &VAR_16->umc_dev->dev;
 u32 VAR_18;

 if (VAR_14 >= 4096)
  return -VAR_0;







 if (FUNC_1(VAR_16->rc_base + VAR_10) & VAR_11) {
  FUNC_0(VAR_17, "requesting reset of halted radio controller\n");
  FUNC_7(VAR_12);
  return -VAR_1;
 }

 VAR_15 = FUNC_8(VAR_16->cmd_wq,
  !(FUNC_1(VAR_16->rc_base + VAR_4) & VAR_6), VAR_3/2);
 if (VAR_15 == 0) {
  FUNC_0(VAR_17, "device is not ready to execute commands\n");
  return -VAR_2;
 }

 FUNC_4(VAR_16->cmd_buf, VAR_13, VAR_14);
 FUNC_3(VAR_16->cmd_dma_buf, VAR_16->rc_base + VAR_5);

 FUNC_5(&VAR_16->irq_lock);
 VAR_18 = FUNC_1(VAR_16->rc_base + VAR_4);
 VAR_18 &= ~(VAR_7 | VAR_9);
 FUNC_2(VAR_18 | VAR_6 | VAR_8 | VAR_14,
    VAR_16->rc_base + VAR_4);
 FUNC_6(&VAR_16->irq_lock);

 return 0;
}
