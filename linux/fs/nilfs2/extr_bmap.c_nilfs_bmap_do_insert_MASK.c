
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u_flags; } ;
struct nilfs_bmap {TYPE_2__* b_ops; TYPE_1__ b_u; } ;
typedef int __u64 ;
struct TYPE_4__ {int (* bop_check_insert ) (struct nilfs_bmap*,int ) ;int (* bop_gather_data ) (struct nilfs_bmap*,int *,int *,int) ;int (* bop_insert ) (struct nilfs_bmap*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nilfs_bmap*,int ,int ,int *,int *,int) ;
 int FUNC_1 (struct nilfs_bmap*,int ) ;
 int FUNC_2 (struct nilfs_bmap*,int *,int *,int) ;
 int FUNC_3 (struct nilfs_bmap*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nilfs_bmap *VAR_2, __u64 VAR_3, __u64 VAR_4)
{
 __u64 VAR_5[VAR_1 + 1];
 __u64 VAR_6[VAR_1 + 1];
 int VAR_7, VAR_8;

 if (VAR_2->b_ops->bop_check_insert != ((void*)0)) {
  VAR_7 = VAR_2->b_ops->bop_check_insert(VAR_2, VAR_3);
  if (VAR_7 > 0) {
   VAR_8 = VAR_2->b_ops->bop_gather_data(
    VAR_2, VAR_5, VAR_6, VAR_1 + 1);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_7 = FUNC_0(
    VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
   if (VAR_7 == 0)
    VAR_2->b_u.u_flags |= VAR_0;

   return VAR_7;
  } else if (VAR_7 < 0)
   return VAR_7;
 }

 return VAR_2->b_ops->bop_insert(VAR_2, VAR_3, VAR_4);
}
