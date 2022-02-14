
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iq_cmd {int fl1id; int fl0id; int iqid; int physiqid; int alloc_to_len16; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_iq_params {void* fl1id; void* fl0id; void* iqid; void* physiqid; } ;
struct csio_hw {int dummy; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

void
FUNC_3(struct csio_hw *VAR_1, struct csio_mb *VAR_2,
      enum fw_retval *VAR_3,
      struct csio_iq_params *VAR_4)
{
 struct fw_iq_cmd *VAR_5 = (struct fw_iq_cmd *)(VAR_2->mb);

 *VAR_3 = FUNC_0(FUNC_1(VAR_5->alloc_to_len16));
 if (*VAR_3 == VAR_0) {
  VAR_4->physiqid = FUNC_2(VAR_5->physiqid);
  VAR_4->iqid = FUNC_2(VAR_5->iqid);
  VAR_4->fl0id = FUNC_2(VAR_5->fl0id);
  VAR_4->fl1id = FUNC_2(VAR_5->fl1id);
 } else {
  VAR_4->physiqid = VAR_4->iqid =
  VAR_4->fl0id = VAR_4->fl1id = 0;
 }
}
