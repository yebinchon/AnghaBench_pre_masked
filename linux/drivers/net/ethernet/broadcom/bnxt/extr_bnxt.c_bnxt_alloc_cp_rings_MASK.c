
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ring_struct {int map_idx; int ring_mem; } ;
struct bnxt_cp_ring_info {struct bnxt_napi* bnapi; struct bnxt_cp_ring_info** cp_ring_arr; struct bnxt_ring_struct cp_ring_struct; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int flags; int cp_nr_rings; int rx_nr_rings; int tx_nr_rings; struct bnxt_napi** bnapi; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct bnxt_cp_ring_info* FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*,int *) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_5)
{
 bool VAR_6 = !!(VAR_5->flags & VAR_1);
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_3(VAR_5);
 VAR_9 = FUNC_2(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_5->cp_nr_rings; VAR_7++) {
  struct bnxt_napi *VAR_11 = VAR_5->bnapi[VAR_7];
  struct bnxt_cp_ring_info *VAR_12;
  struct bnxt_ring_struct *VAR_13;

  if (!VAR_11)
   continue;

  VAR_12 = &VAR_11->cp_ring;
  VAR_12->bnapi = VAR_11;
  VAR_13 = &VAR_12->cp_ring_struct;

  VAR_8 = FUNC_1(VAR_5, &VAR_13->ring_mem);
  if (VAR_8)
   return VAR_8;

  if (VAR_10 && VAR_7 >= VAR_9)
   VAR_13->map_idx = VAR_7 + VAR_10;
  else
   VAR_13->map_idx = VAR_7;

  if (!(VAR_5->flags & VAR_0))
   continue;

  if (VAR_7 < VAR_5->rx_nr_rings) {
   struct bnxt_cp_ring_info *VAR_14 =
    FUNC_0(VAR_5);

   VAR_12->cp_ring_arr[VAR_2] = VAR_14;
   if (!VAR_14)
    return -VAR_4;
   VAR_14->bnapi = VAR_11;
  }
  if ((VAR_6 && VAR_7 < VAR_5->tx_nr_rings) ||
      (!VAR_6 && VAR_7 >= VAR_5->rx_nr_rings)) {
   struct bnxt_cp_ring_info *VAR_15 =
    FUNC_0(VAR_5);

   VAR_12->cp_ring_arr[VAR_3] = VAR_15;
   if (!VAR_15)
    return -VAR_4;
   VAR_15->bnapi = VAR_11;
  }
 }
 return 0;
}
