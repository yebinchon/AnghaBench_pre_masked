
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u64 ;
struct TYPE_7__ {int cmd; int resp_needed; int len; void* type; int params; } ;
struct TYPE_8__ {TYPE_3__ s; } ;
struct octeon_mbox_cmd {int * data; TYPE_4__ msg; } ;
struct octeon_mbox {size_t q_no; struct octeon_device* oct_dev; } ;
struct TYPE_5__ {int * dpiring_to_vfpcidev_lut; } ;
struct octeon_device {TYPE_2__* pci_dev; TYPE_1__ sriov_info; int pfvf_hsword; } ;
struct oct_vf_stats {int dummy; } ;
struct lio_version {int micro; int minor; int major; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_device*) ;

 void* VAR_3 ;



 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (struct octeon_device*,struct oct_vf_stats*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct octeon_device*,struct octeon_mbox_cmd*) ;
 int FUNC_6 (struct octeon_device*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct octeon_mbox *VAR_4,
       struct octeon_mbox_cmd *VAR_5)
{
 struct octeon_device *VAR_6 = VAR_4->oct_dev;

 switch (VAR_5->msg.s.cmd) {
 case 129:
  FUNC_1(&VAR_6->pci_dev->dev, "got vfactive sending data back\n");
  VAR_5->msg.s.type = VAR_3;
  VAR_5->msg.s.resp_needed = 1;
  VAR_5->msg.s.len = 2;
  VAR_5->data[0] = 0;
  ((struct lio_version *)&VAR_5->data[0])->major =
   VAR_0;
  ((struct lio_version *)&VAR_5->data[0])->minor =
   VAR_2;
  ((struct lio_version *)&VAR_5->data[0])->micro =
   VAR_1;
  FUNC_4(VAR_5->msg.s.params, (uint8_t *)&VAR_6->pfvf_hsword, 6);

  FUNC_5(VAR_6, VAR_5);
  break;

 case 128:
  FUNC_2(&VAR_6->pci_dev->dev,
    "got a request for FLR from VF that owns DPI ring %u\n",
    VAR_4->q_no);
  FUNC_7(VAR_6->sriov_info.dpiring_to_vfpcidev_lut[VAR_4->q_no]);
  break;

 case 130:
  if (FUNC_0(VAR_6))
   FUNC_6(VAR_6,
           VAR_5->msg.s.params);
  break;

 case 131:
  FUNC_1(&VAR_6->pci_dev->dev, "Got VF stats request. Sending data back\n");
  VAR_5->msg.s.type = VAR_3;
  VAR_5->msg.s.resp_needed = 1;
  VAR_5->msg.s.len = 1 +
   sizeof(struct oct_vf_stats) / sizeof(u64);
  FUNC_3(VAR_6, (struct oct_vf_stats *)VAR_5->data);
  FUNC_5(VAR_6, VAR_5);
  break;
 default:
  break;
 }
 return 0;
}
