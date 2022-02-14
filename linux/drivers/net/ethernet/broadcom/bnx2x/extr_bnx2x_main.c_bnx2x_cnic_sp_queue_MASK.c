
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct kwqe_16 {int dummy; } ;
struct TYPE_6__ {int lo; int hi; } ;
struct TYPE_7__ {TYPE_2__ update_data_addr; } ;
struct TYPE_5__ {int type; int conn_and_cmd_data; } ;
struct eth_spe {TYPE_3__ data; TYPE_1__ hdr; } ;
struct TYPE_8__ {scalar_t__ max_kwqe_pending; } ;
struct bnx2x {scalar_t__ recovery_state; scalar_t__ cnic_spq_pending; TYPE_4__ cnic_eth_dev; int spq_lock; struct eth_spe* cnic_kwq_prod; struct eth_spe* cnic_kwq; struct eth_spe* cnic_kwq_last; int cnic_kwq_pending; int panic; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6,
          struct kwqe_16 *VAR_7[], u32 VAR_8)
{
 struct bnx2x *VAR_9 = FUNC_3(VAR_6);
 int VAR_10;
 if ((VAR_9->recovery_state != VAR_1) &&
     (VAR_9->recovery_state != VAR_2)) {
  FUNC_0("Handling parity error recovery. Try again later\n");
  return -VAR_3;
 }

 FUNC_4(&VAR_9->spq_lock);

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  struct eth_spe *VAR_11 = (struct eth_spe *)VAR_7[VAR_10];

  if (VAR_9->cnic_kwq_pending == VAR_5)
   break;

  *VAR_9->cnic_kwq_prod = *VAR_11;

  VAR_9->cnic_kwq_pending++;

  FUNC_1(VAR_0, "L5 SPQE %x %x %x:%x pos %d\n",
     VAR_11->hdr.conn_and_cmd_data, VAR_11->hdr.type,
     VAR_11->data.update_data_addr.hi,
     VAR_11->data.update_data_addr.lo,
     VAR_9->cnic_kwq_pending);

  if (VAR_9->cnic_kwq_prod == VAR_9->cnic_kwq_last)
   VAR_9->cnic_kwq_prod = VAR_9->cnic_kwq;
  else
   VAR_9->cnic_kwq_prod++;
 }

 FUNC_5(&VAR_9->spq_lock);

 if (VAR_9->cnic_spq_pending < VAR_9->cnic_eth_dev.max_kwqe_pending)
  FUNC_2(VAR_9, 0);

 return VAR_10;
}
