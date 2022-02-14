
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {TYPE_1__* b_ops; } ;
typedef int __u64 ;
typedef int __le64 ;
struct TYPE_2__ {int (* bop_delete ) (struct nilfs_bmap*,int) ;int (* bop_clear ) (struct nilfs_bmap*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct nilfs_bmap*) ;
 int FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (struct nilfs_bmap*,int) ;
 int FUNC_4 (struct nilfs_bmap*) ;

int FUNC_5(struct nilfs_bmap *VAR_2,
        __u64 VAR_3, __u64 *VAR_4, __u64 *VAR_5, int VAR_6)
{
 __le64 *VAR_7;
 int VAR_8, VAR_9, VAR_10;




 VAR_8 = VAR_2->b_ops->bop_delete(VAR_2, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;


 if (VAR_2->b_ops->bop_clear != ((void*)0))
  VAR_2->b_ops->bop_clear(VAR_2);


 VAR_7 = FUNC_1(VAR_2);
 for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_1; VAR_9++) {
  if ((VAR_10 < VAR_6) && (VAR_9 == VAR_4[VAR_10])) {
   VAR_7[VAR_9] = (VAR_9 != VAR_3) ?
    FUNC_0(VAR_5[VAR_10]) :
    VAR_0;
   VAR_10++;
  } else
   VAR_7[VAR_9] = VAR_0;
 }

 FUNC_2(VAR_2);
 return 0;
}
