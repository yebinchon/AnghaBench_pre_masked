
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct net_device {int dummy; } ;
struct fza_private {scalar_t__ state_chg_flag; int ** rx_skbuff; scalar_t__* rx_dma; int bdev; int name; TYPE_1__* regs; int state_chg_wait; int lock; scalar_t__ state; int reset_timer; } ;
struct TYPE_2__ {int status; int control_a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 struct fza_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (char*,int ,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 long FUNC_11 (int ,scalar_t__,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_7)
{
 struct fza_private *VAR_8 = FUNC_4(VAR_7);
 unsigned long VAR_9;
 uint VAR_10;
 long VAR_11;
 int VAR_12;

 FUNC_5(VAR_7);
 FUNC_6("%s: queue stopped\n", VAR_8->name);

 FUNC_1(&VAR_8->reset_timer);
 FUNC_9(&VAR_8->lock, VAR_9);
 VAR_8->state = VAR_5;
 VAR_8->state_chg_flag = 0;

 FUNC_12(VAR_2, &VAR_8->regs->control_a);
 FUNC_8(&VAR_8->regs->control_a);
 FUNC_10(&VAR_8->lock, VAR_9);


 VAR_11 = FUNC_11(VAR_8->state_chg_wait, VAR_8->state_chg_flag,
          15 * VAR_6);
 VAR_10 = FUNC_0(FUNC_8(&VAR_8->regs->status));
 if (VAR_8->state_chg_flag == 0) {
  FUNC_7("%s: SHUT timed out!, state %x\n", VAR_8->name, VAR_10);
  return -VAR_1;
 }
 if (VAR_10 != VAR_5) {
  FUNC_7("%s: SHUT failed!, state %x\n", VAR_8->name, VAR_10);
  return -VAR_1;
 }
 FUNC_6("%s: SHUT: %lums elapsed\n", VAR_8->name,
   (15 * VAR_6 - VAR_11) * 1000 / VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  if (VAR_8->rx_skbuff[VAR_12]) {
   FUNC_3(VAR_8->bdev, VAR_8->rx_dma[VAR_12],
      VAR_4, VAR_0);
   FUNC_2(VAR_8->rx_skbuff[VAR_12]);
   VAR_8->rx_dma[VAR_12] = 0;
   VAR_8->rx_skbuff[VAR_12] = ((void*)0);
  }

 return 0;
}
