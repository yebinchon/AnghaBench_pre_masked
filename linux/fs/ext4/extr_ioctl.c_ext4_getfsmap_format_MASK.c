
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct getfsmap_info {int gi_idx; TYPE_1__* gi_data; int gi_sb; int gi_last_flags; } ;
struct fsmap {int dummy; } ;
struct ext4_fsmap {int fmr_flags; } ;
struct TYPE_2__ {int * fmh_recs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct fsmap*,int) ;
 int FUNC_1 (int ,struct fsmap*,struct ext4_fsmap*) ;
 int FUNC_2 (int ,struct ext4_fsmap*) ;

__attribute__((used)) static int FUNC_3(struct ext4_fsmap *VAR_1, void *VAR_2)
{
 struct getfsmap_info *VAR_3 = VAR_2;
 struct fsmap VAR_4;

 FUNC_2(VAR_3->gi_sb, VAR_1);

 VAR_3->gi_last_flags = VAR_1->fmr_flags;
 FUNC_1(VAR_3->gi_sb, &VAR_4, VAR_1);
 if (FUNC_0(&VAR_3->gi_data->fmh_recs[VAR_3->gi_idx++], &VAR_4,
   sizeof(struct fsmap)))
  return -VAR_0;

 return 0;
}
