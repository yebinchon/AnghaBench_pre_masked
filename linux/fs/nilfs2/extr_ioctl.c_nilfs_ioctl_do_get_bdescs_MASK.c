
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; int ns_dat; } ;
struct nilfs_bmap {int dummy; } ;
struct nilfs_bdesc {scalar_t__ bd_blocknr; scalar_t__ bd_level; int bd_offset; } ;
typedef int ssize_t ;
typedef int __u64 ;
struct TYPE_2__ {struct nilfs_bmap* i_bmap; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nilfs_bmap*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct the_nilfs *VAR_1, __u64 *VAR_2, int VAR_3,
     void *VAR_4, size_t VAR_5, size_t VAR_6)
{
 struct nilfs_bmap *VAR_7 = FUNC_0(VAR_1->ns_dat)->i_bmap;
 struct nilfs_bdesc *VAR_8 = VAR_4;
 int VAR_9, VAR_10;

 FUNC_1(&VAR_1->ns_segctor_sem);
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9 = FUNC_2(VAR_7,
       VAR_8[VAR_10].bd_offset,
       VAR_8[VAR_10].bd_level + 1,
       &VAR_8[VAR_10].bd_blocknr);
  if (VAR_9 < 0) {
   if (VAR_9 != -VAR_0) {
    FUNC_3(&VAR_1->ns_segctor_sem);
    return VAR_9;
   }
   VAR_8[VAR_10].bd_blocknr = 0;
  }
 }
 FUNC_3(&VAR_1->ns_segctor_sem);
 return VAR_6;
}
