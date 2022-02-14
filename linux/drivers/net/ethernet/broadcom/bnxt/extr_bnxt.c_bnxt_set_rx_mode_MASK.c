
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; } ;
struct bnxt_vnic_info {int rx_mask; scalar_t__ mc_list_count; } ;
struct bnxt {int sp_event; struct bnxt_vnic_info* vnic_info; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bnxt*,int*) ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 struct bnxt* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_9)
{
 struct bnxt *VAR_10 = FUNC_4(VAR_9);
 struct bnxt_vnic_info *VAR_11;
 bool VAR_12 = 0;
 bool VAR_13;
 u32 VAR_14;

 if (!FUNC_6(VAR_1, &VAR_10->state))
  return;

 VAR_11 = &VAR_10->vnic_info[0];
 VAR_14 = VAR_11->rx_mask;
 VAR_14 &= ~(VAR_5 |
    VAR_4 |
    VAR_2 |
    VAR_3);

 if ((VAR_9->flags & VAR_8) && FUNC_1(VAR_10))
  VAR_14 |= VAR_5;

 VAR_13 = FUNC_3(VAR_10);

 if (VAR_9->flags & VAR_7)
  VAR_14 |= VAR_3;
 if (VAR_9->flags & VAR_6) {
  VAR_14 |= VAR_2;
  VAR_11->mc_list_count = 0;
 } else {
  VAR_12 = FUNC_0(VAR_10, &VAR_14);
 }

 if (VAR_14 != VAR_11->rx_mask || VAR_13 || VAR_12) {
  VAR_11->rx_mask = VAR_14;

  FUNC_5(VAR_0, &VAR_10->sp_event);
  FUNC_2(VAR_10);
 }
}
