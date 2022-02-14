
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kcqe {int dummy; } ;
struct TYPE_2__ {int* pg_map_arr; scalar_t__ pg_arr; } ;
struct kcq_info {TYPE_1__ dma; int hw_idx; int next_idx; struct kcqe** kcq; } ;
struct cnic_dev {int dummy; } ;
struct bnx2x_bd_chain_next {int addr_hi; int addr_lo; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cnic_dev*,TYPE_1__*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct cnic_dev *VAR_6, struct kcq_info *VAR_7,
     bool VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = 0;
 struct kcqe **VAR_12;

 if (VAR_8)
  VAR_11 = 1;

 VAR_9 = FUNC_0(VAR_6, &VAR_7->dma, VAR_0, VAR_11);
 if (VAR_9)
  return VAR_9;

 VAR_12 = (struct kcqe **) VAR_7->dma.pg_arr;
 VAR_7->kcq = VAR_12;

 VAR_7->next_idx = VAR_3;
 VAR_7->hw_idx = VAR_2;
 if (VAR_8)
  return 0;

 VAR_7->next_idx = VAR_5;
 VAR_7->hw_idx = VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  struct bnx2x_bd_chain_next *VAR_13 =
   (struct bnx2x_bd_chain_next *) &VAR_12[VAR_10][VAR_1];
  int VAR_14 = VAR_10 + 1;

  if (VAR_14 >= VAR_0)
   VAR_14 = 0;
  VAR_13->addr_hi = (u64) VAR_7->dma.pg_map_arr[VAR_14] >> 32;
  VAR_13->addr_lo = VAR_7->dma.pg_map_arr[VAR_14] & 0xffffffff;
 }
 return 0;
}
