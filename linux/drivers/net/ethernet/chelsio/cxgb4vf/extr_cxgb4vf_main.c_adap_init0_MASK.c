
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sge_params {int sge_ingress_rx_threshold; int sge_timer_value_4_and_5; int sge_timer_value_2_and_3; int sge_timer_value_0_and_1; } ;
struct sge {int * counter_val; void** timer_val; } ;
struct TYPE_5__ {scalar_t__ pmask; scalar_t__ nvi; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_6__ {TYPE_2__ vfres; TYPE_1__ rss; struct sge_params sge; } ;
struct adapter {int flags; int pdev_dev; TYPE_3__ params; struct sge sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (struct adapter*,int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct adapter*) ;
 int FUNC_15 (struct adapter*) ;
 int FUNC_16 (struct adapter*) ;
 int FUNC_17 (struct adapter*,int,int*,int*) ;
 int FUNC_18 (struct adapter*) ;

__attribute__((used)) static int FUNC_19(struct adapter *VAR_5)
{
 struct sge_params *VAR_6 = &VAR_5->params.sge;
 struct sge *VAR_7 = &VAR_5->sge;
 int VAR_8;
 u32 VAR_9, VAR_10 = 0;
 VAR_8 = FUNC_11(VAR_5);
 if (VAR_8 < 0) {
  FUNC_9(VAR_5->pdev_dev, "FW reset failed: err=%d\n", VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_12(VAR_5);
 if (VAR_8) {
  FUNC_9(VAR_5->pdev_dev, "unable to retrieve adapter"
   " device parameters: err=%d\n", VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_16(VAR_5);
 if (VAR_8) {
  FUNC_9(VAR_5->pdev_dev, "unable to retrieve adapter"
   " VPD parameters: err=%d\n", VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_14(VAR_5);
 if (VAR_8) {
  FUNC_9(VAR_5->pdev_dev, "unable to retrieve adapter"
   " SGE parameters: err=%d\n", VAR_8);
  return VAR_8;
 }
 VAR_8 = FUNC_13(VAR_5);
 if (VAR_8) {
  FUNC_9(VAR_5->pdev_dev, "unable to retrieve adapter"
   " RSS parameters: err=%d\n", VAR_8);
  return VAR_8;
 }
 if (VAR_5->params.rss.mode !=
     VAR_4) {
  FUNC_9(VAR_5->pdev_dev, "unable to operate with global RSS"
   " mode %d\n", VAR_5->params.rss.mode);
  return -VAR_1;
 }
 VAR_8 = FUNC_18(VAR_5);
 if (VAR_8) {
  FUNC_9(VAR_5->pdev_dev, "unable to use adapter parameters:"
   " err=%d\n", VAR_8);
  return VAR_8;
 }






 VAR_9 = FUNC_0(VAR_2) |
  FUNC_1(VAR_3);
 VAR_10 = 1;
 (void) FUNC_17(VAR_5, 1, &VAR_9, &VAR_10);





 VAR_7->timer_val[0] = FUNC_8(VAR_5,
  FUNC_6(VAR_6->sge_timer_value_0_and_1));
 VAR_7->timer_val[1] = FUNC_8(VAR_5,
  FUNC_7(VAR_6->sge_timer_value_0_and_1));
 VAR_7->timer_val[2] = FUNC_8(VAR_5,
  FUNC_6(VAR_6->sge_timer_value_2_and_3));
 VAR_7->timer_val[3] = FUNC_8(VAR_5,
  FUNC_7(VAR_6->sge_timer_value_2_and_3));
 VAR_7->timer_val[4] = FUNC_8(VAR_5,
  FUNC_6(VAR_6->sge_timer_value_4_and_5));
 VAR_7->timer_val[5] = FUNC_8(VAR_5,
  FUNC_7(VAR_6->sge_timer_value_4_and_5));

 VAR_7->counter_val[0] = FUNC_2(VAR_6->sge_ingress_rx_threshold);
 VAR_7->counter_val[1] = FUNC_3(VAR_6->sge_ingress_rx_threshold);
 VAR_7->counter_val[2] = FUNC_4(VAR_6->sge_ingress_rx_threshold);
 VAR_7->counter_val[3] = FUNC_5(VAR_6->sge_ingress_rx_threshold);






 VAR_8 = FUNC_15(VAR_5);
 if (VAR_8) {
  FUNC_9(VAR_5->pdev_dev, "unable to get virtual interface"
   " resources: err=%d\n", VAR_8);
  return VAR_8;
 }


 if (VAR_5->params.vfres.pmask == 0) {
  FUNC_9(VAR_5->pdev_dev, "no port access configured\n"
   "usable!\n");
  return -VAR_1;
 }
 if (VAR_5->params.vfres.nvi == 0) {
  FUNC_9(VAR_5->pdev_dev, "no virtual interfaces configured/"
   "usable!\n");
  return -VAR_1;
 }




 FUNC_10(VAR_5);

 VAR_5->flags |= VAR_0;
 return 0;
}
