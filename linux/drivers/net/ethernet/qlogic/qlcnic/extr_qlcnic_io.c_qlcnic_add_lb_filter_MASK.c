
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qlcnic_filter {unsigned long ftime; int vlan_id; int fnode; scalar_t__* faddr; } ;
struct TYPE_4__ {scalar_t__ fnum; scalar_t__ fmax; struct hlist_head* fhead; } ;
struct TYPE_3__ {int fbucket_size; int fnum; struct hlist_head* fhead; } ;
struct qlcnic_adapter {int rx_mac_learn_lock; TYPE_2__ rx_fhash; int mac_learn_lock; TYPE_1__ fhash; } ;
struct hlist_head {int dummy; } ;
struct ethhdr {scalar_t__* h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,struct hlist_head*) ;
 int FUNC_1 (int *) ;
 void* VAR_6 ;
 struct qlcnic_filter* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,struct qlcnic_filter*,scalar_t__*,int) ;
 struct qlcnic_filter* FUNC_5 (struct hlist_head*,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct qlcnic_adapter*,size_t*,int,size_t) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (void*,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct qlcnic_adapter *VAR_7,
     struct sk_buff *VAR_8, int VAR_9, u16 VAR_10)
{
 struct ethhdr *VAR_11 = (struct ethhdr *)(VAR_8->data);
 struct qlcnic_filter *VAR_12, *VAR_13;
 struct hlist_head *VAR_14;
 unsigned long VAR_15;
 u64 VAR_16 = 0;
 u8 VAR_17, VAR_18;
 int VAR_19;

 if (!FUNC_8(VAR_7) || (VAR_10 == 0xffff))
  VAR_10 = 0;

 FUNC_3(&VAR_16, VAR_11->h_source, VAR_0);
 VAR_17 = FUNC_6(VAR_16, VAR_10) &
   (VAR_7->fhash.fbucket_size - 1);

 if (VAR_9) {
  if (VAR_7->rx_fhash.fnum >= VAR_7->rx_fhash.fmax)
   return;

  VAR_14 = &(VAR_7->rx_fhash.fhead[VAR_17]);

  VAR_13 = FUNC_5(VAR_14, &VAR_16, VAR_10);
  if (VAR_13) {
   VAR_15 = VAR_13->ftime;
   if (FUNC_11(VAR_6, VAR_5 * VAR_2 + VAR_15))
    VAR_13->ftime = VAR_6;
   return;
  }

  VAR_12 = FUNC_2(sizeof(struct qlcnic_filter), VAR_1);
  if (!VAR_12)
   return;

  VAR_12->ftime = VAR_6;
  FUNC_3(VAR_12->faddr, &VAR_16, VAR_0);
  VAR_12->vlan_id = VAR_10;
  FUNC_9(&VAR_7->rx_mac_learn_lock);
  FUNC_0(&(VAR_12->fnode), VAR_14);
  VAR_7->rx_fhash.fnum++;
  FUNC_10(&VAR_7->rx_mac_learn_lock);
 } else {
  VAR_14 = &VAR_7->fhash.fhead[VAR_17];

  FUNC_9(&VAR_7->mac_learn_lock);

  VAR_13 = FUNC_5(VAR_14, &VAR_16, VAR_10);
  if (VAR_13) {
   VAR_18 = VAR_10 ? VAR_4 : VAR_3;
   VAR_19 = FUNC_7(VAR_7,
       (u8 *)&VAR_16,
       VAR_10, VAR_18);
   if (!VAR_19) {
    FUNC_1(&VAR_13->fnode);
    VAR_7->fhash.fnum--;
   }

   FUNC_10(&VAR_7->mac_learn_lock);

   return;
  }

  FUNC_10(&VAR_7->mac_learn_lock);

  VAR_14 = &VAR_7->rx_fhash.fhead[VAR_17];

  FUNC_9(&VAR_7->rx_mac_learn_lock);

  VAR_13 = FUNC_5(VAR_14, &VAR_16, VAR_10);
  if (VAR_13)
   FUNC_4(VAR_7, VAR_13, &VAR_16,
        VAR_10);

  FUNC_10(&VAR_7->rx_mac_learn_lock);
 }
}
