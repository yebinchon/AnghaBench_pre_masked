
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_cache {int lock; int prev_desc; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct nilfs_palloc_cache* mi_palloc_cache; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,int ,int,int ,struct buffer_head**,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1,
           unsigned long VAR_2,
           int VAR_3, struct buffer_head **VAR_4)
{
 struct nilfs_palloc_cache *VAR_5 = FUNC_0(VAR_1)->mi_palloc_cache;

 return FUNC_2(VAR_1,
          FUNC_1(VAR_1, VAR_2),
          VAR_3, VAR_0,
          VAR_4, &VAR_5->prev_desc, &VAR_5->lock);
}
