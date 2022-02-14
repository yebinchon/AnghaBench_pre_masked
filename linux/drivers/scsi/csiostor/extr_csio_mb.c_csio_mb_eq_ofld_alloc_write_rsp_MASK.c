
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_eq_ofld_cmd {int physeqid_pkd; int eqid_pkd; int alloc_to_len16; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
struct csio_eq_params {int eqid; int physeqid; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct csio_hw *VAR_1,
    struct csio_mb *VAR_2, enum fw_retval *VAR_3,
    struct csio_eq_params *VAR_4)
{
 struct fw_eq_ofld_cmd *VAR_5 = (struct fw_eq_ofld_cmd *)(VAR_2->mb);

 *VAR_3 = FUNC_0(FUNC_3(VAR_5->alloc_to_len16));

 if (*VAR_3 == VAR_0) {
  VAR_4->eqid = FUNC_1(
      FUNC_3(VAR_5->eqid_pkd));
  VAR_4->physeqid = FUNC_2(
      FUNC_3(VAR_5->physeqid_pkd));
 } else
  VAR_4->eqid = 0;

}
