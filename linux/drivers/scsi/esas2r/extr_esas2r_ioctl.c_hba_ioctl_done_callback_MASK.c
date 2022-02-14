
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esas2r_request {int dummy; } ;
struct esas2r_adapter {int index; } ;
struct atto_hba_get_adapter_info {int num_busses; int num_lunsper_targ; scalar_t__ num_targsper_bus; int drvr_name; int drvr_rev_ascii; int drvr_rev_minor; int drvr_rev_major; } ;
struct TYPE_2__ {struct atto_hba_get_adapter_info get_adap_info; } ;
struct atto_ioctl {scalar_t__ function; TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct esas2r_adapter *VAR_7,
        struct esas2r_request *VAR_8, void *VAR_9)
{
 struct atto_ioctl *VAR_10 =
  (struct atto_ioctl *)VAR_6;

 FUNC_0("hba_ioctl_done_callback %d", VAR_7->index);

 if (VAR_10->function == VAR_0) {
  struct atto_hba_get_adapter_info *VAR_11 =
   &VAR_10->data.get_adap_info;

  FUNC_0("ATTO_FUNC_GET_ADAP_INFO");

  VAR_11->drvr_rev_major = VAR_2;
  VAR_11->drvr_rev_minor = VAR_4;

  FUNC_1(VAR_11->drvr_rev_ascii, VAR_5);
  FUNC_1(VAR_11->drvr_name, VAR_1);

  VAR_11->num_busses = 1;
  VAR_11->num_targsper_bus = VAR_3 + 1;
  VAR_11->num_lunsper_targ = 1;
 }
}
