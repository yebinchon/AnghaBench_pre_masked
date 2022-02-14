
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pqi_event {int ofa_cancel_reason; int ofa_bytes_requested; int event_id; } ;
struct pqi_ctrl_info {int ofa_mutex; int ctrl_id; TYPE_1__* pci_dev; scalar_t__ soft_reset_handshake_supported; } ;
typedef enum pqi_soft_reset_status { ____Placeholder_pqi_soft_reset_status } pqi_soft_reset_status ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pqi_ctrl_info*,struct pqi_event*) ;
 int FUNC_6 (struct pqi_ctrl_info*) ;
 int FUNC_7 (struct pqi_ctrl_info*) ;
 int FUNC_8 (struct pqi_ctrl_info*) ;
 int FUNC_9 (struct pqi_ctrl_info*,int ) ;
 int FUNC_10 (struct pqi_ctrl_info*) ;
 int FUNC_11 (struct pqi_ctrl_info*,int) ;

__attribute__((used)) static void FUNC_12(struct pqi_ctrl_info *VAR_4,
 struct pqi_event *VAR_5)
{
 u16 VAR_6;
 enum pqi_soft_reset_status VAR_7;

 VAR_6 = FUNC_1(&VAR_5->event_id);

 FUNC_3(&VAR_4->ofa_mutex);

 if (VAR_6 == VAR_2) {
  FUNC_0(&VAR_4->pci_dev->dev,
    "Received Online Firmware Activation quiesce event for controller %u\n",
    VAR_4->ctrl_id);
  FUNC_6(VAR_4);
  FUNC_5(VAR_4, VAR_5);
  if (VAR_4->soft_reset_handshake_supported) {
   VAR_7 = FUNC_10(VAR_4);
   FUNC_11(VAR_4, VAR_7);
  } else {
   FUNC_11(VAR_4,
     VAR_3);
  }

 } else if (VAR_6 == VAR_1) {
  FUNC_5(VAR_4, VAR_5);
  FUNC_9(VAR_4,
   FUNC_2(VAR_5->ofa_bytes_requested));
  FUNC_8(VAR_4);
 } else if (VAR_6 == VAR_0) {
  FUNC_7(VAR_4);
  FUNC_5(VAR_4, VAR_5);
  FUNC_0(&VAR_4->pci_dev->dev,
    "Online Firmware Activation(%u) cancel reason : %u\n",
    VAR_4->ctrl_id, VAR_5->ofa_cancel_reason);
 }

 FUNC_4(&VAR_4->ofa_mutex);
}
