
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lstart; int epos; } ;
struct udf_inode_info {int i_extent_cache_lock; TYPE_1__ cached_extent; } ;
struct inode {int dummy; } ;
struct extent_position {scalar_t__ bh; } ;
typedef int loff_t ;


 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct extent_position*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, loff_t VAR_1,
     loff_t *VAR_2, struct extent_position *VAR_3)
{
 struct udf_inode_info *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = 0;

 FUNC_3(&VAR_4->i_extent_cache_lock);
 if ((VAR_4->cached_extent.lstart <= VAR_1) &&
     (VAR_4->cached_extent.lstart != -1)) {

  *VAR_2 = VAR_4->cached_extent.lstart;
  FUNC_2(VAR_3, &VAR_4->cached_extent.epos,
         sizeof(struct extent_position));
  if (VAR_3->bh)
   FUNC_1(VAR_3->bh);
  VAR_5 = 1;
 }
 FUNC_4(&VAR_4->i_extent_cache_lock);
 return VAR_5;
}
