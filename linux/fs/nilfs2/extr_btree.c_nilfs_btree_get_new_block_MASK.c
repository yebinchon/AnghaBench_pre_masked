
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef int __u64 ;
struct TYPE_2__ {struct address_space i_btnode_cache; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct nilfs_bmap const*) ;
 struct buffer_head* FUNC_1 (struct address_space*,int ) ;
 int FUNC_2 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_3(const struct nilfs_bmap *VAR_1,
         __u64 VAR_2, struct buffer_head **VAR_3)
{
 struct address_space *VAR_4 = &FUNC_0(VAR_1)->i_btnode_cache;
 struct buffer_head *VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_5);
 *VAR_3 = VAR_5;
 return 0;
}
