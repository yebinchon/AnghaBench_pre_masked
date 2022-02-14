
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int dev; } ;
struct TYPE_4__ {int OutPktsUntagged; } ;
struct pcpu_secy_stats {int syncp; TYPE_1__ stats; } ;
struct TYPE_5__ {int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct macsec_secy {int tx_sc; int operational; int protect_frames; } ;
struct macsec_dev {struct macsec_secy secy; int real_dev; int stats; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int tx_sa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *,int ) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct sk_buff*,struct net_device*) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;
 struct macsec_dev* FUNC_9 (struct net_device*) ;
 struct pcpu_secy_stats* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_2,
         struct net_device *VAR_3)
{
 struct macsec_dev *VAR_4 = FUNC_9(VAR_3);
 struct macsec_secy *VAR_5 = &VAR_4->secy;
 struct pcpu_secy_stats *VAR_6;
 int VAR_7, VAR_8;


 if (!VAR_5->protect_frames) {
  VAR_6 = FUNC_10(VAR_4->stats);
  FUNC_11(&VAR_6->syncp);
  VAR_6->stats.OutPktsUntagged++;
  FUNC_12(&VAR_6->syncp);
  VAR_2->dev = VAR_4->real_dev;
  VAR_8 = VAR_2->len;
  VAR_7 = FUNC_3(VAR_2);
  FUNC_2(VAR_3, VAR_7, VAR_8);
  return VAR_7;
 }

 if (!VAR_5->operational) {
  FUNC_4(VAR_2);
  VAR_3->stats.tx_dropped++;
  return VAR_1;
 }

 VAR_2 = FUNC_6(VAR_2, VAR_3);
 if (FUNC_0(VAR_2)) {
  if (FUNC_1(VAR_2) != -VAR_0)
   VAR_3->stats.tx_dropped++;
  return VAR_1;
 }

 FUNC_5(VAR_2, &VAR_4->secy.tx_sc, FUNC_8(VAR_2)->tx_sa);

 FUNC_7(VAR_2, VAR_3);
 VAR_8 = VAR_2->len;
 VAR_7 = FUNC_3(VAR_2);
 FUNC_2(VAR_3, VAR_7, VAR_8);
 return VAR_7;
}
