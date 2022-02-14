
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int data; } ;
struct TYPE_4__ {int tx_window_errors; } ;
struct net_device {TYPE_2__ stats; struct airo_info* ml_priv; } ;
struct TYPE_3__ {int fid; struct sk_buff* skb; } ;
struct airo_info {int* fids; int sem; int flags; int jobs; TYPE_1__ xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct airo_info*,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4) {
 u16 VAR_5;
 int VAR_6;
 struct airo_info *VAR_7 = VAR_4->ml_priv;
 struct sk_buff *VAR_8 = VAR_7->xmit.skb;
 int VAR_9 = VAR_7->xmit.fid;
 u32 *VAR_10 = VAR_7->fids;

 FUNC_0(VAR_1, &VAR_7->jobs);
 FUNC_0(VAR_0, &VAR_7->flags);
 VAR_5 = FUNC_4 (VAR_7, VAR_10[VAR_9], VAR_8->data);
 FUNC_5(&VAR_7->sem);

 VAR_6 = 0;
 if ( VAR_5 == VAR_3 ) {
  FUNC_2(VAR_4);
  for (; VAR_6 < VAR_2 / 2 && (VAR_7->fids[VAR_6] & 0xffff0000); VAR_6++);
 } else {
  VAR_7->fids[VAR_9] &= 0xffff;
  VAR_4->stats.tx_window_errors++;
 }
 if (VAR_6 < VAR_2 / 2)
  FUNC_3(VAR_4);
 FUNC_1(VAR_8);
}
