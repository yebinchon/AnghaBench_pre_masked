
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int error; scalar_t__ first_desc; scalar_t__ last_desc; int src_port; scalar_t__ hw_owned; } ;
union desc_stat {int data; TYPE_4__ rx; } ;
struct net_device {int dummy; } ;
struct ksz_desc_info {int alloc; int next; int mask; struct ksz_desc* ring; } ;
struct ksz_hw {int dev_count; TYPE_3__* port_info; struct ksz_desc_info rx_desc_info; } ;
struct ksz_desc {TYPE_2__* phw; } ;
struct TYPE_10__ {int * counter; } ;
struct dev_priv {TYPE_5__ port; } ;
struct dev_info {struct ksz_hw hw; } ;
struct TYPE_8__ {struct net_device* pdev; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_7__ {TYPE_1__ ctrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ksz_desc*) ;
 scalar_t__ FUNC_5 (struct net_device*,struct ksz_hw*,struct ksz_desc*,union desc_stat) ;

__attribute__((used)) static int FUNC_6(struct dev_info *VAR_3)
{
 int VAR_4;
 union desc_stat VAR_5;
 struct ksz_hw *VAR_6 = &VAR_3->hw;
 struct net_device *VAR_7 = VAR_6->port_info[0].pdev;
 struct ksz_desc_info *VAR_8 = &VAR_6->rx_desc_info;
 int VAR_9 = VAR_8->alloc;
 struct ksz_desc *VAR_10;
 int VAR_11 = 0;

 VAR_4 = VAR_8->next;
 while (VAR_9--) {

  VAR_10 = &VAR_8->ring[VAR_4];
  VAR_5.data = FUNC_1(VAR_10->phw->ctrl.data);
  if (VAR_5.rx.hw_owned)
   break;

  if (VAR_6->dev_count > 1) {

   int VAR_12 = FUNC_0(VAR_5.rx.src_port);

   VAR_7 = VAR_6->port_info[VAR_12].pdev;
   if (!FUNC_3(VAR_7))
    goto release_packet;
  }


  if (VAR_5.rx.last_desc && VAR_5.rx.first_desc) {





   if (!VAR_5.rx.error || (VAR_5.data &
     VAR_0) ==
     VAR_1) {
    if (FUNC_5(VAR_7, VAR_6, VAR_10, VAR_5))
     goto release_packet;
    VAR_11++;
   } else {
    struct dev_priv *VAR_13 = FUNC_2(VAR_7);


    VAR_13->port.counter[VAR_2]++;
   }
  }

release_packet:
  FUNC_4(VAR_10);
  VAR_4++;
  VAR_4 &= VAR_8->mask;
 }
 VAR_8->next = VAR_4;

 return VAR_11;
}
