
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long old_idx_sz; long long idx_growth; long long uncommitted_idx; } ;
struct ubifs_info {scalar_t__ idx_leb_size; TYPE_1__ bi; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

int FUNC_1(struct ubifs_info *VAR_1)
{
 int VAR_2;
 long long VAR_3;

 VAR_3 = VAR_1->bi.old_idx_sz + VAR_1->bi.idx_growth + VAR_1->bi.uncommitted_idx;

 VAR_3 += VAR_3 << 1;





 VAR_2 = FUNC_0(VAR_3 + VAR_1->idx_leb_size - 1, VAR_1->idx_leb_size);




 VAR_2 += 1;
 if (VAR_2 < VAR_0)
  VAR_2 = VAR_0;
 return VAR_2;
}
