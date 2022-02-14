
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct xfrm_state {int dummy; } ;
struct tx_sa {int mode; size_t vf; struct xfrm_state* xs; int used; } ;
struct rx_sa {int mode; size_t vf; struct xfrm_state* xs; int used; } ;
struct ixgbe_ipsec {struct tx_sa* tx_tbl; struct rx_sa* rx_tbl; } ;
struct ixgbe_adapter {TYPE_1__* vfinfo; struct ixgbe_ipsec* ipsec; } ;
struct TYPE_2__ {int trusted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 (struct xfrm_state*) ;
 int FUNC_2 (struct xfrm_state*) ;

int FUNC_3(struct ixgbe_adapter *VAR_8, u32 *VAR_9, u32 VAR_10)
{
 struct ixgbe_ipsec *VAR_11 = VAR_8->ipsec;
 struct xfrm_state *VAR_12;
 u32 VAR_13 = VAR_9[1];
 u16 VAR_14;

 if (!VAR_8->vfinfo[VAR_10].trusted) {
  FUNC_0(VAR_7, "vf %d attempted to delete an SA\n", VAR_10);
  return -VAR_2;
 }

 if (VAR_13 < VAR_4) {
  struct rx_sa *VAR_15;

  VAR_14 = VAR_13 - VAR_3;
  if (VAR_14 >= VAR_5) {
   FUNC_0(VAR_7, "vf %d SA index %d out of range\n",
         VAR_10, VAR_14);
   return -VAR_0;
  }

  VAR_15 = &VAR_11->rx_tbl[VAR_14];

  if (!VAR_15->used)
   return 0;

  if (!(VAR_15->mode & VAR_6) ||
      VAR_15->vf != VAR_10) {
   FUNC_0(VAR_7, "vf %d bad Rx SA index %d\n", VAR_10, VAR_14);
   return -VAR_1;
  }

  VAR_12 = VAR_11->rx_tbl[VAR_14].xs;
 } else {
  struct tx_sa *VAR_16;

  VAR_14 = VAR_13 - VAR_4;
  if (VAR_14 >= VAR_5) {
   FUNC_0(VAR_7, "vf %d SA index %d out of range\n",
         VAR_10, VAR_14);
   return -VAR_0;
  }

  VAR_16 = &VAR_11->tx_tbl[VAR_14];

  if (!VAR_16->used)
   return 0;

  if (!(VAR_16->mode & VAR_6) ||
      VAR_16->vf != VAR_10) {
   FUNC_0(VAR_7, "vf %d bad Tx SA index %d\n", VAR_10, VAR_14);
   return -VAR_1;
  }

  VAR_12 = VAR_11->tx_tbl[VAR_14].xs;
 }

 FUNC_1(VAR_12);


 FUNC_2(VAR_12);

 return 0;
}
