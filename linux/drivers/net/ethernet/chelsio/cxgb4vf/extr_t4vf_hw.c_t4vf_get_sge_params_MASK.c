
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct sge_params {unsigned int sge_host_page_size; unsigned int sge_egress_queues_per_page; unsigned int sge_ingress_queues_per_page; unsigned int sge_vf_hps; unsigned int sge_vf_eq_qpp; unsigned int sge_vf_iq_qpp; void* sge_congestion_control; void* sge_ingress_rx_threshold; void* sge_control2; void* sge_timer_value_4_and_5; void* sge_timer_value_2_and_3; void* sge_timer_value_0_and_1; void** sge_fl_buffer_size; void* sge_control; } ;
struct TYPE_2__ {int chip; struct sge_params sge; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int,void**,void**) ;

int FUNC_7(struct adapter *VAR_20)
{
 struct sge_params *VAR_21 = &VAR_20->params.sge;
 u32 VAR_22[7], VAR_23[7];
 int VAR_24;

 VAR_22[0] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_10));
 VAR_22[1] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_14));
 VAR_22[2] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_12));
 VAR_22[3] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_13));
 VAR_22[4] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_17));
 VAR_22[5] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_18));
 VAR_22[6] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_19));
 VAR_24 = FUNC_6(VAR_20, 7, VAR_22, VAR_23);
 if (VAR_24)
  return VAR_24;
 VAR_21->sge_control = VAR_23[0];
 VAR_21->sge_host_page_size = VAR_23[1];
 VAR_21->sge_fl_buffer_size[0] = VAR_23[2];
 VAR_21->sge_fl_buffer_size[1] = VAR_23[3];
 VAR_21->sge_timer_value_0_and_1 = VAR_23[4];
 VAR_21->sge_timer_value_2_and_3 = VAR_23[5];
 VAR_21->sge_timer_value_4_and_5 = VAR_23[6];
 if (!FUNC_4(VAR_20->params.chip)) {
  VAR_22[0] = (FUNC_0(VAR_0) |
        FUNC_1(VAR_9));
  VAR_24 = FUNC_6(VAR_20, 1, VAR_22, VAR_23);
  if (VAR_24 != VAR_1) {
   FUNC_2(VAR_20->pdev_dev,
    "Unable to get SGE Control2; "
    "probably old firmware.\n");
   return VAR_24;
  }
  VAR_21->sge_control2 = VAR_23[0];
 }

 VAR_22[0] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_16));
 VAR_22[1] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_8));
 VAR_24 = FUNC_6(VAR_20, 2, VAR_22, VAR_23);
 if (VAR_24)
  return VAR_24;
 VAR_21->sge_ingress_rx_threshold = VAR_23[0];
 VAR_21->sge_congestion_control = VAR_23[1];





 if (!FUNC_4(VAR_20->params.chip)) {
  unsigned int VAR_25, VAR_26, VAR_27;

  VAR_22[0] = (FUNC_0(VAR_0) |
        FUNC_1(
         VAR_11));
  VAR_22[1] = (FUNC_0(VAR_0) |
        FUNC_1(
         VAR_15));
  VAR_24 = FUNC_6(VAR_20, 2, VAR_22, VAR_23);
  if (VAR_24 != VAR_1) {
   FUNC_3(VAR_20->pdev_dev,
     "Unable to get VF SGE Queues/Page; "
     "probably old firmware.\n");
   return VAR_24;
  }
  VAR_21->sge_egress_queues_per_page = VAR_23[0];
  VAR_21->sge_ingress_queues_per_page = VAR_23[1];






  VAR_25 = FUNC_5(VAR_20);
  VAR_26 = (VAR_3 +
    (VAR_4 - VAR_3) * VAR_25);
  VAR_21->sge_vf_hps =
   ((VAR_21->sge_host_page_size >> VAR_26)
    & VAR_2);

  VAR_27 = (VAR_6 +
    (VAR_7 - VAR_6) * VAR_25);
  VAR_21->sge_vf_eq_qpp =
   ((VAR_21->sge_egress_queues_per_page >> VAR_27)
    & VAR_5);
  VAR_21->sge_vf_iq_qpp =
   ((VAR_21->sge_ingress_queues_per_page >> VAR_27)
    & VAR_5);
 }

 return 0;
}
