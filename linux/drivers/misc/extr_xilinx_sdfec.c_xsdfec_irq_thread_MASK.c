
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xsdfec_dev {int irq; int uecc_count; int isr_err_count; int stats_updated; int state_updated; int waitq; int dev; int flags; int error_data_lock; void* state; int cecc_count; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xsdfec_dev*,int) ;
 int FUNC_7 (struct xsdfec_dev*,int) ;
 int FUNC_8 (struct xsdfec_dev*,int ) ;
 int FUNC_9 (struct xsdfec_dev*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_9, void *VAR_10)
{
 struct xsdfec_dev *VAR_11 = VAR_10;
 irqreturn_t VAR_12 = VAR_0;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;

 FUNC_0(VAR_11->irq != VAR_9);


 FUNC_7(VAR_11, 0);
 FUNC_6(VAR_11, 0);

 VAR_13 = FUNC_8(VAR_11, VAR_3);
 VAR_14 = FUNC_8(VAR_11, VAR_5);

 FUNC_9(VAR_11, VAR_3, VAR_13);
 FUNC_9(VAR_11, VAR_5, VAR_14);

 VAR_19 = VAR_13 & VAR_2;

 VAR_15 = FUNC_2(VAR_19);

 VAR_18 = FUNC_2(VAR_13);

 VAR_16 = VAR_18 - 2 * VAR_15;

 VAR_17 = FUNC_2(VAR_14);
 FUNC_1(VAR_11->dev, "tmp=%x, uecc=%x, aecc=%x, cecc=%x, isr=%x", VAR_19,
  VAR_15, VAR_18, VAR_16, VAR_17);
 FUNC_1(VAR_11->dev, "uecc=%x, cecc=%x, isr=%x", VAR_11->uecc_count,
  VAR_11->cecc_count, VAR_11->isr_err_count);

 FUNC_3(&VAR_11->error_data_lock, VAR_11->flags);

 if (VAR_15)
  VAR_11->uecc_count += VAR_15;

 if (VAR_16)
  VAR_11->cecc_count += VAR_16;

 if (VAR_17)
  VAR_11->isr_err_count += VAR_17;


 if (VAR_15) {
  if (VAR_13 & VAR_4)
   VAR_11->state = VAR_6;
  else if (VAR_13 & VAR_7)
   VAR_11->state = VAR_8;
  VAR_11->stats_updated = 1;
  VAR_11->state_updated = 1;
 }

 if (VAR_16)
  VAR_11->stats_updated = 1;

 if (VAR_17) {
  VAR_11->state = VAR_6;
  VAR_11->stats_updated = 1;
  VAR_11->state_updated = 1;
 }

 FUNC_4(&VAR_11->error_data_lock, VAR_11->flags);
 FUNC_1(VAR_11->dev, "state=%x, stats=%x", VAR_11->state_updated,
  VAR_11->stats_updated);


 if (VAR_11->state_updated || VAR_11->stats_updated)
  FUNC_5(&VAR_11->waitq);
 else
  VAR_12 = VAR_1;


 FUNC_7(VAR_11, 1);
 FUNC_6(VAR_11, 1);

 return VAR_12;
}
