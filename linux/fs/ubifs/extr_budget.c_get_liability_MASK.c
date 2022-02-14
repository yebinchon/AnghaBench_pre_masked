
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long idx_growth; long long data_growth; long long dd_growth; } ;
struct ubifs_info {int space_lock; TYPE_1__ bi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long long FUNC_2(struct ubifs_info *VAR_0)
{
 long long VAR_1;

 FUNC_0(&VAR_0->space_lock);
 VAR_1 = VAR_0->bi.idx_growth + VAR_0->bi.data_growth + VAR_0->bi.dd_growth;
 FUNC_1(&VAR_0->space_lock);
 return VAR_1;
}
