
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int enable_isr; int enable_ecc_isr; } ;
struct TYPE_4__ {int order; TYPE_1__ irq; int code_wr_protect; int bypass; } ;
struct xsdfec_dev {int state; TYPE_2__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct xsdfec_dev*,int ,int ,int *) ;
 int FUNC_1 (struct xsdfec_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct xsdfec_dev *VAR_11)
{
 u32 VAR_12;
 bool VAR_13;


 VAR_12 = FUNC_1(VAR_11, VAR_8);
 VAR_11->config.order = VAR_12;

 FUNC_0(VAR_11, VAR_2,
        0,
        &VAR_11->config.bypass);

 FUNC_0(VAR_11, VAR_3,
        0,
        &VAR_11->config.code_wr_protect);

 VAR_12 = FUNC_1(VAR_11, VAR_6);
 VAR_11->config.irq.enable_isr = (VAR_12 & VAR_7) > 0;

 VAR_12 = FUNC_1(VAR_11, VAR_4);
 VAR_11->config.irq.enable_ecc_isr =
  (VAR_12 & VAR_5) > 0;

 VAR_12 = FUNC_1(VAR_11, VAR_0);
 VAR_13 = (VAR_12 & VAR_1) > 0;
 if (VAR_13)
  VAR_11->state = VAR_9;
 else
  VAR_11->state = VAR_10;
}
