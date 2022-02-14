
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct octeon_soft_command {int caller_is_done; int sc_status; int complete; int iq_no; scalar_t__ virtdptr; scalar_t__ virtrptr; } ;
struct octeon_device {TYPE_4__* pci_dev; } ;
struct TYPE_10__ {int value1; } ;
struct oct_mdio_cmd_resp {int status; TYPE_5__ resp; } ;
struct oct_mdio_cmd {int op; int mdio_addr; int value1; } ;
struct TYPE_8__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {int q_no; } ;
struct TYPE_7__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct octeon_device*,int,int,int ) ;
 int FUNC_4 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_5 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct octeon_device*,struct octeon_soft_command*,int ) ;

__attribute__((used)) static int
FUNC_9(struct lio *VAR_6, int VAR_7, int VAR_8, int *VAR_9)
{
 struct octeon_device *VAR_10 = VAR_6->oct_dev;
 struct octeon_soft_command *VAR_11;
 struct oct_mdio_cmd_resp *VAR_12;
 struct oct_mdio_cmd *VAR_13;
 int VAR_14 = 0;

 VAR_11 = (struct octeon_soft_command *)
  FUNC_3(VAR_10,
       sizeof(struct oct_mdio_cmd),
       sizeof(struct oct_mdio_cmd_resp), 0);

 if (!VAR_11)
  return -VAR_1;

 VAR_12 = (struct oct_mdio_cmd_resp *)VAR_11->virtrptr;
 VAR_13 = (struct oct_mdio_cmd *)VAR_11->virtdptr;

 VAR_13->op = VAR_7;
 VAR_13->mdio_addr = VAR_8;
 if (VAR_7)
  VAR_13->value1 = *VAR_9;
 FUNC_7((u64 *)VAR_13, sizeof(struct oct_mdio_cmd) / 8);

 VAR_11->iq_no = VAR_6->linfo.txpciq[0].s.q_no;

 FUNC_5(VAR_10, VAR_11, VAR_4, VAR_5,
        0, 0, 0);

 FUNC_2(&VAR_11->complete);
 VAR_11->sc_status = VAR_3;

 VAR_14 = FUNC_6(VAR_10, VAR_11);
 if (VAR_14 == VAR_2) {
  FUNC_1(&VAR_10->pci_dev->dev,
   "octnet_mdio45_access instruction failed status: %x\n",
   VAR_14);
  FUNC_4(VAR_10, VAR_11);
  return -VAR_0;
 } else {



  VAR_14 = FUNC_8(VAR_10, VAR_11, 0);
  if (VAR_14)
   return VAR_14;

  VAR_14 = VAR_12->status;
  if (VAR_14) {
   FUNC_1(&VAR_10->pci_dev->dev,
    "octnet mdio45 access failed: %x\n", VAR_14);
   FUNC_0(VAR_11->caller_is_done, 1);
   return -VAR_0;
  }

  FUNC_7((u64 *)(&VAR_12->resp),
        sizeof(struct oct_mdio_cmd) / 8);

  if (!VAR_7)
   *VAR_9 = VAR_12->resp.value1;

  FUNC_0(VAR_11->caller_is_done, 1);
 }

 return VAR_14;
}
