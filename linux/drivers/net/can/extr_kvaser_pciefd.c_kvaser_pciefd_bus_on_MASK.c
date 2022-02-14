
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ rxerr; scalar_t__ txerr; } ;
struct TYPE_3__ {int dev; int state; } ;
struct kvaser_pciefd_can {scalar_t__ err_rep_cnt; TYPE_2__ bec; TYPE_1__ can; scalar_t__ reg_base; int start_comp; int lock; int flush_comp; int bec_poll_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct kvaser_pciefd_can*) ;
 int FUNC_5 (struct kvaser_pciefd_can*) ;
 int FUNC_6 (struct kvaser_pciefd_can*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct kvaser_pciefd_can *VAR_9)
{
 u32 VAR_10;
 unsigned long VAR_11;

 FUNC_1(&VAR_9->bec_poll_timer);

 if (!FUNC_0(&VAR_9->flush_comp))
  FUNC_6(VAR_9);

 if (!FUNC_11(&VAR_9->flush_comp,
      VAR_8)) {
  FUNC_7(VAR_9->can.dev, "Timeout during bus on flush\n");
  return -VAR_1;
 }

 FUNC_9(&VAR_9->lock, VAR_11);
 FUNC_3(0, VAR_9->reg_base + VAR_2);
 FUNC_3(-1, VAR_9->reg_base + VAR_4);

 FUNC_3(VAR_3 | VAR_5,
    VAR_9->reg_base + VAR_2);

 VAR_10 = FUNC_2(VAR_9->reg_base + VAR_6);
 VAR_10 &= ~VAR_7;
 FUNC_3(VAR_10, VAR_9->reg_base + VAR_6);
 FUNC_10(&VAR_9->lock, VAR_11);

 if (!FUNC_11(&VAR_9->start_comp,
      VAR_8)) {
  FUNC_7(VAR_9->can.dev, "Timeout during bus on reset\n");
  return -VAR_1;
 }

 FUNC_3(0, VAR_9->reg_base + VAR_2);
 FUNC_3(-1, VAR_9->reg_base + VAR_4);

 FUNC_4(VAR_9);
 FUNC_5(VAR_9);

 VAR_9->can.state = VAR_0;
 FUNC_8(VAR_9->can.dev);
 VAR_9->bec.txerr = 0;
 VAR_9->bec.rxerr = 0;
 VAR_9->err_rep_cnt = 0;

 return 0;
}
