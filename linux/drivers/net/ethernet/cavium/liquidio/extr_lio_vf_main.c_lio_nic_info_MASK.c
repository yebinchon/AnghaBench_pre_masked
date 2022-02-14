
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union oct_link_status {int dummy; } oct_link_status ;
typedef int u64 ;
struct TYPE_6__ {int gmxport; } ;
struct TYPE_7__ {TYPE_2__ r_nic_info; } ;
struct octeon_recv_pkt {scalar_t__* buffer_size; int buffer_count; int * buffer_ptr; TYPE_3__ rh; } ;
struct octeon_recv_info {struct octeon_recv_pkt* recv_pkt; } ;
struct octeon_device {int ifcount; TYPE_4__* props; TYPE_1__* pci_dev; } ;
struct TYPE_8__ {int gmxport; int netdev; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct octeon_recv_info*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,union oct_link_status*) ;

__attribute__((used)) static int FUNC_6(struct octeon_recv_info *VAR_1, void *VAR_2)
{
 struct octeon_device *VAR_3 = (struct octeon_device *)VAR_2;
 struct octeon_recv_pkt *VAR_4 = VAR_1->recv_pkt;
 union oct_link_status *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 if (VAR_4->buffer_size[0] != (sizeof(*VAR_5) + VAR_0)) {
  FUNC_0(&VAR_3->pci_dev->dev, "Malformed NIC_INFO, len=%d, ifidx=%d\n",
   VAR_4->buffer_size[0],
   VAR_4->rh.r_nic_info.gmxport);
  goto nic_info_err;
 }

 VAR_6 = VAR_4->rh.r_nic_info.gmxport;
 VAR_5 = (union oct_link_status *)(FUNC_1(VAR_4->buffer_ptr[0]) +
  VAR_0);

 FUNC_3((u64 *)VAR_5, (sizeof(union oct_link_status)) >> 3);

 for (VAR_7 = 0; VAR_7 < VAR_3->ifcount; VAR_7++) {
  if (VAR_3->props[VAR_7].gmxport == VAR_6) {
   FUNC_5(VAR_3->props[VAR_7].netdev, VAR_5);
   break;
  }
 }

nic_info_err:
 for (VAR_7 = 0; VAR_7 < VAR_4->buffer_count; VAR_7++)
  FUNC_4(VAR_4->buffer_ptr[VAR_7]);
 FUNC_2(VAR_1);
 return 0;
}
