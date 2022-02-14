
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct btrfs_delalloc_work {int work; struct inode* inode; int list; int completion; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct btrfs_delalloc_work* FUNC_3 (int,int ) ;

__attribute__((used)) static struct btrfs_delalloc_work *FUNC_4(struct inode *VAR_3)
{
 struct btrfs_delalloc_work *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(&VAR_4->completion);
 FUNC_0(&VAR_4->list);
 VAR_4->inode = VAR_3;
 FUNC_1(&VAR_4->work, VAR_1,
   VAR_2, ((void*)0), ((void*)0));

 return VAR_4;
}
