
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_3__ {int roce_edpm_mode; int min_dpis; } ;
struct TYPE_4__ {TYPE_1__ rdma_pf_params; } ;
struct qed_hwfn {int num_hwfns; int dpi_count; int dpi_start_offset; TYPE_2__ pf_params; int dpi_size; scalar_t__ wid_count; scalar_t__ dcbx_no_edpm; struct qed_hwfn* cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,char*,int,int,...) ;
 int FUNC_1 (struct qed_hwfn*,char*,int,int,int ,int,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct qed_hwfn*,int ,int *) ;
 int FUNC_5 (struct qed_hwfn*,int ) ;
 int FUNC_6 (struct qed_hwfn*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int,int) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static int
FUNC_12(struct qed_hwfn *VAR_12, struct qed_ptt *VAR_13)
{
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 u32 VAR_18, VAR_19 = 1;
 u32 VAR_20;
 u32 VAR_21;
 int VAR_22 = 0;
 u8 VAR_23;

 VAR_18 = FUNC_7(VAR_12, VAR_13, VAR_0);
 if (VAR_12->cdev->num_hwfns > 1)
  VAR_18 /= 2;


 VAR_16 = FUNC_5(VAR_12, VAR_5) +
         FUNC_4(VAR_12, VAR_5,
         ((void*)0)) +
         FUNC_4(VAR_12, VAR_6,
         ((void*)0));
 VAR_15 = FUNC_11(VAR_8 * VAR_16, VAR_4);
 VAR_17 = VAR_15 / 4096;
 VAR_14 = VAR_18 - VAR_15;


 if (VAR_18 < VAR_15) {
  FUNC_0(VAR_12->cdev,
         "Doorbell BAR size 0x%x is too small (normal region is 0x%0x )\n",
         VAR_18, VAR_15);
  return -VAR_3;
 }

 if (VAR_14 < VAR_7) {
  FUNC_0(VAR_12->cdev,
         "PWM region size 0x%0x is too small. Should be at least 0x%0x (Doorbell BAR size is 0x%x and normal region size is 0x%0x)\n",
         VAR_14,
         VAR_7, VAR_18, VAR_15);
  return -VAR_3;
 }


 VAR_20 = VAR_12->pf_params.rdma_pf_params.roce_edpm_mode;
 if ((VAR_20 == VAR_10) ||
     ((VAR_20 == VAR_11))) {



  VAR_19 = FUNC_3();
  VAR_22 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_19);
 }

 VAR_23 = (VAR_22 && (VAR_20 == VAR_10)) ||
        (VAR_20 == VAR_9);
 if (VAR_23 || VAR_12->dcbx_no_edpm) {




  VAR_19 = 1;
  VAR_22 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_19);

  if (VAR_23)
   FUNC_9(VAR_12, VAR_13);
 }

 VAR_12->wid_count = (u16) VAR_19;

 FUNC_1(VAR_12,
  "doorbell bar: normal_region_size=%d, pwm_region_size=%d, dpi_size=%d, dpi_count=%d, roce_edpm=%s, page_size=%lu\n",
  VAR_15,
  VAR_14,
  VAR_12->dpi_size,
  VAR_12->dpi_count,
  (!FUNC_6(VAR_12)) ?
  "disabled" : "enabled", VAR_4);

 if (VAR_22) {
  FUNC_0(VAR_12,
         "Failed to allocate enough DPIs. Allocated %d but the current minimum is %d.\n",
         VAR_12->dpi_count,
         VAR_12->pf_params.rdma_pf_params.min_dpis);
  return -VAR_3;
 }

 VAR_12->dpi_start_offset = VAR_15;


 VAR_21 = FUNC_2(VAR_8 / 4);
 FUNC_10(VAR_12, VAR_13, VAR_1, VAR_21);
 FUNC_10(VAR_12, VAR_13, VAR_2, VAR_17);

 return 0;
}
