
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u32 ;
struct TYPE_5__ {int acaps32; int pcaps32; } ;
struct TYPE_4__ {int acap; int pcap; } ;
struct TYPE_6__ {TYPE_2__ info32; TYPE_1__ info; } ;
struct fw_port_cmd {TYPE_3__ u; int action_to_len16; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct csio_hw *VAR_2, struct csio_mb *VAR_3,
    enum fw_retval *VAR_4, uint16_t VAR_5,
    u32 *VAR_6, u32 *VAR_7)
{
 struct fw_port_cmd *VAR_8 = (struct fw_port_cmd *)(VAR_3->mb);

 *VAR_4 = FUNC_0(FUNC_3(VAR_8->action_to_len16));

 if (*VAR_4 == VAR_1) {
  if (VAR_5 == VAR_0) {
   *VAR_6 = FUNC_2(FUNC_4(VAR_8->u.info.pcap));
   *VAR_7 = FUNC_2(FUNC_4(VAR_8->u.info.acap));
  } else {
   *VAR_6 = FUNC_1(VAR_8->u.info32.pcaps32);
   *VAR_7 = FUNC_1(VAR_8->u.info32.acaps32);
  }
 }
}
