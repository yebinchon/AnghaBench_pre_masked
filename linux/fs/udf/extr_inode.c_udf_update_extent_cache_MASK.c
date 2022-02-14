
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {TYPE_2__ epos; int lstart; } ;
struct udf_inode_info {int i_alloc_type; int i_extent_cache_lock; TYPE_1__ cached_extent; } ;
struct short_ad {int dummy; } ;
struct long_ad {int dummy; } ;
struct inode {int dummy; } ;
struct extent_position {scalar_t__ bh; } ;
typedef int loff_t ;




 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,struct extent_position*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_0, loff_t VAR_1,
        struct extent_position *VAR_2)
{
 struct udf_inode_info *VAR_3 = FUNC_0(VAR_0);

 FUNC_4(&VAR_3->i_extent_cache_lock);

 FUNC_1(VAR_0);
 if (VAR_2->bh)
  FUNC_2(VAR_2->bh);
 FUNC_3(&VAR_3->cached_extent.epos, VAR_2, sizeof(*VAR_2));
 VAR_3->cached_extent.lstart = VAR_1;
 switch (VAR_3->i_alloc_type) {
 case 128:
  VAR_3->cached_extent.epos.offset -= sizeof(struct short_ad);
  break;
 case 129:
  VAR_3->cached_extent.epos.offset -= sizeof(struct long_ad);
  break;
 }
 FUNC_5(&VAR_3->i_extent_cache_lock);
}
