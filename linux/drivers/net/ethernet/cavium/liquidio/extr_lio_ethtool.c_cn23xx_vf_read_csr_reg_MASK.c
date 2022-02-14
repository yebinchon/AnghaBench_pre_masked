
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int rings_per_vf; } ;
struct octeon_device {TYPE_1__ sriov_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct octeon_device*,int) ;
 scalar_t__ FUNC_13 (char*,char*,...) ;

__attribute__((used)) static int FUNC_14(char *VAR_2, struct octeon_device *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;
 int VAR_6;



 VAR_4 += FUNC_13(VAR_2 + VAR_4, "\n\t Octeon CSR Registers\n\n");

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_6(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_OUT_SIZE): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_2(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT_IN_DONE%d_CNTS): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_7(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_SLIST_BAOFF_DBELL): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_11(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_SLIST_FIFO_RSIZE): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_9(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d__OUTPUT_CONTROL): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_5(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_SLIST_BADDR): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_10(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_INT_LEVELS): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_8(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4, "\n[%08x] (SLI_PKT%d_CNTS): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = 0x100c0 + VAR_6 * VAR_1;
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_ERROR_INFO): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = 0x100d0 + VAR_6 * VAR_0;
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_VF_INT_SUM): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_3(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_INPUT_CONTROL): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_0(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_INSTR_BADDR): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_1(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_INSTR_BAOFF_DBELL): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_4(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT%d_INSTR_FIFO_RSIZE): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 for (VAR_6 = 0; VAR_6 < (VAR_3->sriov_info.rings_per_vf); VAR_6++) {
  VAR_5 = FUNC_2(VAR_6);
  VAR_4 += FUNC_13(VAR_2 + VAR_4,
          "\n[%08x] (SLI_PKT_IN_DONE%d_CNTS): %016llx\n",
          VAR_5, VAR_6, (u64)FUNC_12(VAR_3, VAR_5));
 }

 return VAR_4;
}
