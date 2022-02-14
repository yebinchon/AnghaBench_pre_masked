
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ first_desc; scalar_t__ last_desc; int src_port; scalar_t__ hw_owned; } ;
union desc_stat {TYPE_4__ rx; int data; } ;
struct net_device {int dummy; } ;
struct ksz_desc_info {int alloc; int next; int mask; struct ksz_desc* ring; } ;
struct ksz_hw {int dev_count; TYPE_3__* port_info; struct ksz_desc_info rx_desc_info; } ;
struct ksz_desc {TYPE_2__* phw; } ;
struct dev_info {struct ksz_hw hw; } ;
struct TYPE_7__ {struct net_device* pdev; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_1__ ctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ksz_desc*) ;
 scalar_t__ FUNC_4 (struct net_device*,struct ksz_hw*,struct ksz_desc*,union desc_stat) ;

__attribute__((used)) static int FUNC_5(struct dev_info *VAR_0)
{
 int VAR_1;
 union desc_stat VAR_2;
 struct ksz_hw *VAR_3 = &VAR_0->hw;
 struct net_device *VAR_4 = VAR_3->port_info[0].pdev;
 struct ksz_desc_info *VAR_5 = &VAR_3->rx_desc_info;
 int VAR_6 = VAR_5->alloc;
 struct ksz_desc *VAR_7;
 int VAR_8 = 0;

 VAR_1 = VAR_5->next;
 while (VAR_6--) {

  VAR_7 = &VAR_5->ring[VAR_1];
  VAR_2.data = FUNC_1(VAR_7->phw->ctrl.data);
  if (VAR_2.rx.hw_owned)
   break;

  if (VAR_3->dev_count > 1) {

   int VAR_9 = FUNC_0(VAR_2.rx.src_port);

   VAR_4 = VAR_3->port_info[VAR_9].pdev;
   if (!FUNC_2(VAR_4))
    goto release_packet;
  }


  if (VAR_2.rx.last_desc && VAR_2.rx.first_desc) {
   if (FUNC_4(VAR_4, VAR_3, VAR_7, VAR_2))
    goto release_packet;
   VAR_8++;
  }

release_packet:
  FUNC_3(VAR_7);
  VAR_1++;
  VAR_1 &= VAR_5->mask;
 }
 VAR_5->next = VAR_1;

 return VAR_8;
}
