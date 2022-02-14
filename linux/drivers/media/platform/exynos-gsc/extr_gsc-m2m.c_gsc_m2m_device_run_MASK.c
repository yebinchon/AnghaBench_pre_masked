
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct gsc_ctx* ctx; } ;
struct gsc_dev {int slock; int irq_queue; TYPE_1__ m2m; int state; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {int addr; } ;
struct gsc_ctx {int state; TYPE_2__ d_frame; TYPE_3__ s_frame; struct gsc_dev* gsc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct gsc_ctx*) ;
 int FUNC_2 (struct gsc_dev*,int) ;
 int FUNC_3 (struct gsc_dev*,int) ;
 int FUNC_4 (struct gsc_ctx*) ;
 int FUNC_5 (struct gsc_dev*,int) ;
 int FUNC_6 (struct gsc_ctx*) ;
 int FUNC_7 (struct gsc_ctx*) ;
 int FUNC_8 (struct gsc_dev*,int *,int ) ;
 int FUNC_9 (struct gsc_dev*,int ,int) ;
 int FUNC_10 (struct gsc_ctx*) ;
 int FUNC_11 (struct gsc_ctx*) ;
 int FUNC_12 (struct gsc_ctx*) ;
 int FUNC_13 (struct gsc_ctx*) ;
 int FUNC_14 (struct gsc_dev*,int *,int ) ;
 int FUNC_15 (struct gsc_dev*,int ,int) ;
 int FUNC_16 (struct gsc_ctx*) ;
 int FUNC_17 (struct gsc_ctx*) ;
 int FUNC_18 (struct gsc_ctx*) ;
 int FUNC_19 (struct gsc_ctx*) ;
 int FUNC_20 (struct gsc_dev*,TYPE_3__*) ;
 scalar_t__ FUNC_21 (struct gsc_ctx*) ;
 int FUNC_22 (char*,struct gsc_ctx*,struct gsc_ctx*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static void FUNC_28(void *VAR_5)
{
 struct gsc_ctx *VAR_6 = VAR_5;
 struct gsc_dev *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 bool VAR_10 = 0;

 if (FUNC_0(!VAR_6, "null hardware context\n"))
  return;

 VAR_7 = VAR_6->gsc_dev;
 FUNC_25(&VAR_7->slock, VAR_8);

 FUNC_24(VAR_4, &VAR_7->state);


 if (VAR_7->m2m.ctx != VAR_6) {
  FUNC_22("gsc->m2m.ctx = 0x%p, current_ctx = 0x%p",
    VAR_7->m2m.ctx, VAR_6);
  VAR_6->state |= VAR_3;
  VAR_7->m2m.ctx = VAR_6;
 }

 VAR_10 = VAR_6->state & VAR_1;
 if (VAR_10) {
  VAR_6->state &= ~VAR_1;
  VAR_6->state |= VAR_0;
  FUNC_27(&VAR_7->irq_queue);
  goto put_device;
 }

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9) {
  FUNC_23("Wrong address");
  goto put_device;
 }

 FUNC_20(VAR_7, &VAR_6->s_frame);
 FUNC_8(VAR_7, &VAR_6->s_frame.addr, VAR_2);
 FUNC_14(VAR_7, &VAR_6->d_frame.addr, VAR_2);

 if (VAR_6->state & VAR_3) {
  FUNC_9(VAR_7, VAR_2, 0);
  FUNC_15(VAR_7, VAR_2, 0);
  FUNC_3(VAR_7, 0);
  FUNC_5(VAR_7, 1);

  if (FUNC_21(VAR_6)) {
   FUNC_23("Scaler setup error");
   goto put_device;
  }

  FUNC_10(VAR_6);
  FUNC_7(VAR_6);
  FUNC_6(VAR_6);

  FUNC_16(VAR_6);
  FUNC_13(VAR_6);
  FUNC_12(VAR_6);

  FUNC_17(VAR_6);
  FUNC_11(VAR_6);
  FUNC_18(VAR_6);
  FUNC_4(VAR_6);
 }


 FUNC_19(VAR_6);

 VAR_6->state &= ~VAR_3;
 FUNC_2(VAR_7, 1);

 FUNC_26(&VAR_7->slock, VAR_8);
 return;

put_device:
 VAR_6->state &= ~VAR_3;
 FUNC_26(&VAR_7->slock, VAR_8);
}
