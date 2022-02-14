
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_eq_ofld_cmd {int eqaddr; int dcaen_to_eqsize; int fetchszm_to_iqid; int eqid_pkd; int alloc_to_len16; int op_to_vfn; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
struct csio_eq_params {int eqaddr; int eqsize; int cidxfthresh; int cidxfthresho; int fbmax; int fbmin; int dcacpu; int dcaen; int iqid; int pciechn; int cprio; int hostfcmode; int eqid; int vfn; int pfn; scalar_t__ eqstart; } ;


 int FUNC_0 (struct csio_mb*,struct fw_eq_ofld_cmd*,int,void*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;

__attribute__((used)) static void
FUNC_19(struct csio_hw *VAR_5, struct csio_mb *VAR_6, void *VAR_7,
        uint32_t VAR_8, bool VAR_9,
        struct csio_eq_params *VAR_10,
        void (*VAR_11) (struct csio_hw *, struct csio_mb *))
{
 struct fw_eq_ofld_cmd *VAR_12 = (struct fw_eq_ofld_cmd *)(VAR_6->mb);

 uint32_t VAR_13 = (VAR_10->eqstart) ?
    VAR_3 :
    VAR_4;






 if (!VAR_9)
  FUNC_0(VAR_6, VAR_12, VAR_8, VAR_7, VAR_11, 1);

 VAR_12->op_to_vfn |= FUNC_18(FUNC_2(VAR_2) |
    VAR_0 | VAR_1 |
    FUNC_15(VAR_10->pfn) |
    FUNC_16(VAR_10->vfn));
 VAR_12->alloc_to_len16 |= FUNC_18(VAR_13 |
          FUNC_1(sizeof(*VAR_12) / 16));

 VAR_12->eqid_pkd |= FUNC_18(FUNC_8(VAR_10->eqid));

 VAR_12->fetchszm_to_iqid |= FUNC_18(
  FUNC_12(VAR_10->hostfcmode) |
  FUNC_5(VAR_10->cprio) |
  FUNC_14(VAR_10->pciechn) |
  FUNC_13(VAR_10->iqid));

 VAR_12->dcaen_to_eqsize |= FUNC_18(
  FUNC_7(VAR_10->dcaen) |
  FUNC_6(VAR_10->dcacpu) |
  FUNC_11(VAR_10->fbmin) |
  FUNC_10(VAR_10->fbmax) |
  FUNC_3(VAR_10->cidxfthresho) |
  FUNC_4(VAR_10->cidxfthresh) |
  FUNC_9(VAR_10->eqsize));

 VAR_12->eqaddr |= FUNC_17(VAR_10->eqaddr);

}
